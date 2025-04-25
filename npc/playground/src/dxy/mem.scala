package dxy

import chisel3._
import chisel3.util._
import chisel3.experimental._

class DPIWriteMemory extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock      = Input(Clock())
    val reset      = Input(Bool())
    val mem_wen    = Input(Bool())
    val mem_addr   = Input(UInt(32.W))
    val mem_wdata  = Input(UInt(32.W))
    val data_len   = Input(UInt(2.W)) // 数据长度: 0=byte, 1=half-word, 2=word
  })

  setInline("DPIWriteMemory.sv",
    s"""
       |module DPIWriteMemory(
       |  input  logic        clock,
       |  input  logic        reset,
       |  input  logic        mem_wen,
       |  input  logic [31:0] mem_addr,
       |  input  logic [31:0] mem_wdata,
       |  input  logic [1:0]  data_len
       |);
       |
       |  // DPI-C import declaration
       |  import "DPI-C" function void mem_write(
       |    input int addr,
       |    input int data,
       |    input int size
       |  );
       |
       |  // Memory write operation - optimized to reduce logic depth
       |  logic do_write;
       |  assign do_write = !reset && mem_wen;
       |
       |  always_ff @(posedge clock) begin
       |    if (do_write) begin
       |      mem_write(mem_addr, mem_wdata, data_len);
       |    end
       |  end
       |endmodule
    """.stripMargin)
}



import chisel3._
import chisel3.experimental._

class DPIReadMemory extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock      = Input(Clock())
    val reset      = Input(Bool())
    val mem_ren    = Input(Bool())
    val mem_addr   = Input(UInt(32.W))
    val data_len   = Input(UInt(2.W)) // 数据长度: 0=byte, 1=half-word, 2=word
    val mem_rdata  = Output(UInt(32.W))
  })

  setInline("DPIReadMemory.sv",
    s"""
       |module DPIReadMemory(
       |  input  logic        clock,
       |  input  logic        reset,
       |  input  logic        mem_ren,
       |  input  logic [31:0] mem_addr,
       |  input  logic [1:0]  data_len,
       |  output logic [31:0] mem_rdata
       |);
       |
       |  // DPI-C import declaration
       |  import "DPI-C" function int mem_read(
       |    input int addr,
       |    input int size
       |  );
       |
       |  // Internal register for read data
       |  logic [31:0] read_data;
       |  assign mem_rdata = read_data;
       |
       |  // Optimized memory read operation with size parameter
       |  logic do_read;
       |  assign do_read = mem_ren && !reset;
       |
       |  always_ff @(posedge clock) begin
       |    if (reset) begin
       |      read_data <= 32'h0;
       |    end else if (do_read) begin
       |      read_data <= mem_read(mem_addr, data_len);
       |    end
       |  end
       |endmodule
    """.stripMargin)
}

// 统一的内存访问模块，结合读写功能
class MemoryAccess extends Module {
  val io = IO(new Bundle {
    val mem_wen    = Input(Bool())
    val mem_ren    = Input(Bool())
    val mem_addr   = Input(UInt(32.W))
    val mem_wdata  = Input(UInt(32.W))
    val data_len   = Input(UInt(2.W)) // 数据长度: 0=byte, 1=half-word, 2=word
    val mem_rdata  = Output(UInt(32.W))
  })

  // 实例化读写内存模块
  val dpiRead = Module(new DPIReadMemory())
  val dpiWrite = Module(new DPIWriteMemory())

  // 连接读内存模块
  dpiRead.io.clock := clock
  dpiRead.io.reset := reset
  dpiRead.io.mem_ren := io.mem_ren
  dpiRead.io.mem_addr := io.mem_addr
  dpiRead.io.data_len := io.data_len

  // 连接写内存模块
  dpiWrite.io.clock := clock
  dpiWrite.io.reset := reset
  dpiWrite.io.mem_wen := io.mem_wen
  dpiWrite.io.mem_addr := io.mem_addr
  dpiWrite.io.mem_wdata := io.mem_wdata
  dpiWrite.io.data_len := io.data_len

  // 输出读取的数据
  io.mem_rdata := dpiRead.io.mem_rdata
}
