package dxy

import chisel3._
import chisel3.util.experimental._
import chisel3.util._
class RegFile extends Module {
  val io = IO(new Bundle {
    val rs1_addr = Input(UInt(5.W))
    val rs2_addr = Input(UInt(5.W))
    val rs1_data = Output(UInt(64.W))
    val rs2_data = Output(UInt(64.W))
    val rd_addr  = Input(UInt(5.W))
    val rd_data  = Input(UInt(64.W))
    val rd_en    = Input(Bool())
  })

  val rf = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))

  when(io.rd_en && (io.rd_addr =/= 0.U)) {
    rf(io.rd_addr) := io.rd_data;
  }

  io.rs1_data := Mux((io.rs1_addr =/= 0.U), rf(io.rs1_addr), 0.U)
  io.rs2_data := Mux((io.rs2_addr =/= 0.U), rf(io.rs2_addr), 0.U)

}



class CSR extends Module {
  val io = IO(new Bundle {
    val csr_addr = Input(UInt(12.W))
    val csr_wdata = Input(UInt(64.W))
    val csr_rdata = Output(UInt(64.W))
    val csr_wen = Input(Bool())
  })

  // CSR地址定义
  val MSTATUS = 0x300.U(12.W)
  val MTVEC   = 0x305.U(12.W)
  val MEPC    = 0x341.U(12.W)
  val MCAUSE  = 0x342.U(12.W)

  // CSR寄存器实例化
  val mstatus = RegInit(0.U(64.W))
  val mtvec   = RegInit(0.U(64.W))
  val mepc    = RegInit(0.U(64.W))
  val mcause  = RegInit(0.U(64.W))

  // 写操作
  when(io.csr_wen) {
    switch(io.csr_addr) {
      is(MSTATUS) { mstatus := io.csr_wdata }
      is(MTVEC)   { mtvec   := io.csr_wdata }
      is(MEPC)    { mepc    := io.csr_wdata }
      is(MCAUSE)  { mcause  := io.csr_wdata }
    }
  }

  // 读操作
  io.csr_rdata := MuxLookup(io.csr_addr, 0.U)(Seq(
    MSTATUS -> mstatus,
    MTVEC   -> mtvec,
    MEPC    -> mepc,
    MCAUSE  -> mcause
  ))
}