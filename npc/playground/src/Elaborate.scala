import dxy.Top

object Elaborate extends App {
  val firtoolOptions = Array(
    "--lowering-options=" + List(
      // make yosys happy
      // see https://github.com/llvm/circt/blob/main/docs/VerilogGeneration.md
      "disallowLocalVariables",
      "disallowPackedArrays",
      "locationInfoStyle=wrapInAtSquareBracket"
    ).reduce(_ + "," + _)
  )
  circt.stage.ChiselStage.emitSystemVerilogFile(new gcd.GCD(), args, firtoolOptions)
  circt.stage.ChiselStage.emitSystemVerilogFile(new dxy.MemoryAccess(), args, firtoolOptions)
  circt.stage.ChiselStage.emitSystemVerilogFile(new dxy.executer(), args, firtoolOptions)
  circt.stage.ChiselStage.emitSystemVerilogFile(new Top(),args , firtoolOptions)
}
