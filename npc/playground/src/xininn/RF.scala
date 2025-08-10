package xininn
import chisel3._
import chisel3.util.experimental._
import chisel3.util._
import jdk.internal.org.jline.keymap.KeyMap.display
class W2R extends Bundle {
  val addr = Output(UInt(5.W))
  val data = Output(UInt(32.W))
  val en   = Output(Bool())
}

class D2R extends Bundle{
  val rs1_addr = Output(UInt(5.W))
//  val rs1_en   = Output(Bool())
  val rs2_addr = Output(UInt(5.W))
//  val rs2_en   = Output(Bool())
}

class R2E extends Bundle{
  val rs1_data = Output(UInt(32.W))
  val rs2_data = Output(UInt(32.W))
}
/**
 * RegFile 的顶层 IO Bundle
 */
class rfBundle extends Bundle {
  // d2r: 从 Decode 阶段来的读请求
  // D2R 定义在 IDU.scala 中，这里 Flipped 将其方向转为输入
  val d2r = Flipped(new D2R)
  // w2r: 从 WriteBack 阶段来的写请求
  val w2r = Flipped(new W2R)
  // 读出的数据
  val r2e = new R2E
}

class RegFile extends Module {
  val io = IO(new rfBundle)

  // 32个64位宽的寄存器
  val rf = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))
  rf(0) := 0.U
  // 写逻辑：当写使能且目标地址不为x0时，写入数据
  when(io.w2r.en && (io.w2r.addr =/= 0.U)) {
    rf(io.w2r.addr) := io.w2r.data
  }
  io.r2e.rs1_data := Mux((io.d2r.rs1_addr =/= 0.U), rf(io.d2r.rs1_addr), 0.U)


  io.r2e.rs2_data := Mux((io.d2r.rs2_addr =/= 0.U), rf(io.d2r.rs2_addr), 0.U)


}

import chisel3._
import chisel3.util._

// ... Bundles (W2R, D2R, R2E, rfBundle) 保持不变 ...

class get_state extends HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val en    = Input(Bool())
    val rf    = Input(Vec(32, UInt(32.W)))
  })

  setInline("get_state.sv",
    """
       |module get_state(
       |  input         clock,
       |  input         en,
       |  input  [31:0] rf [0:31]
       |);
       |
       |      import "DPI-C" function int passing_state(input int state, input int i);
       |
       |  // 在时钟上升沿触发
       |  always @(posedge clock) begin
       |    if (en) begin
       |      // 声明 DPI-C 导入函数，用于将状态传递给 C 代码
       |
       |      // 声明一个整数用于循环
       |      integer i;
       |
       |      // 打印头部信息

       |      // 遍历所有寄存器
       |      for (i = 0; i < 32; i = i + 1) begin
       |        // **1. 调用您的 DPI-C 函数，将寄存器值和索引传递出去**
       |        passing_state(rf[i], i);
       |
       |        // **2. 同时保留 Verilog 内的 $display，用于直接在仿真日志中查看**
       |        $$display("rf[%2d] = 0x%h", i, rf[i]);
       |      end
       |    end
       |  end
       |
       |endmodule
       |""".stripMargin)}

/**
 * get_state 类的伴生对象，提供函数化调用接口
 */
object get_state {
  def apply(clock: Clock, en: Bool, rf: Vec[UInt]): Unit = {
    val dumper = Module(new get_state)
    dumper.io.clock := clock
    dumper.io.en    := en
    dumper.io.rf    := rf
  }
}

