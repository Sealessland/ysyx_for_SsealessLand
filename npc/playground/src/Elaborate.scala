
import te._
import xininn._
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
  //circt.stage.ChiselStage.emitSystemVerilogFile(new core, args, firtoolOptions)
  circt.stage.ChiselStage.emitSystemVerilogFile(new ysyx_23060321, args, firtoolOptions)
  circt.stage.ChiselStage.emitSystemVerilogFile(new IDU, args, firtoolOptions)
  circt.stage.ChiselStage.emitSystemVerilogFile(new EXU, args, firtoolOptions)
  circt.stage.ChiselStage.emitSystemVerilogFile(new LSU, args, firtoolOptions)
  circt.stage.ChiselStage.emitSystemVerilogFile(new  WBU, args ,firtoolOptions)
  circt.stage.ChiselStage.emitSystemVerilogFile(new core, args ,firtoolOptions)
  circt.stage.ChiselStage.emitSystemVerilogFile(new RegFile, args, firtoolOptions)
  //circt.stage.ChiselStage.emitSystemVerilogFile(new test(), args, firtoolOptions)
 // circt.stage.ChiselStage.emitSystemVerilogFile(new Decode, args, firtoolOptions)

  // 生成内存访问和测试模块的Verilog代码
}
