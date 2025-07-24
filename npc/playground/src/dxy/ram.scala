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
      |  import "DPI-C" function void inst_mem_read(input int addr, input int len, output int data);
      |  import "DPI-C" function void data_mem_read(input int addr, input int len, output int data);
      |  import "DPI-C" function void data_mem_write(input int addr, input int len, input int data);
      |
      |  // 临时变量
      |  reg [31:0] imem_rdata_reg;
      |  reg [63:0] dmem_rdata_reg;
      |  
      |  // 指令内存读取 - 4字节对齐
      |  wire [31:0] imem_addr_aligned = imem_addr[31:0] & 32'hfffffffc;
      |  
      |  always @(*) begin
      |    if (imem_en) begin
      |      inst_mem_read(imem_addr_aligned, 4, imem_rdata_reg);
      |    end else begin
      |      imem_rdata_reg = 32'h0;
      |    end
      |  end
      |  
      |  assign imem_data = imem_rdata_reg;
      |  
      |  // 数据内存读取 - 按原始地址读取，支持任意对齐
      |  wire [31:0] dmem_addr_base = dmem_addr[31:0];
      |  reg [31:0] dmem_data_low, dmem_data_high;
      |  
      |  always @(*) begin
      |    if (dmem_en && !dmem_wen) begin
      |      // 直接从指定地址读取8字节
      |      data_mem_read(dmem_addr_base, 4, dmem_data_low);
      |      data_mem_read(dmem_addr_base + 4, 4, dmem_data_high);
      |      dmem_rdata_reg = {dmem_data_high, dmem_data_low};
      |    end else begin
      |      dmem_rdata_reg = 64'h0;
      |    end
      |  end
      |  
      |  assign dmem_rdata = dmem_rdata_reg;
      |  
      |  // 数据内存写入 - 严格按照地址和掩码写入
      |  always @(posedge clock) begin
      |    if (dmem_en && dmem_wen) begin
      |      // 分析写掩码，决定写入哪些字节
      |      if (dmem_wmask[7:0] != 8'h0)     // 字节0
      |        data_mem_write(dmem_addr_base, 1, dmem_wdata[7:0]);
      |      if (dmem_wmask[15:8] != 8'h0)    // 字节1
      |        data_mem_write(dmem_addr_base + 1, 1, dmem_wdata[15:8]);
      |      if (dmem_wmask[23:16] != 8'h0)   // 字节2
      |        data_mem_write(dmem_addr_base + 2, 1, dmem_wdata[23:16]);
      |      if (dmem_wmask[31:24] != 8'h0)   // 字节3
      |        data_mem_write(dmem_addr_base + 3, 1, dmem_wdata[31:24]);
      |      if (dmem_wmask[39:32] != 8'h0)   // 字节4
      |        data_mem_write(dmem_addr_base + 4, 1, dmem_wdata[39:32]);
      |      if (dmem_wmask[47:40] != 8'h0)   // 字节5
      |        data_mem_write(dmem_addr_base + 5, 1, dmem_wdata[47:40]);
      |      if (dmem_wmask[55:48] != 8'h0)   // 字节6
      |        data_mem_write(dmem_addr_base + 6, 1, dmem_wdata[55:48]);
      |      if (dmem_wmask[63:56] != 8'h0)   // 字节7
      |        data_mem_write(dmem_addr_base + 7, 1, dmem_wdata[63:56]);
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