package dxy

import chisel3._
import chisel3.util._

class Execution extends Module {
  val io = IO(new Bundle {
    val opcode = Input(UInt(8.W))
    val in1    = Input(UInt(32.W))
    val in2    = Input(UInt(32.W))
    val out    = Output(UInt(32.W))
    val dmem   = new RamIO
    val branchCond =  Output(Bool())
  })
  val ebreakInst = Module(new ebreak)

  // Default values
  io.out := 0.U
  io.dmem.en    := false.B
  io.dmem.addr  := 0.U
  io.dmem.wen   := false.B
  io.dmem.wdata := 0.U
  io.dmem.wmask := 0.U
  io.branchCond:= 0.U
  ebreakInst.io.clock := clock
  ebreakInst.io.en := false.B
  switch(io.opcode) {

    // R-type arithmetic instructions
    is("b00000001".U) { io.out := io.in1 + io.in2 }                    // add
    is("b00000010".U) { io.out := io.in1 - io.in2 }                    // sub
    is("b00000011".U) { io.out := io.in1 << io.in2(5, 0) }             // sll
    is("b00000100".U) { io.out := (io.in1.asSInt < io.in2.asSInt)}  // slt
    is("b00000101".U) {io.out := Mux((io.in1 < io.in2),1.U(32.W),0.U(32.W)) }      // sltu
    is("b00000110".U) { io.out := io.in1 ^ io.in2 }                    // xor
    is("b00000111".U) { io.out := io.in1 >> io.in2(5, 0) }             // srl
    is("b00001000".U) { io.out := (io.in1.asSInt >> io.in2(5, 0)).asUInt }  // sra
    is("b00001001".U) { io.out := io.in1 | io.in2 }                    // or
    is("b00001010".U) { io.out := io.in1 & io.in2 }                    // and
    
    // I-type immediate instructions
    is("b00001011".U) { io.out := io.in1 + io.in2 }                    // addi
    is("b00001100".U) { io.out := (io.in1.asSInt < io.in2.asSInt).asUInt }  // slti
    is("b00001101".U) { io.out := Mux((io.in1 < io.in2),1.U(32.W),0.U(32.W)) }      // sltiu
    is("b00001110".U) { io.out := io.in1 ^ io.in2 }                    // xori
    is("b00001111".U) { io.out := io.in1 | io.in2 }                    // ori
    is("b00010000".U) { io.out := io.in1 & io.in2 }                    // andi
    is("b00010001".U) { io.out := io.in1 << io.in2(5, 0) }             // slli
    is("b00010010".U) { io.out := io.in1 >> io.in2(5, 0) }             // srli
    is("b00010011".U) { io.out := (io.in1.asSInt >> io.in2(5, 0)).asUInt }  // srai
    
    // Load instructions
    is("b00010100".U) { // lb
      io.dmem.en := true.B
      io.dmem.addr := io.in1 + io.in2
      io.out := Cat(Fill(56, io.dmem.rdata(7)), io.dmem.rdata(7, 0))
    }
    is("b00010101".U) { // lh
      io.dmem.en := true.B
      io.dmem.addr := io.in1 + io.in2
      io.out := Cat(Fill(48, io.dmem.rdata(15)), io.dmem.rdata(15, 0))
    }
    is("b00010110".U) { // lw
      io.dmem.en := true.B
      io.dmem.addr := io.in1 + io.in2
      io.out := Cat(Fill(32, io.dmem.rdata(31)), io.dmem.rdata(31, 0))
    }
    is("b00010111".U) { // lbu
      io.dmem.en := true.B
      io.dmem.addr := io.in1 + io.in2
      io.out := Cat(Fill(56, 0.U), io.dmem.rdata(7, 0))
    }
    is("b00011000".U) { // lhu
      io.dmem.en := true.B
      io.dmem.addr := io.in1 + io.in2
      io.out := Cat(Fill(48, 0.U), io.dmem.rdata(15, 0))
    }
    
    // Store instructions
    is("b00011001".U) { // sb
      io.dmem.en := true.B
      io.dmem.addr := io.in1 + io.in2
      io.dmem.wen := true.B
      io.dmem.wdata := Cat(Fill(56, 0.U), io.in2(7, 0))
      io.dmem.wmask := "h00000000000000FF".U
    }
    is("b00011010".U) { // sh
      io.dmem.en := true.B
      io.dmem.addr := io.in1 + io.in2
      io.dmem.wen := true.B
      io.dmem.wdata := Cat(Fill(48, 0.U), io.in2(15, 0))
      io.dmem.wmask := "h000000000000FFFF".U
    }
    is("b00011011".U) { // sw
      io.dmem.en := true.B
      io.dmem.addr := io.in1 + io.in2
      io.dmem.wen := true.B
      io.dmem.wdata := Cat(Fill(32, 0.U), io.in2(31, 0))
      io.dmem.wmask := "h00000000FFFFFFFF".U
    }
    
    // Branch instructions - calculate condition
    is("b00011100".U) { io.branchCond := (io.in1 === io.in2).asUInt }         // beq
    is("b00011101".U) { io.branchCond := (io.in1 =/= io.in2).asUInt }         // bne
    is("b00011110".U) { io.branchCond := (io.in1.asSInt < io.in2.asSInt).asUInt } // blt
    is("b00011111".U) { io.branchCond := (io.in1.asSInt >= io.in2.asSInt).asUInt } // bge
    is("b00100000".U) { io.branchCond := (io.in1 < io.in2).asUInt }           // bltu
    is("b00100001".U) { io.branchCond := (io.in1 >= io.in2).asUInt }          // bgeu
    
    // Jump instructions - for these we just pass through values
    is("b00100010".U) { io.out := io.in1 + 4.U
                        io.branchCond:=true.asBool}                       // jal (return addr)
    is("b00100011".U) { io.out := io.in1 + 4.U
                        io.branchCond:=true.asBool}                       // jalr (return addr)
    
    // U-type instructions
    is("b00100100".U) { io.out := io.in2 }                             // lui
    is("b00100101".U) { io.out := io.in1 + io.in2 }                    // auipc
    
    // System instructions
    is("b00100110".U) { /* ecall: do nothing in executer */ }
    is("b00100111".U) { ebreakInst.io.en := true.B }
    
    // Memory synchronization instructions
    is("b00101000".U) { /* fence: do nothing in executer */ }
    is("b00101001".U) { /* fence.i: do nothing in executer */ }
  }
}
