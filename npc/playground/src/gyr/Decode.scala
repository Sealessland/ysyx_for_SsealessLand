package gyr
import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import org.chipsalliance.rvdecoderdb




case class Insn(inst: rvdecoderdb.Instruction) extends DecodePattern {
  override def bitPat: BitPat = BitPat("b" + inst.encoding.toString())
}

object Insn {
  implicit class addMethodsToInsn(i: Insn) {
    def hasArg(arg: String): Boolean = i.inst.args.map(_.name).contains(arg)
  }
}

//object Opcode extends DecodeField[Insn, UInt] {
//  override def name = "opcode"
//
//  override def chiselType = UInt(8.W)
//
//  override def genTable(i: Insn): BitPat = i.inst.name match {
//    case "add"    => BitPat("b00000001")
//    case "sub"    => BitPat("b00000010")
//    case "sll"    => BitPat("b00000011")
//    case "slt"    => BitPat("b00000100")
//    case "sltu"   => BitPat("b00000101")
//    case "xor"    => BitPat("b00000110")
//    case "srl"    => BitPat("b00000111")
//    case "sra"    => BitPat("b00001000")
//    case "or"     => BitPat("b00001001")
//    case "and"    => BitPat("b00001010")
//
//    // I-type 立即数指令
//    case "addi"   => BitPat("b00001011")
//    case "slti"   => BitPat("b00001100")
//    case "sltiu"  => BitPat("b00001101")
//    case "xori"   => BitPat("b00001110")
//    case "ori"    => BitPat("b00001111")
//    case "andi"   => BitPat("b00010000")
//    case "slli"   => BitPat("b00010001")
//    case "srli"   => BitPat("b00010010")
//    case "srai"   => BitPat("b00010011")
//
//    // 加载指令
//    case "lb"     => BitPat("b00010100")
//    case "lh"     => BitPat("b00010101")
//    case "lw"     => BitPat("b00010110")
//    case "lbu"    => BitPat("b00010111")
//    case "lhu"    => BitPat("b00011000")
//
//    // 存储指令
//    case "sb"     => BitPat("b00011001")
//    case "sh"     => BitPat("b00011010")
//    case "sw"     => BitPat("b00011011")
//
//    // 分支指令
//    case "beq"    => BitPat("b00011100")
//    case "bne"    => BitPat("b00011101")
//    case "blt"    => BitPat("b00011110")
//    case "bge"    => BitPat("b00011111")
//    case "bltu"   => BitPat("b00100000")
//    case "bgeu"   => BitPat("b00100001")
//
//    // 跳转指令
//    case "jal"    => BitPat("b00100010")
//    case "jalr"   => BitPat("b00100011")
//
//    // U-type 指令
//    case "lui"    => BitPat("b00100100")
//    case "auipc"  => BitPat("b00100101")
//
//    // 系统指令
//    case "ecall"  => BitPat("b00100110")
//    case "ebreak" => BitPat("b00100111")
//
//
//
//
//    // 内存同步指令
//    case "fence"  => BitPat("b00101000")
//    case "fence.i"=> BitPat("b00101001")
//
//    // CSR指令
//    case "csrrw"  => BitPat("b00101010")
//    case "csrrs"  => BitPat("b00101011")
//    case "csrrc"  => BitPat("b00101100")
//    case "csrrwi" => BitPat("b00101101")
//    case "csrrsi" => BitPat("b00101110")
//    case "csrrci" => BitPat("b00101111")
//    // 默认情况
//    case _        => BitPat("b00000000")
//
//  }
//}
object Opcode extends DecodeField[Insn,UInt]{

  override def name: String = "opcode"

  override def chiselType: UInt = UInt(5.W)

  override def genTable(i: Insn): BitPat = i.inst.name match{
    case "add"   => BitPat(AluFunc.add)
    case "sub"   => BitPat(AluFunc.sub )
    case "sll"   => BitPat(AluFunc.sll )
    case "slt"   => BitPat(AluFunc.slt )
    case "sltu"  => BitPat(AluFunc.slt )
    case "xor"   => BitPat(AluFunc.xor )
    case "srl"   => BitPat(AluFunc.srl )
    case "sra"   => BitPat(AluFunc.sra )
    case "or"    => BitPat(AluFunc.or )
    case "and"   => BitPat(AluFunc.and )
    case "addi"  => BitPat(AluFunc.add )
    case "slti"  => BitPat(AluFunc.slt )
    case "sltiu" => BitPat(AluFunc.slt )
    case "xori"  => BitPat(AluFunc.xor )
    case "ori"   => BitPat(AluFunc.or )
    case "andi"  => BitPat(AluFunc.and )
    case "slli"  => BitPat(AluFunc.sll )
    case "srli"  => BitPat(AluFunc.srl )
    case "srai"  => BitPat(AluFunc.sra )
    case "beq"   => BitPat(AluFunc.equ )
    case "bne"   => BitPat(AluFunc.neq )
    case "blt"   => BitPat(AluFunc.slt )
    case "bge"   => BitPat(AluFunc.sge )
    case "bltu"  => BitPat(AluFunc.slt )
    case "bgeu"  => BitPat(AluFunc.sge )
    case "jal"   => BitPat(AluFunc.add )
    case "jalr"  => BitPat(AluFunc.add )
    case "lb"    => BitPat(AluFunc.add )
    case "lh"    => BitPat(AluFunc.add )
    case "lw"    => BitPat(AluFunc.add )
    case "lbu"    => BitPat(AluFunc.add )
    case "lhu"    => BitPat(AluFunc.add )
    case "sb"    => BitPat(AluFunc.add )
    case "sh"    => BitPat(AluFunc.add )
    case "sw"    => BitPat(AluFunc.add )
    case "auipc" => BitPat(AluFunc.add)
    case "csrrw"  => BitPat(AluFunc.NOP)
    case "csrrs"  => BitPat(AluFunc.or)
    case "csrrc"  => BitPat(AluFunc.nand)
    case "csrrwi" => BitPat(AluFunc.NOP)
    case "csrrsi" => BitPat(AluFunc.or)
    case "csrrci" => BitPat(AluFunc.nand)
    case "mret" => BitPat(AluFunc.NOP)




    case "lui"   => BitPat(AluFunc.add)
    case _       => BitPat(AluFunc.NOP)
  }
}

object Mlen extends DecodeField[Insn, UInt] {
  override def name: String = "m_len"

  override def chiselType: UInt = UInt(4.W)

  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "lb" | "lbu" => BitPat("b0001") // 8 bits
    case "lh" | "lhu" => BitPat("b0011") // 16 bits
    case "lw"         => BitPat("b1111") // 32 bits
    case "sb"         => BitPat("b0001") // 8 bits
    case "sh"         => BitPat("b0011") // 16 bits
    case "sw"         => BitPat("b1111") // 32 bits
    case _            => BitPat("b0000") // Default to 32 bits for other instructions
  }
}

object ImmTypeEnum extends ChiselEnum {
  val immNone, immI, immS, immB, immU, immJ, immShamtD, immShamtW ,immZ= Value
}

object ImmType extends DecodeField[Insn, ImmTypeEnum.Type] {
  override def name = "imm_type"

  override def chiselType: ImmTypeEnum.Type = ImmTypeEnum()

  override def genTable(i: Insn): BitPat = {
    val immType = i.inst.args
      .map(_.name match {
        case "imm12"                 => ImmTypeEnum.immI
        case "imm12hi" | "imm12lo"   => ImmTypeEnum.immS
        case "bimm12hi" | "bimm12lo" => ImmTypeEnum.immB
        case "imm20"                 => ImmTypeEnum.immU
        case "jimm20"                => ImmTypeEnum.immJ
        case "shamtd"                => ImmTypeEnum.immShamtD
        case "shamtw"                => ImmTypeEnum.immShamtW
        case "zimm5"                 => ImmTypeEnum.immZ
        case _                       => ImmTypeEnum.immNone
      })
      .filterNot(_ == ImmTypeEnum.immNone)
      .headOption // different ImmType will not appear in the Seq
      .getOrElse(ImmTypeEnum.immNone)

    BitPat(immType.litValue.U((immType.getWidth).W))
  }

}

object IsJal extends BoolDecodeField[Insn] {
  override def name: String = "jump_en"

  override def genTable(i: Insn): BitPat = i.inst.name match {
    // Branch instructions
    // Jump instructions
    case "jal"  => y


    // All other instructions
    case _ => n
  }
}
object IsJalr extends BoolDecodeField[Insn] {
  override def name: String = "jalr_en"
  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "jalr" => y
    case _ => n
}
}

object IsAuipc extends BoolDecodeField[Insn] {
  override def name: String = "auipc_en"

  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "auipc" => y
    case _       => n
  }
}
object IsEbreak extends BoolDecodeField[Insn] {
  override def name: String = "is_ebreak"

  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "ebreak" => y
    case _        => n
  }
}
object LsuEn extends BoolDecodeField[Insn] {
  override def name: String = "lsu_en"
  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "lb" | "lh" | "lw" | "lbu" | "lhu"|
         "sb" | "sh" | "sw" => y
    case _ => n

  }
}

object UnsignEn extends BoolDecodeField[Insn]{
  override def name: String ="Unsign_en"

  override def genTable(i: Insn): BitPat = i.inst.name match{
    case name if name.endsWith("u") => y
    case _ => n
  }
}

object Rs1En extends BoolDecodeField[Insn] {
  override def name: String = "rs1_en"

  override def genTable(i: Insn): BitPat = if (i.hasArg("rs1")) y else n
}

object Rs2En extends BoolDecodeField[Insn] {
  override def name: String = "rs2_en"

  override def genTable(i: Insn): BitPat = if (i.hasArg("rs2")) y else n
}

object RdEn extends BoolDecodeField[Insn] {
  override def name: String = "rd_en"

  override def genTable(i: Insn): BitPat = if (i.hasArg("rd")) y else n
}

object CsrEn extends BoolDecodeField[Insn] {
  override def name: String = "csr_en"

  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "csrrw"  => BitPat("b1")
    case "csrrs"  => BitPat("b1")
    case "csrrc"  => BitPat("b1")
    case "csrrwi" => BitPat("b1")
    case "csrrsi" => BitPat("b1")
    case "csrrci" => BitPat("b1")
    case "ecall"  => BitPat("b1")
    case _        => BitPat("b0")
  }
}


object MwEn extends BoolDecodeField[Insn]{
  override def name = "mw_en"

  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "sb" | "sw" | "sh" => y
    case _ => n
  }
}
object BranchEn extends BoolDecodeField[Insn]{
  override def name: String = "branch_en"

  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "beq" | "bne" | "blt" | "bge" | "bltu" | "bgeu" | "bbb" => y
    case _ => n
  }
}

object IsMret extends BoolDecodeField[Insn]{
  override def name: String = "mret_en"
  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "mret" => y
    case _      => n
  }
}
object IsEcall extends BoolDecodeField[Insn]{
  override def name: String = "is_ecall"
  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "ecall" => y
    case _       => n
  }
}
class D2E extends Bundle{
  val rs1_data = Input(UInt(32.W))
  val rs2_data = Input(UInt(32.W))
  val rd_addr  = Output(UInt(5.W))
  val rd_en    = Output(Bool())
  val opcode   = Output(UInt(5.W))
  val imm      = Output(UInt(64.W))
  val pc       = Output(UInt(32.W))
  val rs2_en   = Output(Bool())
  val rs1_en   = Output(Bool())
  val mret_en  = Output(Bool())
  val ecall_en = Output(Bool())
  // PC value for the instruction
  val unsign_en = Output(Bool())
  val csr_en    = Output(Bool())
  val csr_data  = Output(UInt(32.W))
  val csr_addr  = Output(UInt(12.W))
  val lsu_en    = Output(Bool())
  val mw_en     = Output(Bool())
  val mlen      = Output(UInt(4.W))
  val branch_en = Output(Bool())
  val jump_en   = Output(Bool())
  val jalr_en    = Output(Bool())
  val auipc_en   = Output(Bool())
}
class D2R extends Bundle{
  val rs1_addr = Output(UInt(5.W))
  val rs1_en   = Output(Bool())
  val rs2_addr = Output(UInt(5.W))
  val rs2_en   = Output(Bool())
}
class DUBus extends Bundle {
  val in = Flipped(Decoupled(new F2D))
  val out =Decoupled(new D2E)
  val csr =Flipped(new csrR)
  val d2r = new D2R
  val r2d = Flipped(new R2E)
  val ebreakhandler = Output(Bool())
}

class Decode extends Module {
  val io = IO(new DUBus)
  val inst = io.in.bits.inst

  val instTable  = rvdecoderdb.instructions(os.pwd / "riscv-opcodes")
  val targetSets = Set("rv_i", "rv64_i", "rv_m", "rv64_m" ,"rv32_i","rv_zicsr", "rv_system")


  // add implemented instructions here
  val instList = instTable
    .filter(instr => targetSets.contains(instr.instructionSet.name))
    .filter(_.pseudoFrom.isEmpty)
    .map(Insn(_))
    .toSeq

  val decodeTable   = new DecodeTable(instList, Seq(Opcode, ImmType, Rs1En, Rs2En, RdEn, IsJal, CsrEn,UnsignEn,LsuEn,BranchEn,Mlen,MwEn,IsJalr,IsAuipc,IsEbreak,IsMret,IsEcall))
  val decodedBundle = decodeTable.decode(inst)
  println(decodeTable, decodedBundle)

  val imm_i: UInt = Cat(Fill(52, inst(31)), inst(31, 20))                              // I-type
  val imm_s: UInt = Cat(Fill(52, inst(31)), inst(31, 25), inst(11, 7))                 // S-type
  val imm_b: UInt = Cat(Fill(52, inst(31)), inst(7), inst(30, 25), inst(11, 8), 0.U)   // B-type
  val imm_u      = Cat(Fill(32, inst(31)), inst(31, 12), Fill(12, 0.U))               // U-type
  val imm_j      = Cat(Fill(44, inst(31)), inst(19, 12), inst(20), inst(30, 21), 0.U) // J-type
  val imm_shamtd = Cat(Fill(58, 0.U), inst(25, 20))
  val imm_shamtw = Cat(Fill(59, 0.U), inst(24, 20))
  val imm_z = Cat(Fill(59, 0.U), inst(19, 15)) // Zero-extended immediate for Zimm5
  io.out.bits.opcode := decodedBundle(Opcode)

  val imm_type = decodedBundle(ImmType)
  io.out.bits.imm := MuxLookup(imm_type, 0.U)(
    Seq(
      ImmTypeEnum.immI      -> imm_i,
      ImmTypeEnum.immS      -> imm_s,
      ImmTypeEnum.immB      -> imm_b,
      ImmTypeEnum.immU      -> imm_u,
      ImmTypeEnum.immJ      -> imm_j,
      ImmTypeEnum.immShamtD -> imm_shamtd,
      ImmTypeEnum.immShamtW -> imm_shamtw,
      ImmTypeEnum.immZ      -> imm_z
    )
  )
  io.d2r.rs1_en   := decodedBundle(Rs1En)
  io.d2r.rs2_en   := decodedBundle(Rs2En)
  io.d2r.rs1_addr := Mux(decodedBundle(Rs1En),inst(19, 15),0.U)
  io.d2r.rs2_addr := Mux(decodedBundle(Rs2En),inst(24, 20),0.U)
  io.csr.csrAddr  := Mux(decodedBundle(CsrEn),inst(31, 20),Mux(decodedBundle(IsEcall),0x305.U,0.U(12.W)))


  io.ebreakhandler:= decodedBundle(IsEbreak)
  io.out.bits.rd_en     := decodedBundle(RdEn)
  io.out.bits.jump_en   := decodedBundle(IsJal)
  io.out.bits.jalr_en    :=decodedBundle(IsJalr)
  io.out.bits.unsign_en := decodedBundle(UnsignEn)
  io.out.bits.lsu_en    := decodedBundle(LsuEn)
  io.out.bits.mw_en     := decodedBundle(MwEn)
  io.out.bits.mlen     := decodedBundle(Mlen)
  io.out.bits.branch_en := decodedBundle(BranchEn)
  io.out.bits.rs1_en    := decodedBundle(Rs1En)
  io.out.bits.rs2_en    := decodedBundle(Rs2En)
  io.out.bits.auipc_en  := decodedBundle(IsAuipc)
  io.out.bits.rs1_data  := io.r2d.rs1_data
  io.out.bits.rs2_data  := io.r2d.rs2_data
  io.out.bits.rd_addr   := inst(11, 7)
  io.out.bits.csr_en    := decodedBundle(CsrEn)
  io.out.bits.mret_en   := decodedBundle(IsMret)
  io.out.bits.ecall_en  := decodedBundle(IsEcall)
  io.out.bits.csr_data  := io.csr.csrData
  io.out.bits.csr_addr  :=  Mux(decodedBundle(IsMret),0x341.U(12.W),Mux(decodedBundle(CsrEn),inst(31, 20),0.U))
  io.out.bits.pc         := io.in.bits.pc // Pass the PC value from F2D to D2E
  when(decodedBundle(IsEcall)){
    io.csr.csrAddr := 0x305.U // Set CSR address for ecall
  }
  io.in.ready := io.out.ready
  io.out.valid:=io.in.valid
  println(decodeTable, decodedBundle)
}
