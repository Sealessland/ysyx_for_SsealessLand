package gyr
import chisel3._
import chisel3.util._



class AluIO extends Bundle{
  val in1 = Input(UInt(32.W))
  val in2 = Input(UInt(32.W))
  val out = Output(UInt(32.W))
  val opcode = Input(UInt(5.W))
  val unsign_en = Input(Bool())
}

class ALU extends Module {
  val io = IO(new AluIO)

  val shamt = io.in2(4, 0)

  // --- Group 1: Arithmetic Results ---
  val add_res = io.in1 + io.in2
  val sub_res = io.in1 - io.in2

  // --- Group 2: Comparison Results ---
  val slt_res = Mux(io.unsign_en, io.in1 < io.in2, io.in1.asSInt < io.in2.asSInt)
  val sge_res = Mux(io.unsign_en, io.in1 >= io.in2, io.in1.asSInt >= io.in2.asSInt)
  val equ_res = io.in1 === io.in2
  val neq_res = io.in1 =/= io.in2

  // --- Group 3: Logical Results (Combined into one signal) ---
  // Note: The results are Bits, so we cast the final result to UInt.
  val logic_res = MuxLookup(io.opcode.asUInt, 0.U(32.W))(Seq(
    AluFunc.and.asUInt -> (io.in1 & io.in2),
    AluFunc.or.asUInt  -> (io.in1 | io.in2),
    AluFunc.xor.asUInt -> (io.in1 ^ io.in2)
  )).asUInt

  // --- Group 4: Shifter Results (Combined into one signal) ---
  val sll_res = io.in1 << shamt
  val srl_res = io.in1 >> shamt
  val sra_res = (io.in1.asSInt >> shamt).asUInt
  val shift_res = MuxLookup(io.opcode.asUInt, 0.U(32.W))(Seq(
    AluFunc.sll.asUInt -> sll_res.asUInt,
    AluFunc.srl.asUInt -> srl_res.asUInt,
    AluFunc.sra.asUInt -> sra_res.asUInt
  ))

  // --- Group 5: M-extension Results ---
  val mul_res = (io.in1 * io.in2)(31,0)
  val div_res = Mux(io.unsign_en, io.in1 / io.in2, (io.in1.asSInt / io.in2.asSInt).asUInt)
  val rem_res = Mux(io.unsign_en, io.in1 % io.in2, (io.in1.asSInt % io.in2.asSInt).asUInt)


  // --- Final Output Selection ---
  // Now we select from the intermediate group results. All are UInt.
  io.out := MuxLookup(io.opcode.asUInt, 0.U(32.W))(Seq(
    AluFunc.add.asUInt -> add_res,
    AluFunc.sub.asUInt -> sub_res,
    AluFunc.slt.asUInt -> slt_res,
    AluFunc.sge.asUInt -> sge_res,
    AluFunc.equ.asUInt -> equ_res,
    AluFunc.neq.asUInt -> neq_res,
    AluFunc.and.asUInt -> logic_res,
    AluFunc.or.asUInt  -> logic_res,
    AluFunc.xor.asUInt -> logic_res,
    AluFunc.sll.asUInt -> shift_res,
    AluFunc.srl.asUInt -> shift_res,
    AluFunc.sra.asUInt -> shift_res,
    AluFunc.mul.asUInt -> mul_res,
    AluFunc.div.asUInt -> div_res,
    AluFunc.rem.asUInt -> rem_res
  ))
}