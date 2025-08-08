package gyr
import chisel3._
class ecall extends Module {
  val io = IO(new Bundle{
    val pc = Input(UInt(32.W))

    val en = Input(Bool())
    val wport1 = Output(UInt(32.W))
    val wport2 = Output(UInt(32.W))
  })
  when(io.en){
    io.wport1 := io.pc
    io.wport2 := 8.U
  }

}
