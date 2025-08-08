package xininn
import chisel3._
import chisel3.util._


import chisel3._
import chisel3.util.HasBlackBoxInline

class ebreak extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val en = Input(Bool())
  })

  setInline("ebreak.v",
    """
      |module ebreak (
      |    input clock,
      |    input en
      |);
      |
      |  import "DPI-C" function void ebreak_handler();
      |
      |  always @(posedge clock) begin
      |    if (en) begin
      |      ebreak_handler();
      |    end
      |  end
      |
      |endmodule
    """.stripMargin)
}

class ecall extends Module{
  val io = IO(new Bundle{
    val pc = Input(UInt(32.W))
    val en = Input(Bool())
    val cause = Output(UInt(32.W))
  })
}