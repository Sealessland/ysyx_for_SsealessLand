package gyr
import chisel3._
import chisel3.util._

// =============================================================================
// 只读内存DPI-C (ReadMemDPIC) - 已修正
// =============================================================================
class ReadMemDPIC extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    // 修正: len 信号改为4位宽，以支持1/2/4/8字节的One-Hot编码
    val addr  = Input(UInt(32.W))
    val len   = Input(UInt(4.W))
    // 修正: rdata 输出改为64位宽，以支持双字(DWORD)读取
    val rdata = Output(UInt(64.W))
  })

  setInline("ReadMemDPIC.v",
    s"""
       |// Verilog for ReadMemDPIC - Corrected
       |module ReadMemDPIC (
       |    input  [31:0] addr,
       |    // 修正: len 信号改为4位宽
       |    input  [3:0]  len,
       |    // 修正: rdata 输出改为64位宽
       |    output [63:0] rdata
       |);
       |
       |  // 导入DPI-C函数，用于从模拟环境中读取32位数据
       |  import "DPI-C" function int mem_read(input int addr);
       |
       |  // 使用 reg 类型以便在 always 块中赋值
       |  reg [63:0] rdata_reg;
       |
       |  // 这是一个组合逻辑块，根据地址和长度信号立即计算输出
       |  always @(*) begin
       |    // 默认输出为0
       |    rdata_reg = 64'h0;
       |    // 修正: 使用 One-Hot 编码来判断读写宽度
       |    // len[0] -> Byte, len[1] -> Half, len[2] -> Word, len[3] -> DWord
       |    if (len[0]) begin // 1-Byte Read
       |      // 读取地址所在的一个字，然后根据地址低两位选择对应的字节
       |      // 注：为了简化，这里没有实现符号扩展，总是进行零扩展
       |      case (addr[1:0])
       |        2'b00: rdata_reg = {56'h0, mem_read(addr)[7:0]};
       |        2'b01: rdata_reg = {56'h0, mem_read(addr-1)[15:8]};
       |        2'b10: rdata_reg = {56'h0, mem_read(addr-2)[23:16]};
       |        2'b11: rdata_reg = {56'h0, mem_read(addr-3)[31:24]};
       |      endcase
       |    end else if (len[1]) begin // 2-Byte Read (Half-word)
       |      case (addr[1])
       |        1'b0: rdata_reg = {48'h0, mem_read(addr)[15:0]};
       |        1'b1: rdata_reg = {48'h0, mem_read(addr-2)[31:16]};
       |      endcase
       |    end else if (len[2]) begin // 4-Byte Read (Word)
       |      rdata_reg = {32'h0, mem_read(addr)};
       |    end else if (len[3]) begin // 8-Byte Read (Double-word)
       |      // 修正: 正确地读取两个相邻的字并拼接成一个64位双字
       |      rdata_reg = {mem_read(addr + 4), mem_read(addr)};
       |    end
       |  end
       |
       |  // 将计算结果赋给输出端口
       |  assign rdata = rdata_reg;
       |
       |endmodule
    """.stripMargin)
}

// =============================================================================
// 只写内存DPI-C (WriteMemDPIC) - 已修正
// =============================================================================
class WriteMemDPIC extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    // 修正: len 信号改为4位宽
    val addr  = Input(UInt(32.W))
    val len   = Input(UInt(4.W))
    val wdata = Input(UInt(64.W))
    val wen   = Input(Bool())
  })

  setInline("WriteMemDPIC.v",
    """
      |// Verilog for WriteMemDPIC - Corrected
      |module WriteMemDPIC (
      |    input         clock,
      |    // 修正: len 信号改为4位宽
      |    input  [31:0] addr,
      |    input  [3:0]  len,
      |    input  [63:0] wdata,
      |    input         wen
      |);
      |
      |  // 修正: 必须同时导入读和写的DPI-C函数，以实现“读-修改-写”
      |  import "DPI-C" function void mem_write(input int addr, input int data);
      |  import "DPI-C" function int  mem_read(input int addr);
      |
      |  // 这是一个时序逻辑块，只在时钟上升沿且写使能有效时执行
      |  always @(posedge clock) begin
      |    if (wen) begin
      |      // 修正: 使用 One-Hot 编码判断
      |      if (len[0]) begin // 1-Byte Write
      |        // 实现“读-修改-写”：先读出整个字，再修改对应的字节，最后写回整个字
      |        // 修正: 增加了对地址偏移的处理
      |        reg [31:0] temp_data = mem_read(addr & ~3); // 读取对齐的字
      |        case (addr[1:0])
      |          2'b00: temp_data[7:0]   = wdata[7:0];
      |          2'b01: temp_data[15:8]  = wdata[7:0];
      |          2'b10: temp_data[23:16] = wdata[7:0];
      |          2'b11: temp_data[31:24] = wdata[7:0];
      |        endcase
      |        mem_write(addr & ~3, temp_data);
      |      end else if (len[1]) begin // 2-Byte Write
      |        reg [31:0] temp_data = mem_read(addr & ~3); // 读取对齐的字
      |        case (addr[1])
      |          1'b0: temp_data[15:0]  = wdata[15:0];
      |          1'b1: temp_data[31:16] = wdata[15:0];
      |        endcase
      |        mem_write(addr & ~3, temp_data);
      |      end else if (len[2]) begin // 4-Byte Write (Word)
      |        mem_write(addr, wdata[31:0]);
      |      end else if (len[3]) begin // 8-Byte Write (Double-word)
      |        mem_write(addr, wdata[31:0]);
      |        mem_write(addr + 4, wdata[63:32]);
      |      end
      |    end
      |  end
      |
      |endmodule
    """.stripMargin)
}

// =============================================================================
// 读写分离的内存包装器 (SeparateMemWrapper) - 已修正
// =============================================================================
class SeparateMemWrapper extends Module {
  val io = IO(new Bundle {
    val read = new Bundle {
      // 修正: len 信号改为4位宽
      val addr  = Input(UInt(32.W))
      val len   = Input(UInt(4.W))
      val rdata = Output(UInt(64.W))
    }
    val write = new Bundle {
      // 修正: len 信号改为4位宽
      val addr  = Input(UInt(32.W))
      val len   = Input(UInt(4.W))
      val wdata = Input(UInt(64.W))
      val wen   = Input(Bool())
    }
  })

  // 实例化读和写的黑盒模块
  val readMem = Module(new ReadMemDPIC)
  val writeMem = Module(new WriteMemDPIC)

  // 连接读接口
  readMem.io.addr := io.read.addr
  readMem.io.len  := io.read.len
  // 修正: 现在 rdata 宽度匹配 (64位)
  io.read.rdata   := readMem.io.rdata

  // 连接写接口
  writeMem.io.clock := clock
  writeMem.io.addr  := io.write.addr
  writeMem.io.len   := io.write.len
  writeMem.io.wdata := io.write.wdata
  writeMem.io.wen   := io.write.wen
}
