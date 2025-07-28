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


// ===================================================================
// 模块实现 (逻辑保持不变)
// ===================================================================

class SRAM extends Module {
  val io = IO(new SRAMport)

  // **步骤 1: 正确实例化 DPI-C 模块**
  // 重点：必须使用 `Module(...)` 来例化子模块。
  val readDPI = Module(new ReadMemDPIC)
  val writeDPI = Module(new WriteMemDPIC)

  // **步骤 2: 连接 DPI-C 模块的输入**

  // 写模块的输入直接来自请求接口
  writeDPI.io.clock := clock
  writeDPI.io.addr  := io.req.bits.addr
  writeDPI.io.len   := io.req.bits.len
  // 注意：SRAMReq的wdata是32位，但DPI-C的wdata是64位。
  // 这里假设DPI-C模块会正确处理低32位。如果需要64位写，SRAMReq也需要是64位。
  writeDPI.io.wdata := io.req.bits.wdata
  // 只有当请求有效(valid)且是写操作(wen)时，才触发DPI写
  writeDPI.io.wen   := io.req.fire && io.req.bits.wen

  // 读模块的输入也直接来自请求接口
  // ReadMemDPIC 是组合逻辑，会立即根据addr和len输出rdata
  readDPI.io.addr := io.req.bits.addr
  readDPI.io.len  := io.req.bits.len

  // **步骤 3: 实现握手和一周期读延迟逻辑**

  // 这个寄存器用于控制响应的valid信号，从而实现一周期读延迟。
  // 当接收到读请求时，它在下一个周期变为true。
  val resp_valid_reg = RegInit(false.B)

  // 默认情况下，响应无效，直到 `resp_valid_reg` 变为 true
  io.resp.valid := resp_valid_reg

  // 为了实现一周期延迟，我们需要寄存器来锁存读出的数据。
  val rdata_reg = RegEnable(readDPI.io.rdata, io.req.fire && !io.req.bits.wen)
  io.resp.bits.rdata := rdata_reg

  // 核心握手逻辑：SRAM何时准备好接收新请求？
  // - 如果当前没有待处理的响应 (resp_valid_reg 为 false)，或者
  // - 当前的响应即将被下游模块接收 (io.resp.ready 为 true)。
  // 这可以防止背压（back-pressure）导致响应被覆盖。
  io.req.ready := !resp_valid_reg || io.resp.ready

  // 状态更新逻辑
  when(io.req.fire) { // 当一个新请求被接收时 (io.req.valid && io.req.ready)
    // 如果是读请求，则在下一个周期发出响应。
    // 如果是写请求，则不需要发出响应，resp_valid_reg 保持 false。
    resp_valid_reg := !io.req.bits.wen
  } .elsewhen(io.resp.fire) { // 当响应被下游接收时 (io.resp.valid && io.resp.ready)
    // 清除响应有效标志，表示SRAM现在完全空闲，可以接收新请求。
    resp_valid_reg := false.B
  }
}
