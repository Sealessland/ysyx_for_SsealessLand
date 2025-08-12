package xininn
import chisel3._
import chisel3.util.HasBlackBoxInline



class InstCnt extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    val en    = Input(Bool()) // 使用 Bool 更符合 Chisel 风格
    val inst  = Input(UInt(32.W))
  })

  // ----------------------------------------------------
  // 内联的 SystemVerilog 代码 (已修正)
  // ----------------------------------------------------
  setInline("InstCnt.v",
    s"""
       |// A SystemVerilog module to call a DPI-C function on every instruction commit.
       |module InstCnt(
       |    input clock,
       |    input en,
       |    input [31:0] inst
       |);
       |
       |
       |
       |  // 2. 修正 DPI 导入：方向为 'input'，因为数据从 SV 流向 C
       |  import "DPI-C" function void inst_counter(input int inst);
       |  // 3. 在时钟边沿触发的单个 always 块
       |  always @(posedge clock) begin
       |    if (en) begin
       |      inst_counter(inst);
       |    end
       |  end
       |
       |endmodule
    """.stripMargin)
}


object InstCounter {
  /**
   * 在 Chisel 设计中插入一个指令计数器。
   * 当 'enable' 信号为真时，在时钟上升沿将 'pc' 和 'inst' 传递给 DPI-C 函数。
   *
   * @param enable 一个 Bool 信号，作为调用 DPI-C 的总开关。
   * @param pc     一个 32 位的 UInt，代表程序计数器。
   * @param inst   一个 32 位的 UInt，代表指令。
   * @param clock  一个时钟信号 (可以隐式提供)。
   */
  def apply(enable: Bool,  inst: UInt,clock:Clock): Unit = {
    // 实例化黑盒
    val counter_inst = Module(new InstCnt())

    // 连接所有端口
    counter_inst.io.clock := clock
    counter_inst.io.en    := enable
    counter_inst.io.inst  := inst
  }
}