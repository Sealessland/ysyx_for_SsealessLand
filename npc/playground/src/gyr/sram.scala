// playground/src/gyr/sram.scala

package gyr

import chisel3._
import chisel3.util._

// ===================================================================
// 接口定义: Bundle成员的方向被显式声明
// ===================================================================

/**
 * SRAM 请求 Bundle
 * 定义为模块的输出信号，将被 Flipped 转换为输入。
 */
class SRAMReq extends Bundle {
  val addr  = Output(UInt(32.W))
  val wdata = Output(UInt(32.W))
  val wen   = Output(Bool())      // true: 写操作, false: 读操作
  val len   = Output(UInt(3.W))    // 使用在 DPI-C.scala 中定义的 MemLen 枚举
}

/**
 * SRAM 响应 Bundle
 * 定义为模块的输入信号，将保持为输入。
 */
class SRAMResp extends Bundle {
  val rdata = Input(UInt(32.W))
}

/**
 * SRAM 模块的顶层接口
 * 使用标准的 Decoupled (ready/valid) 握手协议
 */
class SRAMport extends Bundle {
  // Flipped 将 Decoupled[SRAMReq] 的方向反转。
  // req.valid: Input, req.ready: Output, req.bits: Input
  val req  = Flipped(Decoupled(new SRAMReq))

  // Decoupled[SRAMResp] 保持其原始方向。
  // resp.valid: Output, resp.ready: Input, resp.bits: Output
  val resp = Decoupled(new SRAMResp)
}


