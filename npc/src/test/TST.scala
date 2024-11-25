import chisel3._

class tst extends Module {
    val io = IO(new Bundle {
        val busy = Input(Bool())
        val control_store = Input(Bool())   
        val out = Output(UInt(32.W))
        val ack = Output(Bool())    
    })
    val state = RegInit(0.U(2.W))   
    state := Mux(io.busy, state + 1.U, state)   
    
    io.ack := io.busy & io.control_store        
    io.out := 0.U

}
