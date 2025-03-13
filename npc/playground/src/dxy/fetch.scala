package dxy

import chisel3._
import chisel3.util._

class Fetch extends Module {
  val io = IO(new Bundle {
    val pc = Input(UInt(32.W))
    val inst = Output(UInt(32.W))
    val mem_ren = Output(Bool())
    val mem_addr = Output(UInt(32.W))
    val mem_rdata = Input(UInt(32.W))
  })

  io.mem_ren := true.B
  io.mem_addr := io.pc
  io.inst := io.mem_rdata
}