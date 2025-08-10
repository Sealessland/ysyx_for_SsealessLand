package xininn

import chisel3._
import chisel3.util.HasBlackBoxInline

/**
 * 一个 BlackBox（黑盒），用于调用 DPI-C 函数 `ebreak_handler()` 来停止仿真。
 * 这通常用于测试平台，以发出成功信号或触发特定的调试事件。
 * 仿真器（如 Verilator, VCS）必须链接一个实现了该函数的 C 语言文件。
 */


/**
 * 一个辅助对象，用于方便地实例化和使用 ebreak 模块。
 * 这种模式在 Chisel 中非常常见，用于创建简单、可复用的硬件工具。
 */
object breakhandler {
  /**
   * 当给定条件为真时，停止仿真。
   *
   * @param cond 触发 ebreak 的条件。仿真将在该条件为真的下一个时钟周期停止。
   */
  def apply(cond: Bool, clock: Clock): Unit = {
    // 这个 'apply' 方法被设计为在 Chisel Module 内部调用。
    // 通过这种方式，它能获取到调用者模块的隐式时钟。
    val ebreak_inst = Module(new ebreak)

    // 这里的 'clock' 是调用 breakhandler() 的那个 Module 的隐式时钟。
    ebreak_inst.io.clock := clock

    // ebreak 的使能信号连接到传递给本函数的条件。
    ebreak_inst.io.en := cond
  }
}

