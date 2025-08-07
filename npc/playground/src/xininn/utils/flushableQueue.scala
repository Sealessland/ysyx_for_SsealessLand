package xininn.utils
import chisel3._
import chisel3._
import chisel3.util._

// 定义包含了flush端口的IO Bundle
class FlushableQueueIO[T <: Data](gen: T) extends Bundle {
  val enq   = Flipped(Decoupled(gen))
  val deq   = Decoupled(gen)
  val flush = Input(Bool())
  val count = Output(UInt())
}

// 模块实现
class FlushableQueue[T <: Data](gen: T, entries: Int, pipe: Boolean = false, flow: Boolean = false) extends Module {
  val io = IO(new FlushableQueueIO(gen))

  // 内部实例化一个标准的Queue
  // 将pipe和flow参数透传给内部Queue，使其功能更完整
  val queue = Module(new Queue(gen, entries, pipe, flow))

  // 使用一个寄存器来管理flushing状态，使其能处理多周期排空
  val is_flushing = RegInit(false.B)

  // Flush的触发与持续逻辑
  when(io.flush) {
    is_flushing := true.B
  } .elsewhen(is_flushing && !queue.io.deq.valid) { // 当队列被清空时，停止flush
    is_flushing := false.B
  }

  // 入队端口直接连接
  queue.io.enq <> io.enq

  // 核心控制逻辑：根据is_flushing状态决定如何连接出队端口
  when(is_flushing) {
    // 正在清空：强制内部队列出队，但阻止数据流向外部消费者
    queue.io.deq.ready := true.B
    io.deq.valid       := false.B
    io.deq.bits        := DontCare
  } .otherwise {
    // 正常工作：连接外部消费者
    io.deq <> queue.io.deq
  }

  // count信号直接透传
  io.count := queue.io.count
}