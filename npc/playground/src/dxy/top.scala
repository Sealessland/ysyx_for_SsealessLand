package dxy

import chisel3._
import chisel3.util._

class Top extends Module {
  val io = IO(new Bundle {
    val inst = Input(UInt(32.W))
    val pc = Output(UInt(32.W))
  })

  // 实例化模块
  val fetch = Module(new Fetch)
  val executer = Module(new executer)
  val mem = Module(new Mem)

  // 连接 fetch 模块
  fetch.io.pc := io.pc
  fetch.io.mem_rdata := mem.io.mem_rdata

  // 连接 executer 模块
  executer.io.opcode := io.inst(6, 0)
  executer.io.rs1_addr := io.inst(19, 15)
  executer.io.rs2_addr := io.inst(24, 20)
  executer.io.rd_addr := io.inst(11, 7)
  executer.io.rs1_en := true.B
  executer.io.rs2_en := true.B
  executer.io.rd_en := true.B
  executer.io.imm := io.inst(31, 20)
  executer.io.pc := io.pc
  executer.io.rs1_data := 0.U // 需要从寄存器文件读取
  executer.io.rs2_data := 0.U // 需要从寄存器文件读取
  executer.io.mem_rdata := mem.io.mem_rdata

  // 连接 mem 模块
  mem.io.clock := clock
  mem.io.reset := reset
  mem.io.mem_wen := executer.io.mem_wen
  mem.io.mem_ren := executer.io.mem_ren
  mem.io.mem_addr := executer.io.mem_addr
  mem.io.mem_wdata := executer.io.mem_wdata

  // 输出 PC
  io.pc := executer.io.next_pc
}