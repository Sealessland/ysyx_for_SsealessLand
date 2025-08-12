package xininn.utils
import chisel3._
import chisel3.util._
// pcmonitor.scala

import chisel3._
import chisel3.util._

/**
 * 一个Chisel黑盒，用于通过DPI-C调用一个PC监视器函数。
 *
 * - 输入: `executing_pc` (来自CPU的当前PC)
 * - 输出: `dnpc` (从C函数返回的下一个PC，仅作示例)
 * - 输入: `clock` (时钟信号)
 * - 输入: `reset` (复位信号)
 */
class pcmonitor extends BlackBox with HasBlackBoxInline {
  val io = IO(new Bundle {
    val executing_pc = Input(UInt(32.W))
    val dnpc         = Output(UInt(32.W)) // 从C函数返回的值
    val clock        = Input(Clock())
    val reset        = Input(Reset())
  })

  setInline("pcmonitor.v",
    s"""
       |// SystemVerilog wrapper for DPI-C PC monitor
       |module pcmonitor (
       |    input  [31:0] executing_pc,
       |    output [31:0] dnpc,
       |    input         clock,
       |    input         reset
       |);
       |
       |  // 导入C函数。
       |  // 'pc_monitor_func' 是我们将在C/C++中定义的函数名。
       |  // 它接收一个32位整数(pc)，并返回一个32位整数(next_pc)。
       |  import "DPI-C" function int pc_monitor_func(input int pc);


       |  always @(posedge clock) begin
       |    if (!reset) begin // 假设低电平复位
       |      dnpc <= pc_monitor_func(executing_pc);
       |    end else begin
       |      dnpc <= 32'h0; // 复位时的默认值
       |    end
       |  end
       |  */
       |
       |endmodule
       |""".stripMargin)
}

// 可选的辅助对象，方便实例化
object PcMonitor {
  def apply(pc: UInt, dnpc: UInt,clock: Clock): Unit = {
    val monitor = Module(new pcmonitor)
    monitor.io.executing_pc := pc
    monitor.io.clock := clock
    monitor.io.dnpc  := dnpc

  }
}