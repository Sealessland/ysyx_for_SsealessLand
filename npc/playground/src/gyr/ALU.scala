package gyr
import chisel3._
import chisel3.util._
class AluIO extends Bundle{
  val in1 = Input(UInt(32.W))
  val in2 = Input(UInt(32.W))
  val out = Output(UInt(32.W))
  val opcode = Input(UInt)
}
class ALU {

}
