package gyr
import chisel3._
import chisel3.util._



// 只读内存DPI-C
class ReadMemDPIC extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val addr  = Input(UInt(32.W))
    val len   = Input(MemLen())
    val rdata = Output(UInt(32.W))
  })

  setInline("ReadMemDPIC.v",
    """
      |module ReadMemDPIC (
      |    input  [31:0] addr,
      |    input  [2:0]  len,
      |    output [31:0] rdata
      |);
      |
      |  import "DPI-C" function int mem_read(input int addr);
      |
      |  reg [31:0] rdata_reg;
      |  reg [31:0] read_data;
      |
      |  always @(*) begin
      |    read_data = mem_read(addr);
      |    case (len)
      |      3'd1: rdata_reg = {56'h0, read_data[7:0]};        // BYTE
      |      3'd2: rdata_reg = {48'h0, read_data[15:0]};       // HALF
      |      3'd4: rdata_reg = {32'h0, read_data[31:0]};       // WORD
      |      3'd8: begin // DWORD - 需要读取两次
      |        rdata_reg[31:0] = mem_read(addr);
      |        rdata_reg[63:32] = mem_read(addr + 4);
      |      end
      |      default: rdata_reg = 32'h0;
      |    endcase
      |  end
      |
      |  assign rdata = rdata_reg;
      |
      |endmodule
    """.stripMargin)
}

// 只写内存DPI-C
class WriteMemDPIC extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val addr  = Input(UInt(32.W))
    val len   = Input(MemLen())
    val wdata = Input(UInt(64.W))
    val wen   = Input(Bool())
  })

  setInline("WriteMemDPIC.v",
    """
      |module WriteMemDPIC (
      |    input         clock,
      |    input  [31:0] addr,
      |    input  [2:0]  len,
      |    input  [63:0] wdata,
      |    input         wen
      |);
      |
      |  import "DPI-C" function void mem_write(input int addr, input int data);
      |
      |  reg [31:0] write_data;
      |
      |  always @(posedge clock) begin
      |    if (wen) begin
      |      case (len)
      |        3'd1: begin // BYTE
      |          write_data = mem_read(addr);
      |          write_data[7:0] = wdata[7:0];
      |          mem_write(addr, write_data);
      |        end
      |        3'd2: begin // HALF
      |          write_data = mem_read(addr);
      |          write_data[15:0] = wdata[15:0];
      |          mem_write(addr, write_data);
      |        end
      |        3'd4: begin // WORD
      |          mem_write(addr, wdata[31:0]);
      |        end
      |        3'd8: begin // DWORD
      |          mem_write(addr, wdata[31:0]);
      |          mem_write(addr + 4, wdata[63:32]);
      |        end
      |      endcase
      |    end
      |  end
      |
      |endmodule
    """.stripMargin)
}

// 读写分离的内存包装器
class SeparateMemWrapper extends Module {
  val io = IO(new Bundle {
    val read = new Bundle {
      val addr  = Input(UInt(32.W))
      val len   = Input(MemLen())
      val rdata = Output(UInt(64.W))
    }
    val write = new Bundle {
      val addr  = Input(UInt(32.W))
      val len   = Input(MemLen())
      val wdata = Input(UInt(64.W))
      val wen   = Input(Bool())
    }
  })

  val readMem = Module(new ReadMemDPIC)
  val writeMem = Module(new WriteMemDPIC)

  // 读接口
  readMem.io.addr := io.read.addr
  readMem.io.len := io.read.len
  io.read.rdata := readMem.io.rdata

  // 写接口
  writeMem.io.clock := clock
  writeMem.io.addr := io.write.addr
  writeMem.io.len := io.write.len
  writeMem.io.wdata := io.write.wdata
  writeMem.io.wen := io.write.wen
}