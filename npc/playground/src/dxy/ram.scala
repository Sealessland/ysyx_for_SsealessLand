package dxy
import chisel3._
import chisel3.util._

class RomIO extends Bundle {
  val en    = Output(Bool())
  val addr  = Output(UInt(64.W))
  val rdata = Input(UInt(64.W))
}

class RamIO extends RomIO {
  val wdata = Output(UInt(64.W))
  val wmask = Output(UInt(64.W))
  val wen   = Output(Bool())
}

class ram_2r1w extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock      = Input(Clock())
    val imem_en    = Input(Bool())
    val imem_addr  = Input(UInt(64.W))
    val imem_data  = Output(UInt(32.W))
    val dmem_en    = Input(Bool())
    val dmem_addr  = Input(UInt(64.W))
    val dmem_rdata = Output(UInt(64.W))
    val dmem_wdata = Input(UInt(64.W))
    val dmem_wmask = Input(UInt(64.W))
    val dmem_wen   = Input(Bool())
  })

  setInline("ram_2r1w.v",
    """
      |module ram_2r1w (
      |    input         clock,
      |
      |    input         imem_en,
      |    input  [63:0] imem_addr,
      |    output [31:0] imem_data,
      |
      |    input         dmem_en,
      |    input  [63:0] dmem_addr,
      |    output [63:0] dmem_rdata,
      |    input  [63:0] dmem_wdata,
      |    input  [63:0] dmem_wmask,
      |    input         dmem_wen
      |  );
      |
      |  import "DPI-C" function void mem_read(input int addr, input int len, output int data);
      |  import "DPI-C" function void mem_write(input int addr, input int len, input int data);
      |
      |  // 临时变量用于 DPI-C 调用结果
      |  reg [31:0] mem_rdata;
      |  reg [63:0] mem_rdata_64;
      |
      |  // 指令内存读取 (imem)
      |  wire [31:0] addr_offset_imem = imem_addr - 32'h80000000;
      |
      |  always @(*) begin
      |    if (imem_en) begin
      |      mem_read(addr_offset_imem, 4, mem_rdata); // 指令读取使用4字节长度
      |    end
      |  end
      |
      |  assign imem_data = mem_rdata;
      |
      |  // 数据内存读取 (dmem)
      |  wire [31:0] addr_offset_dmem = dmem_addr - 32'h80000000;
      |  reg [31:0] lower_data, upper_data;
      |
      |  // 读取操作 (两次32位读取组合成64位)
      |  always @(*) begin
      |    if (dmem_en) begin
      |      mem_read(addr_offset_dmem, 4, lower_data);
      |      mem_read(addr_offset_dmem + 4, 4, upper_data);
      |      mem_rdata_64 = {upper_data, lower_data};
      |    end
      |  end
      |
      |  assign dmem_rdata = mem_rdata_64;
      |
      |  // 写入操作
      |  always @(posedge clock) begin
      |    if (dmem_en && dmem_wen) begin
      |      // 根据写掩码处理8字节写入 (分为低32位和高32位分别写入)
      |      if (dmem_wmask[31:0] != 0)
      |        mem_write(addr_offset_dmem, 4, dmem_wdata[31:0]);
      |      if (dmem_wmask[63:32] != 0)
      |        mem_write(addr_offset_dmem + 4, 4, dmem_wdata[63:32]);
      |    end
      |  end
      |
      |endmodule
  """.stripMargin)
}

class Ram2r1w extends Module {
  val io = IO(new Bundle {
    val imem = Flipped(new RomIO)
    val dmem = Flipped(new RamIO)
  })
  val mem = Module(new ram_2r1w)
  mem.io.clock      := clock
  mem.io.imem_en    := io.imem.en
  mem.io.imem_addr  := io.imem.addr
  io.imem.rdata     := mem.io.imem_data
  mem.io.dmem_en    := io.dmem.en
  mem.io.dmem_addr  := io.dmem.addr
  io.dmem.rdata     := mem.io.dmem_rdata
  mem.io.dmem_wdata := io.dmem.wdata
  mem.io.dmem_wmask := io.dmem.wmask
  mem.io.dmem_wen   := io.dmem.wen
}
