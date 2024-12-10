package SLLpc
import chisel3._
import chisel3.util.experimental.decode.TruthTable
import chisel3.util.BitPat
import chisel3.util.experimental.decode._
import chisel3.util._

trait DecoderTemplate extends Module {
  val io = IO(new Bundle {
    val inst = Input(UInt(32.W))
    val alu_op = Output(UInt(4.W))
    val rs1 = Output(UInt(5.W))
    val rs2 = Output(UInt(5.W))
    val rd = Output(UInt(5.W))
    val imm = Output(UInt(32.W))
  })
  def immgen(inst: UInt): UInt

  // 为输出信号赋初始值
  io.alu_op := 0.U
  io.rs1 := 0.U
  io.rs2 := 0.U
  io.rd := 0.U
  io.imm := 0.U
  val func3 = io.inst(14, 12)
  val func7 = io.inst(31, 25)
}



class U extends Module with DecoderTemplate {
  def immgen(inst: UInt): UInt = {
    val immU = UInt(32.W)
    immU := inst(31, 12) ## 0.U(12.W)
    immU
  }
  io.rd := io.inst(11, 7)
  io.rs1 := 0.U
  io.rs2 := 0.U
  io.imm := immgen(io.inst)  
  val table = TruthTable(
    Map(
      BitPat("b0110111") -> BitPat("b0"), // lui
      BitPat("b0010111") -> BitPat("b1")  // auipc
    ),
    BitPat("b0".U) // Default case
  )
}

class I extends Module with DecoderTemplate {
  def immgen(inst: UInt): UInt = {
    val immI = Wire(UInt(32.W))  
    immI := inst(31, 20) // 生成立即数
    immI
  }
  io.rd := io.inst(11, 7)
  io.rs1 := io.inst(19, 15)
  io.rs2 := 0.U
  io.imm := immgen(io.inst)
  // I-type指令的TruthTable映射
  val table = TruthTable(
    Map(
      BitPat("b0000000 ????? ????? 000 ????? 00100 11") -> BitPat(Alu.ALU_ADD), // ADDI: ALU_ADD
      BitPat("b??????? ????? ????? 100 ????? 00100 11") -> BitPat(Alu.ALU_XOR), // XORI: ALU_XOR
      BitPat("b??????? ????? ????? 111 ????? 00100 11") -> BitPat(Alu.ALU_AND), // ANDI: ALU_AND
      BitPat("b??????? ????? ????? 001 ????? 00100 11") -> BitPat(Alu.ALU_SLL), // SLLI: ALU_SLL
      BitPat("b0000000 ????? ????? 101 ????? 00100 11") -> BitPat(Alu.ALU_SRL), // SRLI: ALU_SRL
      BitPat("b0100000 ????? ????? 101 ????? 00100 11") -> BitPat(Alu.ALU_SRA), // SRAI: ALU_SRA
      BitPat("b??????? ????? ????? 000 ????? 00000 11") -> BitPat(Alu.ALU_LB),  // LB: ALU_LB
      BitPat("b??????? ????? ????? 001 ????? 00000 11") -> BitPat(Alu.ALU_LH),  // LH: ALU_LH
      BitPat("b??????? ????? ????? 010 ????? 00000 11") -> BitPat(Alu.ALU_LW),  // LW: ALU_LW
      BitPat("b??????? ????? ????? 100 ????? 00000 11") -> BitPat(Alu.ALU_LBU), // LBU: ALU_LBU
      BitPat("b??????? ????? ????? 101 ????? 00000 11") -> BitPat(Alu.ALU_LHU)  // LHU: ALU_LHU
    ),
    BitPat(Alu.ALU_XXX) // 默认情况
  )
  io.alu_op := decoder(io.inst, table)
}

class S extends Module with DecoderTemplate {
  def immgen(inst: UInt): UInt = {
    val immS = UInt(32.W)
     immS := inst(31, 25) ## inst(11, 7)
    immS
  }
  io.rd := 0.U
  io.rs1 := io.inst(19, 15)
  io.rs2 := io.inst(24, 20)
  io.imm := immgen(io.inst)
  switch(func3){
    is("b000".U){
      io.alu_op := "b0100".U
    }
  }
}

class J extends Module with DecoderTemplate {
  def immgen(inst: UInt): UInt = {
    val immJ = UInt(32.W)
     immJ := inst(31) ## inst(19, 12) ## inst(20) ## inst(30, 21) ## 0.U(1.W)
    immJ
  }
  io.rd := io.inst(11, 7)
  io.rs1 := 0.U
  io.rs2 := 0.U
  io.imm := immgen(io.inst)
  val table = TruthTable(
    Map(
      BitPat("b1101111") -> BitPat("b0") // JAL
    ),
    BitPat("b0".U) // Default case
  )
}

class B extends Module with DecoderTemplate {
  def immgen(inst: UInt): UInt = {
   val immB = UInt(32.W)
    immB := inst(31) ## inst(7) ## inst(30, 25) ## inst(11, 8) ## 0.U(1.W)
    immB
  }
  io.rd := 0.U
  io.rs1 := io.inst(19, 15)
  io.rs2 := io.inst(24, 20)
  io.imm := immgen(io.inst)
  val table = TruthTable(
    Map(
      BitPat("b1100011") -> BitPat("b0") // BRANCH
    ),
    BitPat("b0".U) // Default case
  )
}

class R extends Module with DecoderTemplate {
  def immgen(inst: UInt): UInt = {
    val immR = Wire(UInt(32.W)) // 使用Wire包装
    immR := 0.U(32.W) // R类型指令没有立即数
    immR
  }
  io.rd := io.inst(11, 7) // 提取rd
  io.rs1 := io.inst(19, 15) // 提取rs1
  io.rs2 := io.inst(24, 20) // 提取rs2
  io.imm := immgen(io.inst)
}


class  Inst2TypeDecoder extends Module {
  val io = IO(new Bundle {
    val inst = Input(UInt(32.W))
    val Type = Output(UInt(5.W))//0 for R, 1 for I, 2 for S, 3 for B, 4 for U, 5 for UJ
  })
  val opcode = io.inst(6, 0)
  val TypeTable = TruthTable(
    Map( // R
      BitPat("b0110111") -> BitPat("b00010"), //lui,auipc
      BitPat("b1101111") -> BitPat("b00001"), // Jar
      BitPat("b1100111") -> BitPat("b01001"),// IJ
      BitPat("b1100011") -> BitPat("b00100"),// B
      BitPat("b1100011") -> BitPat("b01000"),// I
      BitPat("b0100011") -> BitPat("b00100"),//S
      BitPat("b0110011") -> BitPat("b10000"),//R
      BitPat("b0010011") -> BitPat("b01000"),//I
    ),
    BitPat("b00000") // Default case
  )
  io.Type := decoder(opcode, TypeTable)
}





  class MasterDecoder extends Module {
    val io = IO(new Bundle {
      val inst = Input(UInt(32.W))
      val Type = Output(UInt(5.W))
      val alu_op = Output(UInt(4.W))
      val rs1 = Output(UInt(5.W))
      val rs2 = Output(UInt(5.W))
      val rd = Output(UInt(5.W))
      val imm = Output(UInt(32.W))  
    })

      // 为所有输出信号设置默认值
     io.alu_op := 0.U
    io.rs1 := 0.U
    io.rs2 := 0.U
    io.rd := 0.U
    io.imm := 0.U
    val Inst2TypeDecoder = Module(new Inst2TypeDecoder)
    Inst2TypeDecoder.io.inst := io.inst
    io.Type := Inst2TypeDecoder.io.Type

val rDecoder = Module(new R)
  val iDecoder = Module(new I)
  val sDecoder = Module(new S)
  val bDecoder = Module(new B)
  val uDecoder = Module(new U)
  val jDecoder = Module(new J)
  rDecoder.io.inst := 0.U
  iDecoder.io.inst := 0.U
  sDecoder.io.inst := 0.U
  bDecoder.io.inst := 0.U
  uDecoder.io.inst := 0.U
  jDecoder.io.inst := 0.U
when(io.Type === "b10000".U) {
    rDecoder.io.inst := io.inst
    io.alu_op := rDecoder.io.alu_op
    io.rs1 := rDecoder.io.rs1
    io.rs2 := rDecoder.io.rs2
    io.rd := rDecoder.io.rd
    io.imm := rDecoder.io.imm
  }.elsewhen(io.Type === "b01000".U) {
    iDecoder.io.inst := io.inst
    io.alu_op := iDecoder.io.alu_op
    io.rs1 := iDecoder.io.rs1
    io.rs2 := iDecoder.io.rs2
    io.rd := iDecoder.io.rd
    io.imm := iDecoder.io.imm
  }.elsewhen(io.Type === "b00100".U) {
    sDecoder.io.inst := io.inst
    io.alu_op := sDecoder.io.alu_op
    io.rs1 := sDecoder.io.rs1
    io.rs2 := sDecoder.io.rs2
    io.rd := sDecoder.io.rd
    io.imm := sDecoder.io.imm
  }.elsewhen(io.Type === "b00100".U) {
    bDecoder.io.inst := io.inst
    io.alu_op := bDecoder.io.alu_op
    io.rs1 := bDecoder.io.rs1
    io.rs2 := bDecoder.io.rs2
    io.rd := bDecoder.io.rd
    io.imm := bDecoder.io.imm
  }.elsewhen(io.Type === "b00010".U) {
    uDecoder.io.inst := io.inst
    io.alu_op := uDecoder.io.alu_op
    io.rs1 := uDecoder.io.rs1
    io.rs2 := uDecoder.io.rs2
    io.rd := uDecoder.io.rd
    io.imm := uDecoder.io.imm
  }.elsewhen(io.Type === "b00001".U) {
    jDecoder.io.inst := io.inst
    io.alu_op := jDecoder.io.alu_op
    io.rs1 := jDecoder.io.rs1
    io.rs2 := jDecoder.io.rs2
    io.rd := jDecoder.io.rd
    io.imm := jDecoder.io.imm
  }
}



