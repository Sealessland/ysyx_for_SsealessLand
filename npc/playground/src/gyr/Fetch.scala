package gyr
import chisel3._
import chisel3.util._
import chisel3.util.experimental._

class F2D extends Bundle{
  val inst = UInt(32.W)
  val pc   = UInt(32.W)
}
class FUBus extends Bundle{
  val out = Decoupled(new F2D)
  val ram = new SRAMport
}

class Fetch extends Module{
  val io = IO(new FUBus)
  val pc = RegInit("h7ffffffc".U(32.W)) // 初始PC值

}


