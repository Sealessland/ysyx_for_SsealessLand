package xininn
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

    BitPat(immType.litValue.U(immType.getWidth.W))
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

object CsrEn extends DecodeField[Insn, UInt] {
  override def name: String = "csr_en"


  override def chiselType: UInt = UInt(4.W)

  override def genTable(i: Insn): BitPat = i.inst.name match {
    // Register-based CSR instructions
    case "csrrw"  => gen(N,BitPat(WRITE))
    case "csrrs"  => gen(N, BitPat(SET))
    case "csrrc"  => gen(N, BitPat(CLEAR))

    // Immediate-based CSR instructions
    case "csrrwi" => gen(Y, BitPat(WRITE))
    case "csrrsi" => gen(Y, BitPat(SET))
    case "csrrci" => gen(Y, BitPat(CLEAR))

    // 其他所有指令都不是 CSR 操作
    case _        => gen(N, BitPat(NOP)) // 默认生成 NOP (No Operation)
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

  val decodeTable   = new DecodeTable(instList, Seq(Opcode, ImmType, Rs1En, Rs2En, RdEn))
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




  println(decodeTable, decodedBundle)
}
object systeminst extends DecodeField[Insn,UInt]{
  override def name :String := "system_type"

  override def chiselType: UInt = UInt(4.W)
  override def genTable (i:Insn): BitPat = i.inst.name match {
    case "ecall"      => BitPat("b1000")
    case "ebreak"     => BitPat("b0001")
    case "mret"       => BitPat("b0001")
    case "sret"       => BitPat("b0010")
    case "wfi"        => BitPat("b0011")
    case "sfence.vma" => BitPat("b0100")
    case "fence"      => BitPat("b0101")
    case "fence.i"    => BitPat("b0110")


  }
}

class inst extends Bundle{
  val inst = UInt(32.W)
  val pc   = UInt(32.W)
}
class msg extends Bundle{
  val mlen    = UInt(3.W)
  val imm     = UInt(32.W)
  val in1sel  = UInt(3.W)
  val in2sel  = UInt(3.W)
  val csr_en  = Bool
  val csr_op  = UInt(4.W)
  val opcode  = UInt(5.W)
  val rs1data = UInt(32.W)
  val rs2data = UInt(32.W)
  val rd_en   = UInt(1.W)
  val rdaddr  = UInt(5.W)
  val pc      = UInt(32.W)
  val system  = UInt(4.W)
  val


}
class IDU extends Module{

}
