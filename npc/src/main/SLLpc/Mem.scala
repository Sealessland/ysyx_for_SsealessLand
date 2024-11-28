import chisel3._
import chisel3.util._

class MemReadBundle extends Bundle {
  val addr = Input(UInt(32.W))
  val data = Output(UInt(32.W))
  val ren = Input(Bool())
}

class MemWriteBundle extends Bundle {
  val addr = Input(UInt(32.W))
  val data = Input(UInt(32.W))
  val wen = Input(Bool())
}

class MemReader extends BlackBox {
  val io = IO(new MemReadBundle)
  setInline("MemReader.v",
    """
    |import "DPI-C" function void Memread(input int addr, output int data);
    |
    |module MemReader(
    |  input  [31:0] addr,
    |  output [31:0] data,
    |  input         ren
    |);
    |  always @(*) begin
    |    if (ren) begin
    |      Memread(addr, data);
    |    end
    |  end
    |endmodule
    """.stripMargin)
}

class MemWriter extends BlackBox {
  val io = IO(new MemWriteBundle)
  setInline("MemWriter.v",
    """
    |import "DPI-C" function void Memwrite(input int addr, input int data);
    |
    |module MemWriter(
    |  input [31:0] addr,
    |  input [31:0] data,
    |  input        wen
    |);
    |  always @(*) begin
    |    if (wen) begin
    |      Memwrite(addr, data);
    |    end
    |  end
    |endmodule
    """.stripMargin)
}   