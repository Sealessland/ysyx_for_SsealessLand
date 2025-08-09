package xininn
import chisel3._
import chisel3.util._
class csrBundle extends Bundle{
  val r_en   = Input(Bool())
  val w_addr = Input(UInt(12.W))
  val w_data = Input(UInt(32.W))
  val r_data = Output(UInt(32.W))
  val r_addr = Input(UInt(32.W))
  val w_en = Input(Bool())
  val pc = Input(UInt(32.W))
  val pc_en = Input(Bool())
}
class CSR extends Module{
  val io = IO(new csrBundle)

  val MSTATUS = 0x300.U(12.W)
  val MTVEC  = 0x305.U(12.W)
  val MEPC   = 0x341.U(12.W)
  val MCAUSE = 0x342.U(12.W)
  val MIP    = 0x344.U(12.W)
  val MIE    = 0x345.U(12.W)
//  val MSCRATCH = 0x346.U(12.W)
//  val MCYCLE = 0xB00.U(12.W)
//  val MINSTRET = 0xB02.U(12.W)
//  val MCYCLEH = 0xB80.U(12.W)
//  val MINSTRETH = 0xB82.U(12.W)
//  val MHPMCOUNTER3 = 0x323.U(12.W)

  val mstatus = RegInit(0.U(32.W))
  val mtvec   = RegInit(0.U(32.W))
  val mepc    = RegInit(0.U(32.W))
  val mcause  = RegInit(0.U(32.W))
  val mip     = RegInit(0.U(32.W))
  val mie     = RegInit(0.U(32.W))
  val mscratch = RegInit(0.U(32.W))
  val mcycle = RegInit(0.U(32.W))
  val minstret = RegInit(0.U(32.W))
  val mcycleh = RegInit(0.U(32.W))
  io.r_data := 0.U
  when(io.w_en){
    switch(io.w_addr){
      is(MSTATUS){
        mstatus := io.w_data
      }
      is(MTVEC){
        mtvec := io.w_data
      }
      is(MEPC){
        mepc := io.w_data
      }
    }
  }
  when(io.pc_en){
  mepc := io.pc
  }
  when(io.r_en)
  {
    switch(io.r_addr){
      is(MSTATUS){
        io.r_data := mstatus
      }
      is(MTVEC){
        io.r_data := mtvec
      }
      is(MEPC){
        io.r_data := mepc
      }
      is(MCAUSE){
        io.r_data := mcause
      }
      is(MIP){
        io.r_data := mip
      }
      is(MIE){
        io.r_data := mie
      }
      
    }
  }
  
}
