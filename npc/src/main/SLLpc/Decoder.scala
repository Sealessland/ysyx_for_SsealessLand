package SLLpc
import chisel3._
import chisel3.util.experimental.decode.TruthTable
import chisel3.util.{BitPat, switch}
import chisel3.util.experimental.decode._

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

}



class U extends Module with DecoderTemplate {
  def immgen(inst: UInt): UInt = {
    val immU = UInt(32.W)
    immU := inst(31, 12) ## 0.U(12.W)
    immU
  }

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
    val func3 = io.inst(14, 12)
  // I-type指令的TruthTable映射
  val table = TruthTable(
    Map(//使用func3和opcode 区分不同的指令
      BitPat("b0010011000") -> BitPat("b0000"), // ADDI: ALU_ADD
      BitPat("b0010011010") -> BitPat("b1000"), // SLTI: ALU_SLT
      BitPat("b0010011011") -> BitPat("b1001"), // SLTIU: ALU_SLTU
      BitPat("b0010011100") -> BitPat("b0100"), // XORI: ALU_XOR
      BitPat("b0010011110") -> BitPat("b0011"), // ORI: ALU_OR
      BitPat("b0010011111") -> BitPat("b0010"), // ANDI: ALU_AND
      BitPat("b0010011001") -> BitPat("b0101"), // SLLI: ALU_SLL
      BitPat("b0010011101") -> BitPat("b0110"), // SRLI: ALU_SRL
      BitPat("b0010011011") -> BitPat("b0111"), // SRAI: ALU_SRA

      //load I instruction
      BitPat("b0000011") -> BitPat("b0100"), // LB: ALU_LB
      BitPat("b0000011") -> BitPat("b0101"), // LH: ALU_LH
      BitPat("b0000011") -> BitPat("b0110"), // LW: ALU_LW
      BitPat("b0000011") -> BitPat("b0111"), // LBU: ALU_LBU
      BitPat("b0000011") -> BitPat("b1000"), // LHU: ALU_LHU
    ),
    BitPat("b0".U) // 默认情况
  )

  // 连接ALU操作码

}

class S extends Module with DecoderTemplate {
  def immgen(inst: UInt): UInt = {
    val immS = UInt(32.W)
     immS := inst(31, 25) ## inst(11, 7)
    immS
  }
  switch(io.func3){
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

  val table = TruthTable(
    Map(
      BitPat("b1100011") -> BitPat("b0") // BRANCH
    ),
    BitPat("b0".U) // Default case
  )
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


  val table = TruthTable(
    Map(
      BitPat("b") -> BitPat("b0100") // SB: ALU_SB

    ),
    BitPat("b0".U) // Default case
  )


  val masterDocoder exntends Module {
    val io = IO(new Bundle {
      val alu_op = Output(UInt(4.W))
      val rs1 = Output(UInt(5.W))
      val rs2 = Output(UInt(5.W))
      val rd = Output(UInt(5.W))
      val imm = Output(UInt(32.W))  
    })
    val Inst2TypeDecoder = Module(new Inst2TypeDecoder)
    Inst2TypeDecoder.io.inst := io.inst
    io.Type := Inst2TypeDecoder.io.Type
    val Idecoder = Module(new I)
    val Sdecoder = Module(new S)
    val Jdecoder = Module(new J)
    val Bdecoder = Module(new B)
    val Udecoder = Module(new U)  
    val Rdecoder = Module(new R)
    


  val inst2TypeDecoder = Module(new Inst2TypeDecoder)
  inst2TypeDecoder.io.inst := io.inst
  val instType = inst2TypeDecoder.io.Type

  // 根据指令类型实例化相应的 Decoder
  val decoder = instType match {
    case BitPat("b10000") => Module(new R)
    case BitPat("b01000") => Module(new I)
    case BitPat("b00100") => Module(new S)
    case BitPat("b00100") => Module(new B)
    case BitPat("b00010") => Module(new U)
    case BitPat("b00001") => Module(new J)
    case _ => Module(new R) // Default case, using R as a placeholder
  }

  // 连接 Decoder 的输出到 MasterDecoder 的输出
  io.alu_op := decoder.io.alu_op
  io.rs1 := decoder.io.rs1
  io.rs2 := decoder.io.rs2
  io.rd := decoder.io.rd
  io.imm := decoder.io.imm
}
