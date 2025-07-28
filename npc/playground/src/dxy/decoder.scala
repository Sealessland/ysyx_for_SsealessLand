package dxy

import chisel3._
import chisel3.util._
import chisel3.util.experimental.decode._
import org.chipsalliance.rvdecoderdb

case class Insn(val inst: rvdecoderdb.Instruction) extends DecodePattern {
  override def bitPat: BitPat = BitPat("b" + inst.encoding.toString())
}

object Insn {
  implicit class addMethodsToInsn(i: Insn) {
    def hasArg(arg: String) = i.inst.args.map(_.name).contains(arg)
  }
}

object Opcode extends DecodeField[Insn, UInt] {
  override def name = "opcode"

  override def chiselType = UInt(8.W)

  override def genTable(i: Insn): BitPat = i.inst.name match {
  case "add"    => BitPat("b00000001")
  case "sub"    => BitPat("b00000010")
  case "sll"    => BitPat("b00000011")
  case "slt"    => BitPat("b00000100")
  case "sltu"   => BitPat("b00000101")
  case "xor"    => BitPat("b00000110")
  case "srl"    => BitPat("b00000111")
  case "sra"    => BitPat("b00001000")
  case "or"     => BitPat("b00001001")
  case "and"    => BitPat("b00001010")

    // I-type 立即数指令
  case "addi"   => BitPat("b00001011")
  case "slti"   => BitPat("b00001100")
  case "sltiu"  => BitPat("b00001101")
  case "xori"   => BitPat("b00001110")
  case "ori"    => BitPat("b00001111")
  case "andi"   => BitPat("b00010000")
  case "slli"   => BitPat("b00010001")
  case "srli"   => BitPat("b00010010")
  case "srai"   => BitPat("b00010011")

    // 加载指令
  case "lb"     => BitPat("b00010100")
  case "lh"     => BitPat("b00010101")
  case "lw"     => BitPat("b00010110")
  case "lbu"    => BitPat("b00010111")
  case "lhu"    => BitPat("b00011000")

    // 存储指令
  case "sb"     => BitPat("b00011001")
  case "sh"     => BitPat("b00011010")
  case "sw"     => BitPat("b00011011")

    // 分支指令
  case "beq"    => BitPat("b00011100")
  case "bne"    => BitPat("b00011101")
  case "blt"    => BitPat("b00011110")
  case "bge"    => BitPat("b00011111")
  case "bltu"   => BitPat("b00100000")
  case "bgeu"   => BitPat("b00100001")

    // 跳转指令
  case "jal"    => BitPat("b00100010")
  case "jalr"   => BitPat("b00100011")

    // U-type 指令
  case "lui"    => BitPat("b00100100")
  case "auipc"  => BitPat("b00100101")

    // 系统指令
  case "ecall"  => BitPat("b00100110")
  case "ebreak" => BitPat("b00100111")




    // 内存同步指令
  case "fence"  => BitPat("b00101000")
  case "fence.i"=> BitPat("b00101001")
  
  // CSR指令
  case "csrrw"  => BitPat("b00101010")
  case "csrrs"  => BitPat("b00101011") 
  case "csrrc"  => BitPat("b00101100")
  case "csrrwi" => BitPat("b00101101")
  case "csrrsi" => BitPat("b00101110")
  case "csrrci" => BitPat("b00101111")
    // 默认情况
  case _        => BitPat("b00000000")

  }
}

object ImmTypeEnum extends ChiselEnum {
  val immNone, immI, immS, immB, immU, immJ, immShamtD, immShamtW = Value
}

object ImmType extends DecodeField[Insn, ImmTypeEnum.Type] {
  override def name = "imm_type"

  override def chiselType = ImmTypeEnum()

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
        case _                       => ImmTypeEnum.immNone
      })
      .filterNot(_ == ImmTypeEnum.immNone)
      .headOption // different ImmType will not appear in the Seq
      .getOrElse(ImmTypeEnum.immNone)

    BitPat(immType.litValue.U((immType.getWidth).W))
  }

}

object pcEn extends BoolDecodeField[Insn] {
  override def name: String = "may_cause_jump"

  override def genTable(i: Insn): BitPat = i.inst.name match {
    // Branch instructions
    // Jump instructions
    case "jal" | "jalr" => y
    case "auipc"|"lui" => y
    // All other instructions
    case _ => n
  }
}

object JalrEn extends BoolDecodeField[Insn] {
  override def name: String = "jalr_en"
  override def genTable(i: Insn): BitPat = i.inst.name match {
    case "jalr" => y
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
    case _        => BitPat("b0")
  }
}
class Decode extends Module {
  val io = IO(new Bundle {
    val inst = Input(UInt(32.W))
    val rs1_addr = Output(UInt(5.W))
    val rs1_en   = Output(Bool())
    val rs2_addr = Output(UInt(5.W))
    val rs2_en   = Output(Bool())
    val rd_addr  = Output(UInt(5.W))
    val rd_en    = Output(Bool())
    val opcode   = Output(UInt(8.W))
    val imm      = Output(UInt(64.W))
    val pcEn     = Output(Bool())
    val jalrEn   = Output(Bool())
    val csrEn   = Output(Bool())
  })
  val inst = io.inst

  val instTable  = rvdecoderdb.instructions(os.pwd / "riscv-opcodes")
  val targetSets = Set("rv_i", "rv64_i", "rv_m", "rv64_m")
  // add implemented instructions here
  val instList = instTable
    .filter(instr => targetSets.contains(instr.instructionSet.name))
    .filter(_.pseudoFrom.isEmpty)
    .map(Insn(_))
    .toSeq

  val decodeTable   = new DecodeTable(instList, Seq(Opcode, ImmType, Rs1En, Rs2En, RdEn, JalrEn, pcEn, CsrEn))
  val decodedBundle = decodeTable.decode(inst)

  val imm_i: UInt = Cat(Fill(52, inst(31)), inst(31, 20))                              // I-type
  val imm_s: UInt = Cat(Fill(52, inst(31)), inst(31, 25), inst(11, 7))                 // S-type
  val imm_b: UInt = Cat(Fill(52, inst(31)), inst(7), inst(30, 25), inst(11, 8), 0.U)   // B-type
  val imm_u      = Cat(Fill(32, inst(31)), inst(31, 12), Fill(12, 0.U))               // U-type
  val imm_j      = Cat(Fill(44, inst(31)), inst(19, 12), inst(20), inst(30, 21), 0.U) // J-type
  val imm_shamtd = Cat(Fill(58, 0.U), inst(25, 20))
  val imm_shamtw = Cat(Fill(59, 0.U), inst(24, 20))
  io.opcode := decodedBundle(Opcode)

  val imm_type = decodedBundle(ImmType)
  io.imm := MuxLookup(imm_type, 0.U)(
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

  io.rs1_en := decodedBundle(Rs1En)
  io.rs2_en := decodedBundle(Rs2En)
  io.rd_en  := decodedBundle(RdEn)
  io.pcEn := decodedBundle(pcEn)
  io.jalrEn:= decodedBundle(JalrEn)
  io.rs1_addr := inst(19, 15)
  io.rs2_addr := inst(24, 20)
  io.rd_addr  := inst(11, 7)
  io.csrEn := decodedBundle(CsrEn)
  println(decodeTable, decodedBundle)
}
