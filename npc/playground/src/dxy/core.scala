package dxy

import chisel3._

class core extends Module {
  val io = IO(new Bundle {
    val debugPC = Output(UInt(32.W))
    val debugInst= Output(UInt(32.W))
    val debugDNPC= Output(UInt(32.W))

  })
  val ram2r1w = Module(new Ram2r1w)
  val decode = Module(new Decode)
  val executer = Module(new Execution)
  val control  = Module(new Control)
  val instfetch = Module(new InstFetch)
  val rf = Module(new RegFile)
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
  executer.io.in1    := Mux(decode.io.jumpEn, instfetch.io.pc, Mux(decode.io.rs1_en, rf.io.rs1_data, 0.U))
  executer.io.in2    := Mux(decode.io.rs2_en, rf.io.rs2_data,decode.io.imm)

  // Connect Execution (EXE) <-> Data Memory (DMEM in RAM)
  ram2r1w.io.dmem <> executer.io.dmem

  // Connect Execution (EXE) -> Register File (RF) Write Port
  rf.io.rd_addr  := decode.io.rd_addr
  rf.io.rd_en    := decode.io.rd_en
  rf.io.rd_data  := executer.io.out

  control.io.pc         := instfetch.io.pc
  control.io.imm        := decode.io.imm
  control.io.branchCond <> executer.io.branchCond
  control.io.rf_en      :=decode.io.rs1_en
  control.io.rf_data    :=rf.io.rs1_data

  instfetch.io.dnpc   := control.io.dnpc
  instfetch.io.pcSrc  := executer.io.branchCond

  // Connect debug outputs (example)
  io.debugPC   := instfetch.io.pc
  io.debugInst := instfetch.io.inst
  io.debugDNPC := control.io.dnpc

}
