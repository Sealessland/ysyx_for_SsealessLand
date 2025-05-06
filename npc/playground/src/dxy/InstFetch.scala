package dxy
import chisel3._
import chisel3.util._

class InstFetch extends Module {
  val io = IO(new Bundle {
    val imem = new RomIO
    val pc   = Output(UInt(32.W))
    val inst = Output(UInt(32.W))
    val dnpc = Input(UInt(32.W))      // 来自Control的下一个PC值
    val pcSrc = Input(Bool())         // PC选择信号，决定是否分支/跳转
  })

  val pc_en = RegInit(false.B)
  pc_en := true.B

  // PC寄存器，初始值为0x80000000
  val pc = RegInit("h7ffffffc".U(32.W))
  io.imem.en   := true.B
  io.imem.addr := pc.asUInt
  // PC更新逻辑，支持分支和跳转
  pc := Mux(io.pcSrc, io.dnpc, pc + 4.U)

  // 内存接口连接


  // 输出当前PC和指令
  io.pc   := Mux(pc_en, pc, 0.U)
  io.inst := Mux(pc_en, io.imem.rdata(31, 0), 0.U)
}