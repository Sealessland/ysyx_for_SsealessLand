package dxy

import chisel3._
import chisel3.util._
import chisel3.experimental._

// BlackBox wrapper for memory access using DPI-C
class DPIMemory extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock      = Input(Clock())
    val reset      = Input(Bool())
    val mem_wen    = Input(Bool())
    val mem_ren    = Input(Bool())
    val mem_addr   = Input(UInt(32.W))
    val mem_wdata  = Input(UInt(32.W))
    val mem_rdata  = Output(UInt(32.W))
  })

  setInline("DPIMemory.sv",
    s"""
       |module DPIMemory(
       |  input  logic        clock,
       |  input  logic        reset,
       |  input  logic        mem_wen,
       |  input  logic        mem_ren,
       |  input  logic [31:0] mem_addr,
       |  input  logic [31:0] mem_wdata,
       |  output logic [31:0] mem_rdata
       |);
       |
       |  // DPI-C import declarations
       |  import "DPI-C" function void mem_write(
       |    input int addr,
       |    input int data
       |  );
       |
       |  import "DPI-C" function int mem_read(
       |    input int addr
       |  );
       |
       |  // Internal register for read data
       |  logic [31:0] read_data;
       |  assign mem_rdata = read_data;
       |
       |  // Memory operations
       |  always_ff @(posedge clock) begin
       |    if (reset) begin
       |      read_data <= 32'h0;
       |    end else begin
       |      if (mem_wen) begin
       |        mem_write(mem_addr, mem_wdata);
       |      end
       |
       |      if (mem_ren) begin
       |        read_data <= mem_read(mem_addr);
       |      end
       |    end
       |  end
       |endmodule
    """.stripMargin)
}

// Memory interface module
class MemoryAccess extends Module {
  val io = IO(new Bundle {
    // Memory interface signals
    val mem_wen    = Input(Bool())
    val mem_ren    = Input(Bool())
    val mem_addr   = Input(UInt(32.W))
    val mem_wdata  = Input(UInt(32.W))
    val mem_rdata  = Output(UInt(32.W))
  })

  // Instantiate the memory black box
  val dpiMem = Module(new DPIMemory())

  // Connect memory interface
  dpiMem.io.clock     := clock
  dpiMem.io.reset     := reset
  dpiMem.io.mem_wen   := io.mem_wen
  dpiMem.io.mem_ren   := io.mem_ren
  dpiMem.io.mem_addr  := io.mem_addr
  dpiMem.io.mem_wdata := io.mem_wdata
  io.mem_rdata        := dpiMem.io.mem_rdata
}