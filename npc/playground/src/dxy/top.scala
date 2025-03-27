package dxy

import chisel3._
import chisel3.util._

class Top extends Module {
  val io = IO(new Bundle {
    // Input instruction from external source (Verilator)
    val inst = Input(UInt(32.W))
    // Output PC for instruction fetch
    val pc = Output(UInt(32.W))

    // Memory interface for Verilator
    val mem_wen = Output(Bool())
    val mem_ren = Output(Bool())
    val mem_addr = Output(UInt(32.W))
    val mem_wdata = Output(UInt(32.W))
    val mem_rdata = Input(UInt(32.W))
  })

  // Program counter register
  val pc_reg = RegInit(0.U(32.W))

  // Module instantiations
  val decode = Module(new Decode())
  val regfile = Module(new RegFile())
  val execute = Module(new executer())

  // Connect decoder
  decode.io.inst := io.inst

  // Connect register file
  regfile.io.rs1_addr := decode.io.rs1_addr
  regfile.io.rs2_addr := decode.io.rs2_addr
  regfile.io.rd_addr := execute.io.rd_addr
  regfile.io.rd_data := execute.io.rd_data
  regfile.io.rd_en := execute.io.rd_wen

  // Connect execute module
  execute.io.opcode := decode.io.opcode
  execute.io.rs1_addr := decode.io.rs1_addr
  execute.io.rs2_addr := decode.io.rs2_addr
  execute.io.rd_addr := decode.io.rd_addr
  execute.io.rs1_en := decode.io.rs1_en
  execute.io.rs2_en := decode.io.rs2_en
  execute.io.rd_en := decode.io.rd_en
  execute.io.imm := decode.io.imm(31, 0) // Convert 64-bit to 32-bit
  execute.io.pc := pc_reg
  execute.io.rs1_data := regfile.io.rs1_data(31, 0) // Convert 64-bit to 32-bit
  execute.io.rs2_data := regfile.io.rs2_data(31, 0) // Convert 64-bit to 32-bit
  execute.io.mem_rdata := io.mem_rdata

  // Connect memory interface
  io.mem_wen := execute.io.mem_wen
  io.mem_ren := execute.io.mem_ren
  io.mem_addr := execute.io.mem_addr
  io.mem_wdata := execute.io.mem_wdata

  // Update PC based on branch results
  when(execute.io.branch_taken) {
    pc_reg := execute.io.next_pc
  }.otherwise {
    pc_reg := pc_reg + 4.U
  }

  // Output current PC
  io.pc := pc_reg
}