package dxy

import chisel3._
import chisel3.util._
import chisel3.experimental._

class Mem extends BlackBox with HasBlackBoxResource {
  val io = IO(new Bundle {
    val clock      = Input(Clock())
    val reset      = Input(Bool())
    val mem_wen    = Input(Bool())       // Memory write enable
    val mem_ren    = Input(Bool())       // Memory read enable
    val mem_addr   = Input(UInt(32.W))   // Memory address
    val mem_wdata  = Input(UInt(32.W))   // Data to write
    val mem_rdata  = Output(UInt(32.W))  // Read data
  })
  addResource("/vsrc/mem.sv")
}