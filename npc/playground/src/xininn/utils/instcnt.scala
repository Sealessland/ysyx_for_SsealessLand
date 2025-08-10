package xininn
import chisel3._
import chisel3.util.HasBlackBoxInline


/**
 * 一个 BlackBox（黑盒），用于在特定条件下调用 DPI-C 函数 `inst_counter()`。
 * 这个函数通常在外部的 C/C++ 代码中实现，用于在仿真时进行指令计数或其他调试操作。
 *
 * @param WIDTH 端口en的位宽，通常为1，但可以扩展以支持一次计数多个指令。
 */
class instcnt(val WIDTH: Int = 1) extends BlackBox(Map("WIDTH" -> WIDTH)) with HasBlackBoxInline {
  val io = IO(new Bundle {
    val clock = Input(Clock())
    // 当 en 信号为高时，DPI-C 函数将被调用
    val en = Input(UInt(WIDTH.W))
  })

  // 内联 Verilog 代码
  setInline("instcnt.v",
    s"""
       |module instcnt #(
       |    parameter WIDTH = 1
       |) (
       |    input clock,
       |    input [WIDTH-1:0] en
       |);
       |
       |  import "DPI-C" function void inst_counter(input int count);
       |
       |  always @(posedge clock) begin
       |    if (en > 0) begin
       |      inst_counter(en);
       |    end
       |  end
       |
       |endmodule
    """.stripMargin)
}


// ... (instcnt class definition from above) ...

/**
 * 一个辅助对象，用于方便地实例化和使用 instcnt 模块。
 */
object InstCounter {
  /**
   * 当给定条件为真时，调用 inst_counter DPI-C 函数。
   *
   * @param enable 一个Bool信号，当它为真时，计数器函数被调用。
   */
  def apply(enable: Bool ,clock: Clock): Unit = {
    // 实例化黑盒
    val counter_inst = Module(new instcnt(1)) // 位宽为1，因为输入是Bool

    // 连接时钟（使用调用者模块的隐式时钟）
    counter_inst.io.clock := clock

    // 连接使能信号
    counter_inst.io.en := enable.asUInt
  }

  /**
   * (重载) 当给定条件为真时，调用 inst_counter DPI-C 函数，并传递一个指定的计数值。
   *
   * @param enable 一个Bool信号，作为总开关。
   * @param count  一个UInt信号，当enable为真时，其值被传递给DPI-C函数。
   */
  def apply(enable: Bool, count: UInt,clock: Clock): Unit = {
    require(count.getWidth > 0, "Count width must be greater than 0")
    val counter_inst = Module(new instcnt(count.getWidth))

    counter_inst.io.clock := clock
    // 连接使能信号：只有当 enable 为真时，才传递 count 的值，否则传递 0
    counter_inst.io.en := Mux(enable, count, 0.U)
  }
}