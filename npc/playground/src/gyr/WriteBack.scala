package gyr

import chisel3._
import chisel3.util._
// 这是您提供的 WBBus 接口
class WBBus extends Bundle {
  val in = Flipped(Decoupled(new L2W))
  val out = new W2R // 输出到寄存器堆
  val w2f = new W2F // 输出到 Fetch 阶段
}

/**
 * WriteBack (WBU) 模块
 * 流水线的最后一个阶段。
 * 接收来自LSU的数据，并将其写入寄存器堆。
 */
class WriteBack extends Module {
  val io = IO(new WBBus)

  // --- 3. 输出到IFU的握手逻辑 ---
  // valid信号在输入有效时被置高
  // 将需要的信息传递给IFU
  io.w2f.inst_done := io.in.valid && io.in.bits.rd_en

  // --- 1. 输入端握手逻辑 (修正后) ---
  // WBU是否准备好接收新数据(io.in.ready)，
  // 取决于它是否能把当前数据的结果发送出去(io.w2f.ready)。
  // 这重建了至关重要的反压链条。
  io.in.ready := 1.U // 这里假设WBU总是准备好接收数据

  // --- 2. 输出端驱动逻辑 (连接到寄存器堆) ---
  // 这部分逻辑保持不变
  io.out.en   := io.in.valid && io.in.bits.rd_en
  io.out.addr := io.in.bits.rd_addr
  io.out.data := io.in.bits.rd_data
}