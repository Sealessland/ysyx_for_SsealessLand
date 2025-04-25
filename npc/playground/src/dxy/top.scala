package dxy

import chisel3._
import chisel3.util._

class CPU extends Module {
  val io = IO(new Bundle {
    // 添加调试信号
    val debug_pc = Output(UInt(32.W))
    val debug_inst = Output(UInt(32.W))
    val debug_mem_busy = Output(Bool())
  })

  val fetchUnit = Module(new FetchUnit())
  val decode = Module(new Decode())
  val execute = Module(new execution())
  val regFile = Module(new RegFile())

  // Program counter (PC)
  val pc = RegInit(0.U(32.W))
  val pc_stall = Wire(Bool())

  // 当内存访问忙时，暂停PC更新
  pc_stall := execute.io.mem_busy

  // 调试信号
  io.debug_pc := pc
  io.debug_inst := fetchUnit.io.inst
  io.debug_mem_busy := execute.io.mem_busy

  // Connect FetchUnit
  fetchUnit.io.pc := pc

  // Connect Decode
  decode.io.inst := fetchUnit.io.inst

  // Connect RegFile
  regFile.io.rs1_addr := decode.io.rs1_addr
  regFile.io.rs2_addr := decode.io.rs2_addr
  regFile.io.rd_addr := decode.io.rd_addr
  regFile.io.rd_en := decode.io.rd_en

  // Connect Execute
  execute.io.rs1_data := regFile.io.rs1_data
  execute.io.rs2_data := regFile.io.rs2_data
  execute.io.opcode := decode.io.opcode
  execute.io.imm := decode.io.imm
  execute.io.rdEn  := decode.io.rd_en
  execute.io.pc := pc

  // Write back to RegFile
  regFile.io.rd_data := execute.io.rd_data

  // Update PC - 只有当不暂停时才更新PC
  when(!pc_stall) {
    pc := execute.io.next_pc
  }
}
