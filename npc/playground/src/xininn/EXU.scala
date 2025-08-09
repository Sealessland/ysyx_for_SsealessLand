package xininn
import chisel3._
import chisel3.util._
class PCCtrl extends Bundle{
val pc_en = Input(Bool())
val dnpc = Input(UInt(32.W))  
}
class E2L extends Bundle{
  val rd_en = Input(Bool())
  val rd_addr = Input(UInt(5.W))
  val rd_data = Input(UInt(32.W))
  val mem_en = Input(Bool())
  val mem_wr = Input(UInt(2.W))
  val mlen  =  Input(UInt(3.W))
  val wdata = Input(UInt(32.W))
  val maddr = UInt(32.W)
}

class LSmsg extends Bundle {
  val ls_en = Input(Bool())
  val rd_en = Output(Bool())
  val rd_addr = Output(UInt(5.W))
  val rd_data = Output(UInt(32.W))
}
class EXBundle extends Bundle {
  val in =Flipped(Decoupled(new msg))
  val pcCtrl = Flipped(new PCCtrl)
  val out =  Decoupled(new E2L)
  val csr = Flipped(new csrBundle)
}
class EXU extends Module {
  val io = IO(new EXBundle
  )
val alu = Module(new ALU)

  io.pcCtrl.pc_en := false.B
  io.pcCtrl.dnpc := 0.U

  // 初始化所有CSR信号
  io.csr.r_en := false.B
  io.csr.w_addr := 0.U
  io.csr.w_data := 0.U
  io.csr.r_addr := 0.U
  io.csr.w_en := false.B
  io.csr.pc := 0.U
  io.csr.pc_en := false.B

// ALU输入选择常量
val RS1_RS2   = "b000".U
val RS1_IMM   = "b001".U
val PC_IMM    = "b011".U
val ZERO_IMM  = "b101".U
val DONT_CARE = "b111".U

// ALU第一个输入选择
alu.io.in1 := MuxLookup(io.in.bits.alusel, 0.U)(Seq(
  RS1_RS2  -> io.in.bits.rs1data,
  RS1_IMM  -> io.in.bits.rs1data,
  PC_IMM   -> io.in.bits.pc,
  ZERO_IMM -> 0.U
))

// ALU第二个输入选择  
alu.io.in2 := MuxLookup(io.in.bits.alusel, 0.U)(Seq(
  RS1_RS2  -> io.in.bits.rs2data,
  RS1_IMM  -> io.in.bits.imm,
  PC_IMM   -> io.in.bits.imm,
  ZERO_IMM -> io.in.bits.imm
))
  alu.io.opcode := io.in.bits.opcode



  io.out.bits.rd_en := io.in.bits.rd_en
  io.out.bits.rd_addr:=io.in.bits.rdaddr
  io.out.bits.rd_data:= alu.io.out
  io.out.bits.mem_en := io.in.bits.mem_en
  io.out.bits.maddr  := alu.io.out
  io.out.bits.wdata  :=io.in.bits.rs2data
  io.out.bits.mlen   := io.in.bits.mlen
  io.out.bits.mem_wr := io.in.bits.mem_wr
  io.out.valid := io.in.valid
  io.in.ready := io.out.ready
  io.out.valid := io.in.valid
  io.in.ready  := io.out.ready
  val j_target = Wire(UInt(32.W))
  j_target := io.in.bits.imm+io.in.bits.pc
  when(io.in.bits.branch_en){
    when(alu.io.out === 1.U){
      io.pcCtrl.pc_en := true.B
      io.pcCtrl.dnpc:= j_target
    }
  }
  when(io.in.bits.jump_en){
    io.pcCtrl.pc_en := true.B
    io.pcCtrl.dnpc := alu.io.out
    io.out.bits.rd_data := io.in.bits.pc + 4.U
  }


  val csrUnit = Module(new CsrAlu)
  csrUnit.io.uop.zimm := 0.U
  csrUnit.io.uop.rs1_data := 0.U
  csrUnit.io.uop.func := 0.U
  csrUnit.io.csr_old_value := 0.U
  when(io.in.bits.csr_en){
    csrUnit.io.uop.zimm:= io.in.bits.imm
    csrUnit.io.uop.rs1_data:= io.in.bits.rs1data
    csrUnit.io.uop.func := io.in.bits.csr_op
    csrUnit.io.csr_old_value:=io.csr.r_data

    io.csr.w_en := csrUnit.io.out.csr_write_enable
    io.csr.w_addr:= io.in.bits.csr_addr
    io.csr.w_data:= csrUnit.io.out.csr_new_value
    io.csr.pc := io.in.bits.pc
    io.csr.pc_en := false.B
  }
when(io.in.bits.system === 16.U){
  io.csr.w_en := true.B
  io.csr.w_addr:=0x341.U(12.W)
  io.csr.w_data:=0xb.U(32.W)
  io.csr.pc_en := true.B
  io.csr.pc := io.in.bits.pc
  io.csr.r_en := true.B
  io.csr.r_addr:=0x305.U(12.W)
  io.pcCtrl.pc_en := true.B
  io.pcCtrl.dnpc := io.csr.r_data
  io.out.bits.rd_en  := false.B
  io.out.bits.mem_en := false.B
  io.out.bits.maddr  := 0.U
  io.out.bits.wdata  := 0.U
  io.out.bits.mlen   := 0.U
  io.out.bits.mem_wr := 0.U

}

}
