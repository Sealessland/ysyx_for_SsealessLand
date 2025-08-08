package gyr
import chisel3._
import chisel3.util._
import chisel3.experimental._
class observer extends Module {
  val io = IO(new Bundle{
    val inst = Input(UInt(32.W))
    val pc   = Input(UInt(32.W))
  })
  val Consumedinst = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))
  val Consumedpc = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))
  val index = RegInit(0.U(5.W))

  when(io.inst =/= 0.U) {
    Consumedinst(index) := io.inst
    Consumedpc(index) := io.pc
    index := index + 1.U
  }


}
class OB_DPI extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val clock = Input(Clock())
    val reset = Input(Reset())
    val inst_consumed = Output(Bool())
    val inst = Input(UInt(32.W))
    val pc = Input(UInt(32.W))

  })
}


class CommitDPI extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val commit_valid = Input(Bool()) // 接收来自硬件的完成信号
  })

  // Verilog 嵌入代码
  setInline("CommitDPI.v",
    s"""
       |// 导入 C 函数 "instruction_committed"
       |import "DPI-C" function void instruction_committed();
       |
       |module CommitDPI(
       |  input clock,
       |  input commit_valid
       |);
       |
       |  // 当 commit_valid 为高电平时，
       |  // 在下一个时钟上升沿调用 C 函数
       |  always @(posedge clock) begin
       |    if (commit_valid) begin
       |      instruction_committed();
       |    end
       |  end
       |
       |endmodule
       |""".stripMargin)
}