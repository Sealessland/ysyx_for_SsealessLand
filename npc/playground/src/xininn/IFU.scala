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
  io.axi.r.ready:= !inst_buffer.io.enq.ready
  inst_buffer.flush:= false.B
  inst_buffer.io.enq.bits(0) := 0.U
  inst_buffer.io.enq.bits(1) := 0.U
  inst_buffer.io.enq.valid := false.B
  val pc = RegInit("h20000000".U(32.W)) // Initialize PC to a specific address
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
