package xininn
import chisel3._
import chisel3.util._






object AluFunc {
  val SZ = 5
  def NOP: UInt = "b00000".U(SZ.W)
  def add: UInt = "b00001".U(SZ.W)
  def sub: UInt = "b00010".U(SZ.W)
  def mul: UInt = "b00011".U(SZ.W)
  def div: UInt = "b00100".U(SZ.W)
  def rem: UInt = "b00101".U(SZ.W)
  def sge: UInt = "b00110".U(SZ.W) // rs1 >= rs2 (signed)
  def slt: UInt = "b00111".U(SZ.W) // rs1 < rs2 (signed)
  def equ: UInt = "b01000".U(SZ.W) // rs1 == rs2
  def neq: UInt = "b01001".U(SZ.W) // rs1 != rs2
  def and: UInt = "b01010".U(SZ.W)
  def or:  UInt = "b01011".U(SZ.W)
  def xor: UInt = "b01100".U(SZ.W)
  def sll: UInt = "b01101".U(SZ.W)
  def srl: UInt = "b01110".U(SZ.W)
  def sra: UInt = "b01111".U(SZ.W)
  
  // 无符号操作常量
  def sltu: UInt = "b10001".U(SZ.W) // rs1 < rs2 (unsigned)  
  def sgeu: UInt = "b10010".U(SZ.W) // rs1 >= rs2 (unsigned)
  def divu: UInt = "b10011".U(SZ.W) // div unsigned
  def remu: UInt = "b10100".U(SZ.W) // rem unsigned
  def mulu: UInt = "b10101".U(SZ.W) // mul unsigned (high part)
}

class AluIO extends Bundle{
  val in1 = Input(UInt(32.W))
  val in2 = Input(UInt(32.W))
  val out = Output(UInt(32.W))
  val opcode = Input(UInt(5.W))
  // 移除 unsign_en 信号
}

class ALU extends Module {
  val io = IO(new AluIO)

  val shamt: UInt = io.in2(4, 0)

  // --- Group 1: Arithmetic Results ---
  val add_res = io.in1 + io.in2
  val sub_res = io.in1 - io.in2

  // --- Group 2: Comparison Results ---
  val slt_res_signed = (io.in1.asSInt < io.in2.asSInt).asUInt
  val slt_res_unsigned = (io.in1 < io.in2).asUInt
  val sge_res_signed = (io.in1.asSInt >= io.in2.asSInt).asUInt
  val sge_res_unsigned = (io.in1 >= io.in2).asUInt
  val equ_res = (io.in1 === io.in2).asUInt
  val neq_res = (io.in1 =/= io.in2).asUInt

  // --- Group 3: Logical Results ---
  val and_res = io.in1 & io.in2
  val or_res = io.in1 | io.in2
  val xor_res = io.in1 ^ io.in2

  // --- Group 4: Shifter Results ---
  val sll_res = io.in1 << shamt
  val srl_res = io.in1 >> shamt
  val sra_res = (io.in1.asSInt >> shamt).asUInt

  // --- Group 5: M-extension Results ---
  val mul_res = (io.in1 * io.in2)(31, 0)
  val mulu_res = (io.in1 * io.in2)(63, 32) // 无符号高位乘法
  val div_res_signed = (io.in1.asSInt / io.in2.asSInt).asUInt
  val div_res_unsigned = io.in1 / io.in2
  val rem_res_signed = (io.in1.asSInt % io.in2.asSInt).asUInt
  val rem_res_unsigned = io.in1 % io.in2

  // --- Final Output Selection ---
  io.out := MuxLookup(io.opcode.asUInt, 0.U(32.W))(Seq(
    AluFunc.add.asUInt  -> add_res,
    AluFunc.sub.asUInt  -> sub_res,
    AluFunc.slt.asUInt  -> slt_res_signed,
    AluFunc.sltu.asUInt -> slt_res_unsigned,    // 无符号比较
    AluFunc.sge.asUInt  -> sge_res_signed,
    AluFunc.sgeu.asUInt -> sge_res_unsigned,    // 无符号大于等于
    AluFunc.equ.asUInt  -> equ_res,
    AluFunc.neq.asUInt  -> neq_res,
    AluFunc.and.asUInt  -> and_res,
    AluFunc.or.asUInt   -> or_res,
    AluFunc.xor.asUInt  -> xor_res,
    AluFunc.sll.asUInt  -> sll_res,
    AluFunc.srl.asUInt  -> srl_res,
    AluFunc.sra.asUInt  -> sra_res,
    AluFunc.mul.asUInt  -> mul_res,
    AluFunc.mulu.asUInt -> mulu_res,            // 无符号乘法
    AluFunc.div.asUInt  -> div_res_signed,
    AluFunc.divu.asUInt -> div_res_unsigned,    // 无符号除法
    AluFunc.rem.asUInt  -> rem_res_signed,
    AluFunc.remu.asUInt -> rem_res_unsigned,    // 无符号求余
    AluFunc.NOP.asUInt  -> io.in1
  ))
}

object CsrAluOp {
  // 定义 csr_alu_func 的位宽
  val width = 4

  // 定义各个操作的常量 (使用 BitPat 可以方便地用于指令译码)
  // 格式: [is_imm, op_type(2 bizts), reserved(1 bit)]
  // 我们稍微调整一下结构，把操作类型放在低位，is_imm放在高位，更符合习惯
  // 格式: [is_imm (1 bit)] [op_type (3 bits)]

  // 基本操作类型
  val NOP   = "b000".U
  val WRITE = "b001".U // Corresponds to CSRRW / CSRRWI
  val SET   = "b010".U // Corresponds to CSRRS / CSRRSI
  val CLEAR = "b011".U // Corresponds to CSRRC / CSRRCI

  // is_imm 标志位
  val IMM_F = "b0".U // 操作数来自寄存器
  val IMM_T = "b1".U // 操作数来自立即数

  // 完整的函数编码
  def apply() = UInt(width.W)

  def CSRRW_FUNC  = Cat(IMM_F, WRITE)
  def CSRRS_FUNC  = Cat(IMM_F, SET)
  def CSRRC_FUNC  = Cat(IMM_F, CLEAR)
  def CSRRWI_FUNC = Cat(IMM_T, WRITE)
  def CSRRSI_FUNC = Cat(IMM_T, SET)
  def CSRRCI_FUNC = Cat(IMM_T, CLEAR)
}
// 从译码阶段传入的微操作 Bundle
class CsrMicroOp extends Bundle {
  val func      = Input(CsrAluOp())       // 4位的操作类型
  val rs1_data  = Input(UInt(32.W))       // 来自源寄存器 rs1 的数据
  val zimm      = Input(UInt(32.W))       // 5位立即数零扩展后的值
}

// CSR 单元的输出 Bundle
class CsrUnitOutput extends Bundle {
  val result_for_rd   = Output(UInt(32.W)) // 要写回通用寄存器 rd 的值 (总是 old_csr_value)
  val csr_new_value   = Output(UInt(32.W)) // 要写入 CSR 文件的新值
  val csr_write_enable = Output(Bool())      // CSR 文件写使能
}

class CsrAlu extends Module {
  val io = IO(new Bundle {
    val uop          = new CsrMicroOp()          // 输入: 来自译码的微操作
    val csr_old_value = Input(UInt(32.W))        // 输入: 从 CSR 文件读出的当前值
    val out          = new CsrUnitOutput()       // 输出: 计算结果
  })

  // --- 解码 csr_alu_func ---
  val is_imm_op = io.uop.func(3) // 最高位判断是否是立即数版本
  val op_type   = io.uop.func(2, 0) // 低3位判断是 Write/Set/Clear

  val write_source = Mux(is_imm_op, io.uop.zimm, io.uop.rs1_data)

  val csr_new_value_w = Wire(UInt(32.W))
  csr_new_value_w := 0.U
  switch(op_type) {
    is(CsrAluOp.WRITE) {
      csr_new_value_w := write_source
    }
    is(CsrAluOp.SET) {
      csr_new_value_w := io.csr_old_value | write_source
    }
    is(CsrAluOp.CLEAR) {
      csr_new_value_w := io.csr_old_value & (~write_source)
    }
    is(CsrAluOp.NOP) {
      csr_new_value_w := io.csr_old_value
    }
  }

  val perform_write = Wire(Bool())

  // 默认情况下，如果操作不是 NOP，就执行写操作
  perform_write := (op_type =/= CsrAluOp.NOP)

  // 特殊情况：对于 Set/Clear 操作，如果源操作数为 0，则不执行写操作 (变为只读)
  when((op_type === CsrAluOp.SET || op_type === CsrAluOp.CLEAR) && write_source === 0.U) {
    perform_write := false.B
  }
  // --- 4. 连接输出端口 ---
  // 写回 rd 的值永远是 CSR 的旧值
  io.out.result_for_rd := io.csr_old_value
  // 连接计算出的新值和写使能
  io.out.csr_new_value := csr_new_value_w
  io.out.csr_write_enable := perform_write
}



class eallhandler extends Module{
  val io = IO(new Bundle {{
    val ecall_en = Input(Bool())
    val pc_en = Output(Bool())
    val pc  = Output(UInt(32.W))
    val cause_addr = Output(UInt(12.W))
    val cause = Output(UInt(32.W))
  }})
}