import dxy._

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

  // 生成主要模块的Verilog代码
  circt.stage.ChiselStage.emitSystemVerilogFile(new core(), args, firtoolOptions)
  circt.stage.ChiselStage.emitSystemVerilogFile(new Decode(), args, firtoolOptions)
  circt.stage.ChiselStage.emitSystemVerilogFile(new Execution(), args, firtoolOptions)
  circt.stage.ChiselStage.emitSystemVerilogFile(new RegFile(), args, firtoolOptions)

  // 生成内存访问和测试模块的Verilog代码
}
