package gyr
import chisel3._
import chisel3.experimental._
import chisel3.util._

class tool {

  object BusConn {
    def apply[T_IN <: Data,T_OUT<:Data](producer:DecoupledIO[T_IN],
                                        consumer:DecoupledIO[T_OUT],
                                        sideEffect: T_IN => Unit = (_: T_IN) => ()
                                       ): Unit = {
      val sIdle :: sWait :: Nil = Enum(2)
      val state = RegInit(sIdle)


      // 状态转移逻辑。注意 Mux 的结果被转换为 .U
      // 状态转移逻辑
      switch(state) {
        is(sIdle) {
          when(producer.fire) {
            state := sWait
          }
        }
        is(sWait) {
          when(consumer.fire) {
            state := sIdle
          }
        }
      }

      // 驱动 producer/consumer 信号
      // 当状态机空闲或下游消费者准备好时，上游生产者可以发送数据
      producer.ready := (state === sIdle) || consumer.ready
      consumer.valid := (state === sWait)
      consumer.bits  := producer.bits

      when(producer.fire) {
        sideEffect(producer.bits)
      }
    }
  }
}