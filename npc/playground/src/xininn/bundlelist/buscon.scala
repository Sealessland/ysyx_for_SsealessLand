package xininn
import chisel3.util._
import chisel3._


object BusConn {
  def apply[T <: Data](producer: DecoupledIO[T], consumer: DecoupledIO[T],Sign:String ="fast") = {

    consumer.valid := producer.valid
    producer.ready := consumer.ready
    if(Sign == "fast"){consumer.bits := producer.bits}
    if(Sign == "slow") {
      val queue = Module(new Queue(chiselTypeOf(producer.bits), 1))

      // 将生产者连接到队列的入口 (enq)
      queue.io.enq <> producer

      // 将消费者连接到队列的出口 (deq)
      consumer <> queue.io.deq
    }

    //consumer.bits := RegEnable(producer.bits, consumer.fire)
  }
}
object LSM {
  def apply[T_IN <: Data, T_OUT <: Data](
                                          upstream: DecoupledIO[T_IN],
                                          downstream: DecoupledIO[T_OUT],
                                          busyLogic: T_IN => (T_OUT, Bool)
                                        ): Unit = {
    val s_Idle :: s_Busy :: s_Done :: Nil = Enum(3)
    val state = RegInit(s_Idle)

    val in_reg = Reg(chiselTypeOf(upstream.bits))
    val out_reg = Reg(chiselTypeOf(downstream.bits))

    // 对锁存后的稳定输入 in_reg 进行处理
    val (busy_res, busy_done) = busyLogic(in_reg)

    // 默认信号赋值
    upstream.ready := false.B
    downstream.valid := false.B
    downstream.bits := out_reg

    switch(state) {
      is(s_Idle) {
        // 空闲状态：准备好接收上游数据
        upstream.ready := true.B
        when(upstream.fire) {
          in_reg := upstream.bits
          state := s_Busy
        }
      }
      is(s_Busy) {
        // 处理状态：等待 busyLogic 完成
        when(busy_done) {
          out_reg := busy_res
          state := s_Done
        }
      }
      is(s_Done) {
        // 完成状态：准备向下游发送数据
        downstream.valid := true.B
        when(downstream.fire) {
          state := s_Idle
        }
      }
    }
  }
}


