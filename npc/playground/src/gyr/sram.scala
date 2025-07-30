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
      |  import "DPI-C" function void mem_read(input int ar_addr, output int r_data);
      |
      |  // 使用独立的变量避免混合赋值
      |  reg [31:0] r_data_reg;
      |  reg [31:0] r_data_comb;
      |
      |  // 读响应总是OK
      |  assign r_resp = 2'b00;
      |  assign r_data = r_data_reg;
      |
      |  // 组合逻辑处理DPI调用
      |  always @(*) begin
      |    if (en) begin
      |      mem_read(ar_addr, r_data_comb);
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
      |  import "DPI-C" function void mem_write(input int aw_addr, input int w_data);
      |
      |  // 写响应总是OK
      |  assign b_resp = 2'b00;
      |
      |  // 时序逻辑
      |  always @(posedge clock) begin
      |    if (reset) begin
      |      done <= 1'b0;
      |    end else begin
      |      // done信号是en信号延迟一个周期的结果。
      |      // 这表示如果在周期N使能了写操作，则在周期N+1操作完成。
      |      done <= en;
      |
      |      // 仅在使能时调用mem_write
      |      if (en) begin
      |        mem_write(aw_addr, w_data);
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
  read_backend.io.en := io.ar.fire
  write_backend.io.en := io.aw.fire && io.w.fire
  //----------------------------------------------------------------
  // 读通道核心状态机 (2状态实现)
  //----------------------------------------------------------------
  val r_sIdle :: r_sResp :: Nil = Enum(2)
  val r_state = RegInit(r_sIdle)

  val r_backend_done = read_backend.io.done

  // 地址直接连接到后端
  read_backend.io.ar_addr := io.ar.bits.addr

  // 默认信号
  io.ar.ready := false.B
  io.r.valid  := false.B
  io.r.bits   := read_backend.io.r

  switch(r_state) {
    is(r_sIdle) {
      // 在空闲状态，永远准备好接收请求
      io.ar.ready := true.B
      when(io.ar.fire) {
        // 请求被后端接受，立即进入响应状态等待
        r_state := r_sResp
      }
    }
    is(r_sResp) {
      // 在响应状态，valid信号直接由后端的完成信号驱动
      io.r.valid := r_backend_done

      when(io.r.fire) {
        // 数据被主设备取走，返回空leisure状态
        r_state := r_sIdle
      }
    }
  }

  //----------------------------------------------------------------
  // 写通道核心状态机
  //----------------------------------------------------------------
  val aw_reg = Reg(new AWport)
  val w_reg = Reg(new Wport)
  val w_sIdle :: w_sResp :: Nil = Enum(2)
  val w_state = RegInit(w_sIdle)

  // 写操作的“完成”信号在写数据被接收后的下一个周期产生
  val w_req_accepted = io.w.fire && w_state === w_sResp
  val w_backend_done = write_backend.io.done

  // 默认信号
  io.aw.ready := false.B
  io.w.ready  := false.B
  io.b.valid  := false.B
  io.b.bits   := write_backend.io.b
  write_backend.io.en := w_req_accepted
  write_backend.io.aw_addr := aw_reg.addr
  write_backend.io.w_data  := io.w.bits.data
  write_backend.io.w_strb  := io.w.bits.strb

  switch(w_state) {
    is(w_sIdle) {
      io.aw.ready := true.B
      when(io.aw.fire&&io.w.fire) {
        aw_reg  := io.aw.bits
        w_reg   := io.w.bits
        w_state := w_sResp
      }
    }
    is(w_sResp) {
      // valid信号由后端的完成信号驱动
      io.b.valid := w_backend_done
      when(io.b.fire) {
        // 写响应被接收，返回空闲状态
        w_state := w_sIdle
      }
    }
  }
}