package dxy

import chisel3._
import chisel3.util._

class Control extends Module {
  val io = IO(new Bundle{
    val pc         = Input(UInt(32.W))
    val imm        = Input(UInt(32.W))
    val rf_en      = Input(Bool())         // Indicates if register file data should be used for jump target (e.g., jalr)
    val rf_data    = Input(UInt(32.W))     // Data from register file (rs1 for jalr)
    val branchCond = Input(Bool())         // Condition for branch/jump taken
    val dnpc       = Output(UInt(32.W))    // Destination/Next PC
  })

  // Declare targetPC as a Wire
  val targetPC = Wire(UInt(32.W))

  // Calculate the next PC value based on conditions
  when(io.branchCond) { // Branch or Jump taken
    when(io.rf_en) { // Jump Register (jalr)
      // JALR target: rs1 + imm (ensure lower bit is 0 if needed, though typically handled by alignment)
      targetPC := io.rf_data + io.imm
    }.otherwise { // Conditional Branch (beq, bne, etc.) or Unconditional Jump (jal)
      // Branch/JAL target: pc + imm
      targetPC := io.pc + io.imm
    }
  }.otherwise { // Instruction proceeds sequentially
    // Default next PC: pc + 4
    targetPC := io.pc + 4.U
  }

  // Connect the calculated targetPC to the output
  io.dnpc := targetPC
}