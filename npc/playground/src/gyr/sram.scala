package gyr

import chisel3._
import chisel3.util._
import chisel3.experimental._

// ===================================================================
// 接口定义 (与之前相同)
// ===================================================================
class ARport extends Bundle {
  val addr: UInt = UInt(32.W)
}
class Rport extends Bundle {
  val resp: UInt = UInt(2.W);
  val data: UInt = UInt(32.W)
}
class AWport extends Bundle { val
addr: UInt = UInt(32.W)
}
class Wport extends Bundle { val
data: UInt = UInt(32.W); val strb: UInt = UInt(4.W)
}
class Bport extends Bundle { val
resp: UInt = UInt(2.W)
}

class AXI4 extends Bundle {
  val ar: DecoupledIO[ARport] = Flipped(Decoupled(new ARport))
  val r: DecoupledIO[Rport] = Decoupled(new Rport)
  val aw: DecoupledIO[AWport] = Flipped(Decoupled(new AWport))
  val w: DecoupledIO[Wport] = Flipped(Decoupled(new Wport))
  val b: DecoupledIO[Bport] = Decoupled(new Bport)
}

// ===================================================================
// DPI BlackBox (与之前相同)
// ===================================================================
class DPIread extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Reset())
    val en = Input(Bool())
    val ar_addr = Input(UInt(32.W))
    val r = Output(new Rport)
    val done = Output(Bool())
  })
  setInline("DPIread.v",
    """module DPIread(
      |  input        clock,
      |  input        reset,
      |  input        en,
      |  input [31:0] ar_addr,
      |  output [31:0] r_data,
      |  output [1:0]  r_resp,
      |  output reg    done
      |);
      |  // 导入C函数
      |  import "DPI-C" function void memory_read(input int ar_addr, output int r_data);
      |
      |  // 使用独立的变量避免混合赋值
      |  reg [31:0] r_data_reg;
      |  reg [31:0] r_data_comb;
      |   reg [2:0] delay;
      |  // 读响应总是OK
      |  assign r_resp = 2'b00;
      |  assign r_data = r_data_reg;
      |
      |  // 组合逻辑处理DPI调用
      |  always @(*) begin
      |    if (en) begin
      |      memory_read(ar_addr, r_data_comb);
      |    end else begin
      |      r_data_comb = 32'b0;
      |    end
      |  end
      |
      |  // 时序逻辑
      |  always @(posedge clock) begin
      |    if (reset) begin
      |      done <= 1'b0;
      |      r_data_reg <= 32'b0;
      |    end else begin
      |      // done信号是en信号延迟一个周期的结果
      |      done <= en;
      |      // 将组合逻辑的结果注册到时序输出
      |      r_data_reg <= r_data_comb;
      |    end
      |  end
      |endmodule
      |""".stripMargin)
}

class DPIwrite extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val reset = Input(Reset())
    val en = Input(Bool())
    val aw_addr = Input(UInt(32.W))
    val w_data = Input(UInt(32.W))
    val w_strb = Input(UInt(4.W))
    val b  = Output(new Bport)
    val done = Output(Bool())
  })
  setInline("DPIwrite.v",
    """module DPIwrite(
      |  input        clock,
      |  input        reset,
      |  input        en,
      |  input [31:0] aw_addr,
      |  input [31:0] w_data,
      |  input [3:0]  w_strb,
      |  output [1:0] b_resp,
      |  output reg   done
      |);
      |  // 导入C函数
      |  import "DPI-C" function void memory_write(input int aw_addr, input int w_data, input int w_strb);
      |
      |  // 写响应总是OK
      |  assign b_resp = 2'b00;
      |
      |  // 时序逻辑
      |  always @(posedge clock) begin
      |    if (reset) begin
      |      done <= 1'b0;
      |    end else begin
      |      done <= en;
      |
      |      // 仅在使能时调用mem_write
      |      if (en) begin
      |        memory_write(aw_addr, w_data, w_strb);
      |        done <= 1'b1; // 写操作完成
      |      end
      |    end
      |  end
      |endmodule
      |""".stripMargin)
}

// ===================================================================
// 最优设计的 SRAM 模块 (纯粹核心逻辑)
// ===================================================================

class SRAM extends Module {
  val io = IO(new AXI4)

  val read_backend = Module(new DPIread)
  val write_backend = Module(new DPIwrite)

  read_backend.io.clock := clock
  read_backend.io.reset := reset
  write_backend.io.clock := clock
  write_backend.io.reset := reset

  // DPI 使能信号 (已修正)
  read_backend.io.en := io.ar.fire
  // *** 关键修正 ***: 在地址和数据握手成功的下一个周期，触发后端写操作
  write_backend.io.en := RegNext(io.aw.fire && io.w.fire, init = false.B)

  //----------------------------------------------------------------
  // 读通道核心状态机 (已增加延迟)
  //----------------------------------------------------------------
  val r_sIdle :: r_sResp :: Nil = Enum(2)
  val r_state = RegInit(r_sIdle)

  // 后端信号
  val r_backend_done = read_backend.io.done
  read_backend.io.ar_addr := io.ar.bits.addr

  // *** 新增延迟逻辑 ***: 用于增加一周期延迟的寄存器
  val r_valid_reg = RegInit(false.B)
  val r_bits_reg = Reg(new Rport)

  // 默认信号
  io.ar.ready := false.B
  io.r.valid  := r_valid_reg // 输出 valid 由延迟寄存器驱动
  io.r.bits   := r_bits_reg  // 输出 bits 由延迟寄存器驱动

  switch(r_state) {
    is(r_sIdle) {
      io.ar.ready := true.B
      when(io.ar.fire) {
        r_state := r_sResp
      }
    }
    is(r_sResp) {
      // 当后端完成时（周期T+1），我们不立即输出，而是将结果锁存到延迟寄存器中
      when(r_backend_done) {
        r_valid_reg := true.B
        r_bits_reg  := read_backend.io.r
      }

      // 当延迟后的数据被主设备取走时（最早在周期T+2），才返回空闲状态
      when(io.r.fire) {
        r_valid_reg := false.B // 清除 valid 标志
        r_state := r_sIdle
      }
    }
  }

  //----------------------------------------------------------------
  // 写通道核心状态机 (已增加延迟)
  //----------------------------------------------------------------
  val w_sIdle :: w_sResp :: Nil = Enum(2)
  val w_state = RegInit(w_sIdle)

  // 后端信号
  val w_backend_done = write_backend.io.done
  write_backend.io.aw_addr := RegNext(io.aw.bits.addr) // 地址和数据也需延迟一拍以匹配en信号
  write_backend.io.w_data  := RegNext(io.w.bits.data)
  write_backend.io.w_strb  := RegNext(io.w.bits.strb)

  // *** 新增延迟逻辑 ***: 用于增加一周期延迟的寄存器
  val b_valid_reg = RegInit(false.B)
  val b_bits_reg = Reg(new Bport)

  // 默认信号
  io.aw.ready := false.B
  io.w.ready  := false.B
  io.b.valid  := b_valid_reg // 输出 valid 由延迟寄存器驱动
  io.b.bits   := b_bits_reg  // 输出 bits 由延迟寄存器驱动

  switch(w_state) {
    is(w_sIdle) {
      // ** 行为简化 **: 假设 AW 和 W 通道总是一起到达
      // 在一个更完备的AXI Slave中，aw和w应该可以被独立接收
      io.aw.ready := true.B
      io.w.ready  := true.B
      when(io.aw.fire && io.w.fire) {
        w_state := w_sResp
      }
    }
    is(w_sResp) {
      // 当后端写操作完成时（周期T+2），将响应锁存到延迟寄存器
      when(w_backend_done) {
        b_valid_reg := true.B
        b_bits_reg  := write_backend.io.b
      }

      // 当延迟后的响应被主设备取走时（最早在周期T+3），返回空闲状态
      when(io.b.fire) {
        b_valid_reg := false.B
        w_state := w_sIdle
      }
    }
  }
}