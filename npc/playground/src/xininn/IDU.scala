package xininn
import chisel3.DontCare.:=
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
    case "sltu"  => BitPat(AluFunc.sltu) // 无符号比较: slt + 16
    case "xor"   => BitPat(AluFunc.xor )
    case "srl"   => BitPat(AluFunc.srl )
    case "sra"   => BitPat(AluFunc.sra )
    case "or"    => BitPat(AluFunc.or )
    case "and"   => BitPat(AluFunc.and )
    case "addi"  => BitPat(AluFunc.add )
    case "slti"  => BitPat(AluFunc.slt )
    case "sltiu" => BitPat(AluFunc.sltu) // 无符号立即数比较: slt + 16
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
    case "bltu"  => BitPat(AluFunc.sltu ) // 无符号分支比较: slt + 16
    case "bgeu"  => BitPat(AluFunc.sgeu ) // 无符号分支比较: sge + 16
    case "jal"   => BitPat(AluFunc.add )
    case "jalr"  => BitPat(AluFunc.add )
    case "lb"    => BitPat(AluFunc.add )
    case "lh"    => BitPat(AluFunc.add )
    case "lw"    => BitPat(AluFunc.add )
    case "lbu"   => BitPat(AluFunc.add ) // 加载指令本身仍使用add，无符号扩展由LSU处理
    case "lhu"   => BitPat(AluFunc.add ) // 加载指令本身仍使用add，无符号扩展由LSU处理
    case "sb"    => BitPat(AluFunc.add )
    case "sh"    => BitPat(AluFunc.add )
    case "sw"    => BitPat(AluFunc.add )
    case "auipc" => BitPat(AluFunc.add)
    case "mret"  => BitPat(AluFunc.NOP)
    case "lui"   => BitPat(AluFunc.add)
    case _       => BitPat(AluFunc.NOP)
  }
}

object unsigned extends BoolDecodeField[Insn]{
  override def name: String = "unsigned"
  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "lbu" | "lhu"  => y
    case _ => n
  }
}
object Mlen extends DecodeField[Insn, UInt] {
  override def name: String = "m_len"

  override def chiselType: UInt = UInt(4.W)

  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "lb" | "lbu" => BitPat("b1000") // 8 bits
    case "lh" | "lhu" => BitPat("b1001") // 16 bits
    case "lw"         => BitPat("b1010") // 32 bits
    case "sb"         => BitPat("b1000") // 8 bits
    case "sh"         => BitPat("b1001") // 16 bits
    case "sw"         => BitPat("b1010") // 32 bits
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
object jump_en extends BoolDecodeField[Insn] {
  override def name: String = "jump_en"

  override def genTable(i: Insn): BitPat = i.inst.name match {
    // Branch instructions
    // Jump instructions
    case "jal"|"jalr"  => y


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
    // Register-based CSR instructions (is_imm = 0)
    case "csrrw"  => BitPat("b0001") // 0 (reg) + 001 (WRITE)
    case "csrrs"  => BitPat("b0010") // 0 (reg) + 010 (SET)  
    case "csrrc"  => BitPat("b0011") // 0 (reg) + 011 (CLEAR)

    // Immediate-based CSR instructions (is_imm = 1)
    case "csrrwi" => BitPat("b1001") // 1 (imm) + 001 (WRITE)
    case "csrrsi" => BitPat("b1010") // 1 (imm) + 010 (SET)
    case "csrrci" => BitPat("b1011") // 1 (imm) + 011 (CLEAR)

    // 其他所有指令都不是 CSR 操作
    case _        => BitPat("b0000") // 0 (reg) + 000 (NOP)
  }
}




object MwEn extends DecodeField[Insn,UInt]{
  override def name = "mw_en"
  override def chiselType: UInt = UInt(2.W)
  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "sb" | "sw" | "sh" => BitPat("b10")
    case "lb" | "lh" | "lw" | "lbu" | "lhu" => BitPat("b01")
    case _ => BitPat("b00")
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

object alusel extends DecodeField[Insn,UInt]{
  override def name: String = "alu_sel"
  val RS1_RS2   = "b000"
  val RS1_IMM   = "b001"
  val PC_IMM    = "b011"
  val ZERO_IMM  = "b101"
  val DONT_CARE = "b111"
  override def chiselType: UInt = UInt(3.W)

  override def genTable(i: Insn): BitPat = {
    val argNames = i.inst.args.map(_.name)
    // 根据 RISC-V 指令格式判断 ALU 输入选择
    argNames match {
      // R-type: rd, rs1, rs2 (算术和逻辑运算)
      case Seq("rd", "rs1", "rs2") => BitPat(RS1_RS2)
      // I-type: rd, rs1, imm12 (立即数运算, 加载指令, jalr)
      case Seq("rd", "rs1", "imm12") => BitPat(RS1_IMM)
      // S-type: imm12lo, rs1, rs2, imm12hi (存储指令)
      case Seq("imm12lo", "rs1", "rs2", "imm12hi") => BitPat(RS1_RS2)
      // B-type: bimm12lo, rs1, rs2, bmm12hi (分支指令)
      case Seq("bimm12lo", "rs1", "rs2", "bimm12hi") => BitPat(RS1_RS2)
      // U-type: rd, imm20 (lui 指令使用 ZERO+IMM)
      case Seq("rd", "imm20") =>
        i.inst.name match {
          case "lui" => BitPat(ZERO_IMM)    // lui: 0 + imm20
          case "auipc" => BitPat(PC_IMM)    // auipc: PC + imm20
          case _ => BitPat(ZERO_IMM)
        }

      // J-type: rd, jimm20 (jal 指令)
      case Seq("rd", "jimm20") => BitPat(PC_IMM)  // PC + jimm20

      // R4-type: rd, rs1, rs2, rs3 (浮点乘加指令)
      case Seq("rd", "rs1", "rs2", "rs3") => BitPat(RS1_RS2)

      // 特殊情况或系统指令
      case _ =>
        i.inst.name match {
          case "ecall" | "ebreak" | "mret" => BitPat(DONT_CARE)
          case _ => BitPat(DONT_CARE)
        }
    }
  }
}


object systeminst extends DecodeField[Insn,UInt]{
  override def name :String = "system_type"

  override def chiselType: UInt = UInt(4.W)
  override def genTable (i:Insn): BitPat = i.inst.name match {
    case "ecall"      => BitPat("b1000")
    case "ebreak"     => BitPat("b0001")
    case "mret"       => BitPat("b0010")
    case "sret"       => BitPat("b0011")
    case "wfi"        => BitPat("b0100")
    case "sfence.vma" => BitPat("b0101")
    case "fence"      => BitPat("b0110")
    case "fence.i"    => BitPat("b0111")
    case _            => BitPat("b0000")

  }
}


class msg extends Bundle{
  val imm     = UInt(32.W)
  val alusel  = UInt(3.W)
  val csr_en  = Bool()
  val csr_op  = UInt(4.W)
  val opcode  = UInt(5.W)
  val rs1data = UInt(32.W)
  val rs2data = UInt(32.W)
  val rd_en   = UInt(1.W)
  val rdaddr  = UInt(5.W)
  val pc      = UInt(32.W)
  val system  = UInt(4.W)
  val jump_en = Bool()
  val branch_en = Bool()
  val csr_addr = UInt(12.W)
  val mlen     = UInt(3.W)
  val mem_en  = UInt(1.W)
  val mem_wr  = UInt(2.W)
  val unsigned  = Bool()
}


class IDbundle extends Bundle{
  val out = Decoupled(new msg)
  val in  = Flipped(Decoupled(new FDBus))
  val d2r = new D2R 
  val r2e = Flipped(new R2E)
}
class IDU extends Module{
  val io = IO(new IDbundle)
  val inst = io.in.bits.inst

  val instTable  = rvdecoderdb.instructions(os.pwd / "riscv-opcodes")
  val targetSets = Set("rv_i", "rv64_i", "rv_m", "rv64_m" ,"rv32_i","rv_zicsr", "rv_system")
  // add implemented instructions here
  val instList = instTable
    .filter(instr =>  targetSets.contains(instr.instructionSet.name))
    .filter(_.pseudoFrom.isEmpty)
    .map(Insn(_))
    .toSeq

  val decodeTable   = new DecodeTable(instList, Seq(Opcode, ImmType, RdEn,systeminst,alusel,BranchEn,CsrEn,jump_en,Mlen,IsJalr,IsAuipc,IsEbreak,LsuEn,UnsignEn,Rs1En,Rs2En,IsMret,IsEcall,MwEn,unsigned))
  val decodedBundle = decodeTable.decode(inst)

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
      ImmTypeEnum.immShamtW -> imm_shamtw
    )
  )
  io.out.bits.csr_addr  :=inst(31,20)
  io.out.bits.rd_en     := decodedBundle(RdEn)
  io.out.bits.alusel    := decodedBundle(alusel)
  io.d2r.rs1_addr       := inst(19, 15)
  io.d2r.rs2_addr       := inst(24, 20)
  io.out.bits.pc        := io.in.bits.pc
  io.out.bits.rdaddr    := inst(11, 7)
  io.out.bits.opcode    :=decodedBundle(Opcode)
  io.out.bits.csr_en    := decodedBundle(CsrEn)
  io.out.bits.csr_op    := decodedBundle(CsrEn)
  io.out.bits.system    := decodedBundle(systeminst)
  io.out.bits.branch_en := decodedBundle(BranchEn)
  io.out.bits.jump_en   :=decodedBundle(jump_en)
  io.out.bits.rs1data   :=io.r2e.rs1_data
  io.out.bits.rs2data   :=io.r2e.rs2_data
  io.out.bits.mem_wr    :=decodedBundle(MwEn)
  io.out.bits.mlen      :=decodedBundle(Mlen)(2,0)
  io.out.bits.mem_en    :=decodedBundle(Mlen)(3)
  io.out.bits.unsigned  :=decodedBundle(unsigned)
  io.in.ready           := io.out.ready
  io.out.valid          :=io.in.valid
  println(decodeTable, decodedBundle)
}
