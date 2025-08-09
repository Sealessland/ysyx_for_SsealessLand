package xininn
import chisel3._
import chisel3.util._
import AXIUtils._
import chisel3.DontCare.:=

import scala.collection.immutable
import xininn.utils._

class W2F extends Bundle {
  val inst_done = Bool()
}
class pcCtrl extends Bundle{
  val dnpc = Input(UInt(32.W))
  val pc_en = Input(Bool())
}
class FDBus extends Bundle {
  val inst = Output(UInt(32.W)) // Instruction fetched from memory
  val pc   = Output(UInt(32.W)) // Program Counter of the fetched instruction
    // Indicates if the fetched instruction is valid
}
class IFU extends Module {
  val io = IO(new Bundle {
    val out = Decoupled(new FDBus) // Output bus for fetched instruction and PC
    val axi   = (new AXI) // AXI interface for memory access
    val pcCtrl = new pcCtrl
  })
  val inst_buffer = Module(new Queue(Vec(2,UInt(32.W)), 3,pipe=true,flow=true,hasFlush = true))

  AXIUtils.drive_aw_defaults(io.axi.aw)
  AXIUtils.drive_w_defaults(io.axi.w)
  AXIUtils.drive_write_response_defaults(io.axi.b)
  io.axi.ar.bits.arid   :=0.U
  io.axi.ar.bits.arlen  :=1.U
  io.axi.ar.bits.arsize :=2.U
  io.axi.ar.bits.araddr :=0.U
  io.axi.ar.bits.arburst:=1.U
  io.axi.ar.valid:=false.B
  io.axi.r.ready:= inst_buffer.io.enq.ready
  inst_buffer.flush:= false.B
  inst_buffer.io.enq.bits(0) := 0.U
  inst_buffer.io.enq.bits(1) := 0.U
  inst_buffer.io.enq.valid := false.B
  val pc = RegInit("h80000000".U(32.W)) // Initialize PC to a specific address
  val inst = RegInit(0.U(32.W)) // Register to hold the fetched instruction
  val s_idle :: s_fetching :: s_jump :: s_wait :: Nil = Enum(4)
  val state = RegInit(s_idle)


  when(state === s_idle){
    inst_req(io.axi.ar, pc)
    when(io.axi.r.valid){
      state := s_fetching
    }

  }
  when(state === s_fetching){
    when(io.axi.r.fire){
      inst_buffer.io.enq.valid := true.B
      inst_buffer.io.enq.bits(0) := io.axi.r.bits.rdata
      inst_buffer.io.enq.bits(1) := pc
      pc := pc +4.U
      state := s_idle
    }
  }
  // 连接 deq.ready 和 bits
  inst_buffer.io.deq.ready := io.out.ready
  io.out.bits.pc   := inst_buffer.io.deq.bits(1)
  io.out.bits.inst := inst_buffer.io.deq.bits(0)

  // 完备的 valid 驱动逻辑 (单行版本)
  // 输出有效 = 队列非空 AND 没有跳转
  io.out.valid := inst_buffer.io.deq.valid && !io.pcCtrl.pc_en

when(io.pcCtrl.pc_en){
  inst_buffer.flush:=true.B
  pc := io.pcCtrl.dnpc
  io.axi.ar.bits.arid:=1.U
  state := s_idle
}



}

class Fetch_v5 extends Module {
  val io = IO(new Bundle {
    val out    = Decoupled(new FDBus) // 输出到译码阶段
    val axi    = new AXI              // 完整的 AXI4 接口
    val pcCtrl = new pcCtrl           // 跳转控制接口
  })

  // ---------------------------------------------------------------------------
  //  1. 内部状态和寄存器 (逻辑不变)
  // ---------------------------------------------------------------------------

  val pc = RegInit("h80000000".U(32.W))

  // 单项指令缓冲
  val inst_buf_valid = RegInit(false.B)
  val inst_buf_bits  = Reg(new FDBus) // 使用 FDBus 作为缓冲的数据类型

  val s_idle :: s_axi_read :: s_axi_wait :: Nil = Enum(3)
  val state = RegInit(s_idle)

  // ---------------------------------------------------------------------------
  //  2. 默认信号连接 (扩展为 AXI4)
  // ---------------------------------------------------------------------------

  // --- AXI 写通道默认无效 (IFU 只读) ---
  // 使用 AXIUtils 或手动设置为默认值
  io.axi.aw.valid := false.B
  io.axi.aw.bits.awid    := 0.U
  io.axi.aw.bits.awaddr  := 0.U
  io.axi.aw.bits.awlen   := 0.U
  io.axi.aw.bits.awsize  := 0.U
  io.axi.aw.bits.awburst := 0.U

  io.axi.w.valid := false.B
  io.axi.w.bits.wdata := 0.U
  io.axi.w.bits.wstrb := 0.U
  io.axi.w.bits.wlast := false.B

  io.axi.b.ready := false.B

  // --- AXI 读通道默认信号 ---
  io.axi.ar.valid         := false.B
  io.axi.ar.bits.araddr   := pc
  // 为 AXI4 新增的信号提供固定的、符合单次读操作的默认值
  io.axi.ar.bits.arid     := 0.U      // 事务ID，固定为0
  io.axi.ar.bits.arlen    := 0.U      // 突发长度为1 (0表示1拍)
  io.axi.ar.bits.arsize   := 2.U      // 传输大小为4字节 (2^2)
  io.axi.ar.bits.arburst  := 1.U      // INCR burst type

  io.axi.r.ready := false.B

  // --- 输出通道默认连接 ---
  io.out.valid     := inst_buf_valid
  io.out.bits      := inst_buf_bits

  // ---------------------------------------------------------------------------
  //  3. 核心控制逻辑 (逻辑不变)
  // ---------------------------------------------------------------------------

  val buf_is_full = inst_buf_valid

  // 下游可以接收数据时，设置 io.out.ready
  // 当下游接收数据时，缓冲变为空
  when(io.out.fire) {
    inst_buf_valid := false.B
  }

  // AXI 读事务状态机 (逻辑不变)
  switch(state) {
    is(s_idle) {
      when(!buf_is_full) {
        state := s_axi_read
      }
    }

    is(s_axi_read) {
      io.axi.ar.valid := true.B
      // araddr 和其他 ar.bits 信号已在默认部分设置好

      when(io.axi.ar.fire) {
        state := s_axi_wait
      }
    }

    is(s_axi_wait) {
      io.axi.r.ready := true.B

      when(io.axi.r.fire) {
        inst_buf_valid := true.B
        inst_buf_bits.inst := io.axi.r.bits.rdata // 直接使用 rdata
        inst_buf_bits.pc   := pc

        pc := pc + 4.U
        state := s_idle
      }
    }
  }

  // ---------------------------------------------------------------------------
  //  4. 分支/跳转冲刷逻辑 (使用 pcCtrl 接口)
  // ---------------------------------------------------------------------------

  when(io.pcCtrl.pc_en) {
    pc := io.pcCtrl.dnpc // 更新PC到跳转目标

    // 强制状态机复位到空闲，取消正在进行的AXI事务
    // 如果在s_axi_read，io.axi.ar.valid会被拉低
    state := s_idle

    // 清空指令缓冲，使当前输出无效
    inst_buf_valid := false.B
    inst_buf_bits.inst := 0.U // 可选的清零操作
    inst_buf_bits.pc   := 0.U
  }
}