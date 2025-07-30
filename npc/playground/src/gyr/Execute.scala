package gyr
import chisel3._
import chisel3.util._
class E2L extends Bundle{
  val rd_en     = (Bool())
  val rd_addr   = (UInt(5.W))
  val rd_data   = (UInt(32.W))
  val mem_wen   = (Bool())
  val mem_ren   = (Bool()) // 明确的内存读使能
  val mem_addr = (UInt(32.W))
  val mem_wdata = (UInt(32.W))
  val mem_len  = UInt(4.W)
  val unsign_en = Bool()
}
class PCcontrol extends Bundle{
  val pcSel = Output(Bool())
  val dnpc  = Output(UInt(32.W))
}
class EUBus extends Bundle{
  val out = Decoupled(new E2L)
  val pcCtrl = new PCcontrol
  val in  = Flipped(Decoupled(new D2E))
}


class Execute extends Module{
  val io = IO(new EUBus)

  // --- 1. ALU 实例化与输入选择 ---
  val alu = Module(new ALU)

  // JAL和Branch指令需要PC作为ALU的第一个输入来计算PC+imm
  // JALR和其他指令则使用rs1_data
  val alu_in1 = Mux(io.in.bits.jump_en || io.in.bits.branch_en, io.in.bits.pc, io.in.bits.rs1_data)

  // 第二个输入源保持不变：R/B/S型用rs2，I/J/U型用imm
  val alu_in2 = Mux(io.in.bits.rs2_en, io.in.bits.rs2_data, io.in.bits.imm)

  alu.io.opcode    := io.in.bits.opcode
  alu.io.in1       := alu_in1
  alu.io.in2       := alu_in2
  alu.io.unsign_en := io.in.bits.unsign_en

  val alu_out = alu.io.out

  // --- 2. PC 控制逻辑 ---
  // 分支条件判断
  val branch_taken = io.in.bits.branch_en && (alu_out =/= 0.U)

  // PC重定向条件：发生分支跳转、JAL或JALR
  val pc_redirect = branch_taken || io.in.bits.jump_en || io.in.bits.jalr_en
  io.pcCtrl.pcSel := pc_redirect

  // 计算不同情况下的跳转目标地址
  val pc_plus_imm_target = io.in.bits.pc + io.in.bits.imm // 用于 JAL 和 Branch
  val reg_plus_imm_target = alu_out                      // 用于 JALR, ALU已算出 rs1+imm

  // 根据是否是JALR来选择最终的跳转目标
  // JAL和Branch都使用 pc_plus_imm_target
  io.pcCtrl.dnpc  := Mux(io.in.bits.jalr_en, reg_plus_imm_target, pc_plus_imm_target)

  // --- 3. 写回逻辑 ---
  // JAL和JALR需要写回链接地址(PC+4)
  val link_address = io.in.bits.pc + 4.U

  // 根据指令类型选择正确的写回数据
  val rd_write_data = Mux(io.in.bits.jump_en || io.in.bits.jalr_en, link_address, alu_out)

  // --- 4. 连接到下一级流水线 (out) ---
  // (已移除您代码中的重复赋值)
  io.out.bits.rd_en      := io.in.bits.rd_en
  io.out.bits.rd_addr    := io.in.bits.rd_addr
  io.out.bits.rd_data    := rd_write_data // 使用正确选择的写回数据
  io.out.bits.mem_ren    := io.in.bits.lsu_en ^ io.in.bits.mw_en // 明确的内存读使能
  io.out.bits.mem_wen    := io.in.bits.mw_en
  io.out.bits.mem_addr   := alu_out // 访存地址由ALU计算
  io.out.bits.mem_wdata  := io.in.bits.rs2_data
  io.out.bits.mem_len    := io.in.bits.mlen
  io.out.bits.unsign_en  := io.in.bits.unsign_en

  // --- 5. 握手信号 ---
  // 假设这是单周期组合逻辑模块，直接透传握手信号
  io.out.valid := io.in.valid
  io.in.ready  := io.out.ready
}