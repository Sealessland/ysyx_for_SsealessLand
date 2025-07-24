package dxy

import chisel3._
import chisel3.util._

class core extends Module {
  val io = IO(new Bundle {
    val debugPC = Output(UInt(32.W))
    val debugInst= Output(UInt(32.W))
    val debugDNPC= Output(UInt(32.W))
    val debugin1 = Output(UInt(32.W))
    val debugin2 = Output(UInt(32.W))
    val debugBranch = Output(UInt(32.W))
    val debugImm    = Output(UInt(32.W))
  })
  
  val ram2r1w = Module(new Ram2r1w)
  val decode = Module(new Decode)
  val executer = Module(new Execution)
  val control  = Module(new Control)
  val instfetch = Module(new InstFetch)
  val rf = Module(new RegFile)
  
  // CSR 寄存器
  val mstatus = RegInit(0.U(32.W))
  val mtvec   = RegInit(0.U(32.W))
  val mepc    = RegInit(0.U(32.W))
  val mcause  = RegInit(0.U(32.W))
  
  // CSR 地址常量
  val MSTATUS = 0x300.U
  val MTVEC   = 0x305.U
  val MEPC    = 0x341.U
  val MCAUSE  = 0x342.U
  
  // 从指令中提取 CSR 地址
  val csr_addr = instfetch.io.inst(31, 20)
  
  // CSR 读数据
  val csr_rdata = MuxLookup(csr_addr, 0.U)(Seq(
    MSTATUS -> mstatus,
    MTVEC   -> mtvec,
    MEPC    -> mepc,
    MCAUSE  -> mcause
  ))
  
  // 判断是否为 CSR 指令
  val is_csr_inst = decode.io.opcode >= "b00101010".U && decode.io.opcode <= "b00101111".U
  
  // 判断是否需要写 CSR (对于 csrrs/csrrc/csrrsi/csrrci，只有当 rs1/imm 不为 0 时才写)
  val rs1_uimm = instfetch.io.inst(19, 15)
  val csr_write_en = is_csr_inst && (
    decode.io.opcode === "b00101010".U ||  // csrrw
    decode.io.opcode === "b00101101".U ||  // csrrwi
    (decode.io.opcode === "b00101011".U && rf.io.rs1_data =/= 0.U) ||  // csrrs
    (decode.io.opcode === "b00101100".U && rf.io.rs1_data =/= 0.U) ||  // csrrc
    (decode.io.opcode === "b00101110".U && rs1_uimm =/= 0.U) ||        // csrrsi
    (decode.io.opcode === "b00101111".U && rs1_uimm =/= 0.U)           // csrrci
  )
  
  // CSR 写操作
  when(csr_write_en) {
    switch(csr_addr) {
      is(MSTATUS) { mstatus := executer.io.csrW }
      is(MTVEC)   { mtvec   := executer.io.csrW }
      is(MEPC)    { mepc    := executer.io.csrW }
      is(MCAUSE)  { mcause  := executer.io.csrW }
    }
  }

  // Connect Instruction Fetch (IF) <-> Instruction Memory (IMEM in RAM)
  ram2r1w.io.imem <> instfetch.io.imem

  // Connect IF -> Decode
  decode.io.inst := instfetch.io.inst

  // Connect Decode -> Register File (RF) Read Ports
  rf.io.rs1_addr := decode.io.rs1_addr
  rf.io.rs2_addr := decode.io.rs2_addr

  // Connect Decode -> Execution (EXE)
  executer.io.opcode := decode.io.opcode
  // Use register data if enabled, otherwise use 0 for rs1 or immediate for rs2
  executer.io.in1    := Mux(decode.io.pcEn, instfetch.io.pc, Mux(decode.io.rs1_en, rf.io.rs1_data, 0.U))
  executer.io.in2    := Mux(decode.io.rs2_en, rf.io.rs2_data,decode.io.imm)
  executer.io.imm    := decode.io.imm
  
  // Connect CSR signals
  executer.io.csrR := csr_rdata
  
  // Connect Execution (EXE) <-> Data Memory (DMEM in RAM)
  ram2r1w.io.dmem <> executer.io.dmem

  // Connect Execution (EXE) -> Register File (RF) Write Port
  rf.io.rd_addr  := decode.io.rd_addr
  rf.io.rd_en    := decode.io.rd_en
  rf.io.rd_data  := executer.io.out

  control.io.pc         := instfetch.io.pc
  control.io.imm        := decode.io.imm
  control.io.branchCond <> executer.io.branchCond
  control.io.rf_en      :=decode.io.jalrEn
  control.io.rf_data    :=rf.io.rs1_data

  instfetch.io.dnpc   := control.io.dnpc
  instfetch.io.pcSrc  := executer.io.branchCond

  // Connect debug outputs (example)
  io.debugPC   := instfetch.io.pc
  io.debugInst := instfetch.io.inst
  io.debugDNPC := control.io.dnpc
  io.debugin2  := executer.io.in2
  io.debugin1  := executer.io.in1
  io.debugBranch := executer.io.branchCond
  io.debugImm    := decode.io.imm
}
