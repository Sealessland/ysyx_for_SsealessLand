package dxy

import chisel3._
import chisel3.experimental._
import chisel3.util._

// Fetch-specific memory access module
class FetchMemoryAccess extends Module {
  val io = IO(new Bundle {
    val pc        = Input(UInt(32.W))  // Program counter input
    val inst      = Output(UInt(32.W)) // Fetched instruction output
    val fetch_en  = Input(Bool())      // Fetch enable signal
  })

  // Instantiate the DPI memory BlackBox
  val dpiMem = Module(new DPIReadMemory())

  // Connect DPI memory interface
  dpiMem.io.clock     := clock
  dpiMem.io.reset     := reset
  dpiMem.io.mem_ren   := io.fetch_en   // Enable memory read when fetch is enabled
  dpiMem.io.mem_addr  := io.pc         // Use PC as memory address
  dpiMem.io.data_len  := 2.U           // Always use word (4 bytes) for instruction fetch

  // Output the fetched instruction
  io.inst := dpiMem.io.mem_rdata
}
