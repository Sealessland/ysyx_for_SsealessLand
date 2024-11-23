package SLLpc

import chisel3._
import chisel3.util._

class ExecuteBundle extends Bundle {
  val inst_type = Input(UInt(5.W))       // 指令类型
  val rs1_data = Input(UInt(32.W))        // rs1寄存器数据
  val rs2_data = Input(UInt(32.W))        // rs2寄存器数据
  val imm = Input(UInt(32.W))             // 立即数
  val pc = Input(UInt(32.W))               // 当前PC
  val alu_op = Input(UInt(4.W))           // ALU操作码
  val op_control = Output(UInt(8.W))       // 控制信号
  val alu_result = Output(UInt(32.W))      // ALU计算结果
  val next_pc = Output(UInt(32.W))         // 下一个PC
  val write_data = Output(UInt(32.W))      // 写入寄存器的数据
}

class ExecuteUnit extends Module {
  val io = IO(new ExecuteBundle)

  // ALU实例
  val alu = Module(new Alu(32))


}