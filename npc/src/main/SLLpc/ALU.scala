package SLLpc

import chisel3._
import chisel3.util._

object Alu {
  val ALU_ADD = 0.U(4.W)
  val ALU_SUB = 1.U(4.W)
  val ALU_AND = 2.U(4.W)
  val ALU_OR = 3.U(4.W)
  val ALU_XOR = 4.U(4.W)
  val ALU_SLT = 5.U(4.W)
  val ALU_SLL = 6.U(4.W)
  val ALU_SLTU = 7.U(4.W)
  val ALU_SRL = 8.U(4.W)
  val ALU_SRA = 9.U(4.W)
  val ALU_COPY_A = 10.U(4.W)
  val ALU_COPY_B = 11.U(4.W)
  val ALU_XXX = 15.U(4.W)
}

class AluIO(width: Int) extends Bundle {
  val A = Input(UInt(width.W))
  val B = Input(UInt(width.W))
  val alu_op = Input(UInt(4.W))
  val out = Output(UInt(width.W))
  val sum = Output(UInt(width.W))
     
}

class Alu(val width: Int) extends Module {
  val io = IO(new AluIO(width))

  val shamt = io.B(4, 0).asUInt

  io.out := MuxLookup(io.alu_op, 0.U)(
    Seq(
      Alu.ALU_ADD -> (io.A + io.B),
      Alu.ALU_SUB -> (io.A - io.B),
      Alu.ALU_SRA -> (io.A.asSInt >> shamt).asUInt,
      Alu.ALU_SRL -> (io.A >> shamt),
      Alu.ALU_SLL -> (io.A << shamt),
      Alu.ALU_SLT -> (io.A.asSInt < io.B.asSInt).asUInt,
      Alu.ALU_SLTU -> (io.A < io.B).asUInt,
      Alu.ALU_AND -> (io.A & io.B),
      Alu.ALU_OR -> (io.A | io.B),
      Alu.ALU_XOR -> (io.A ^ io.B),
      Alu.ALU_COPY_A -> io.A,
      Alu.ALU_COPY_B -> io.B,

    )
  )

  io.sum := io.A + Mux(io.alu_op(0), -io.B, io.B)
}
