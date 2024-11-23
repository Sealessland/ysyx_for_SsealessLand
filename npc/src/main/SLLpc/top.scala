package SLLpc
import chisel3._




class TopBundle extends Bundle{
  val inst = Input(UInt(32.W))
  val pc = Output(UInt(32.W))
  val regfileState = Vec(32, UInt(32.W))
}


class top extends Module {
 val io = IO(new TopBundle)
  val pc = RegInit(0.U(32.W))
  val inst = RegInit(0.U(32.W))

 val regfile = Module(new RegFile)
 val Controler = Module(new Controler)
 val Inst2TypeDecoder = Module(new Inst2TypeDecoder)
 val 



  def copyRegfileState(): Unit = {
    for (i <- 0 until 32) {
      io.regfileState(i) := regfile.regfile(i)
    }
  }
copyRegfileState()
pc := pc + 4.U
io.pc := pc
}
