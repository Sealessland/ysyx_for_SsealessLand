package SLLpc

import chisel3._
import chisel3.util._

class ExecuteBundle extends Bundle {
  val inst_type = Input(UInt(5.W))       // 指令类型
  val rs1_data = Input(UInt(32.W))        // rs1寄存器数据
  val rs2_data = Input(UInt(32.W))        // rs2寄存器数据
  val rd = Output(UInt(5.W))               // rd寄存器地址
  val rd_data = Output(UInt(32.W))          // rd寄存器数据
  val imm = Input(UInt(32.W))             // 立即数
  val pc = Input(UInt(32.W))               // 当前PC
  val alu_op = Input(UInt(4.W))           // ALU操作码
  val op_control = Output(UInt(8.W))       // 控制信号
  val alu_result = Output(UInt(32.W))      // ALU计算结果
  val next_pc = Output(UInt(32.W))         // 下一个PC
  val write_data = Output(UInt(32.W)) 
  val mem_ren = Output(Bool())
  val mem_wen = Output(Bool())
  val mem_addr = Output(UInt(32.W))
  val mem_wdata = Output(UInt(32.W))  
}

class execute extends Module {
  val io = IO(new ExecuteBundle)
  val alu = Module(new ALU)
  val inst_type = io.inst_type
  switch(inst_type){
    is(BitPat("b00010")) { // lui, auipc
      // 数据流向: PC + 立即数 -> rd
      // ... existing code ...
      alu.io.alu_op := io.alu_op
      alu.io.A := io.pc
      alu.io.B := io.imm
      io.rd := io.rd
      io.rd_data := alu.io.result
      io.mem_ren := false.B 
      io.mem_wen := false.B
      io.mem_addr := 0.U
      io.mem_wdata := 0.U
      
      
    }
    is(BitPat("b00001")) { // Jar
      // 数据流向: PC + 立即数 -> rd, 更新PC
      // ... existing code ...
      alu.io.alu_op := io.alu_op
      alu.io.A := io.pc
      alu.io.B := io.imm
      io.rd := io.rd
      io.rd_data := io.pc + 4.U
      io.next_pc := alu.io.result + io.pc

      io.mem_ren := false.B 
      io.mem_wen := false.B
      io.mem_addr := 0.U
      io.mem_wdata := 0.U 
    }
    is(BitPat("b01001")) { // IJ
      // 数据流向: src1 + 立即数 -> rd, 更新PC
      // ... existing code ...
      alu.io.alu_op := io.alu_op  
      alu.io.A := io.rs1_data
      alu.io.B := io.imm
      io.rd := io.rd
      io.rd_data := io.pc + 4.U 
      io.next_pc := alu.io.result
      io.mem_ren := false.B 
      io.mem_wen := false.B
      io.mem_addr := 0.U
      io.mem_wdata := 0.U 
    }
    is(BitPat("b00100")) { // B, S
      // 数据流向: 条件跳转
      // ... existing code ...


    }
    is(BitPat("b01000")) { // I
      // 数据流向: src1 + 立即数 -> rd
      // ... existing code ...
    }
    is(BitPat("b10000")) { // R
      // 数据流向: src1 + src2 -> rd
      // ... existing code ...
    }
  }
}
