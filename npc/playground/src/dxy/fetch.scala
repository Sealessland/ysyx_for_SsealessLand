package dxy

import chisel3._
import chisel3.util._

class Fetch extends Module {
  val io = IO(new Bundle {
    val pc = Input(UInt(32.W))  // 将 var 改为 val
    val inst = Output(UInt(32.W))
    val mem_ren = Output(Bool())
    val mem_addr = Output(UInt(32.W))
    val mem_rdata = Input(UInt(32.W))
  })

  io.mem_ren := true.B
  io.mem_addr := io.pc
  io.inst := io.mem_rdata
}

class FetchUnit extends Module {
  val fetchMemAccess = Module(new FetchMemoryAccess)
  val fetch = Module(new Fetch)
  val io = IO(new Bundle {
    val pc = Input(UInt(32.W))
    val inst = Output(UInt(32.W))
  })

  // 连接保持不变
  fetchMemAccess.io.pc := io.pc
  fetchMemAccess.io.fetch_en := true.B

  fetch.io.pc := io.pc
  fetch.io.mem_rdata := fetchMemAccess.io.inst

  io.inst := fetch.io.inst
}