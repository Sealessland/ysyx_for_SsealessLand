package gyr
import chisel3._
import chisel3.experimental._
import chisel3.util._
import chisel3.experimental._
object tool {
  object ConnLog {
    def apply[T_IN <: Data](in: T_IN): Unit = {
      printf(p"[conn Fire] data : ${in}\n")
    }

  }
  object BusConn {
    /**
     * 创建一个高性能、无气泡、带单级缓冲的握手连接 (Skid Buffer of depth 1)。
     * 当上下游都准备好时，数据可以“直通”，实现单周期吞吐。
     *
     * @param producer 上游数据生产者，类型为 DecoupledIO[T_IN]
     * @param consumer 下游数据消费者，类型为 DecoupledIO[T_OUT]
     * @param sideEffect 一个当数据被模块接受时触发的副作用函数
     * @tparam T_IN 输入数据类型
     * @tparam T_OUT 输出数据类型
     */
    def apply[T_IN <: Data, T_OUT <: Data](producer: DecoupledIO[T_IN],
                                           consumer: DecoupledIO[T_OUT],
                                           sideEffect: T_IN => Unit = (_: T_IN) => ()
                                          ): Unit = {
      // 1. 状态和数据寄存器
      val validReg = RegInit(false.B)
      val dataReg = Reg(chiselTypeOf(producer.bits))

      // 2. 核心握手信号计算
      // **关键优化**: 只要下游准备好拿走当前数据，或者内部缓冲区本来就是空的，
      // 就告诉上游可以发送新数据。这允许了数据的“直通”。
      producer.ready := consumer.ready || !validReg

      // 下游看到的数据是否有效，仅取决于内部缓冲区是否有数据。
      consumer.valid := validReg
      consumer.bits  := dataReg.asTypeOf(consumer.bits)

      // 3. 状态转移逻辑

      // 计算下一个时钟周期 validReg 的值。
      // 缓冲区在下一个周期为“满”的条件是：
      // a) 它当前为“满”，并且下游本周期没有读取 (validReg && !consumer.fire)
      // b) 或者，上游本周期成功写入了新数据 (producer.fire)
      val nextValid = (validReg && !consumer.fire) || producer.fire
      validReg := nextValid

      // 当上游成功写入数据时，更新数据寄存器并触发副作用。
      // 注意：在直通情况下 (producer.fire 和 consumer.fire 同时发生)，
      // 下游得到的是旧的 dataReg 的值，而 dataReg 在这个周期结束时被更新为 producer 的新数据。
      when(producer.fire) {
        dataReg := producer.bits
        sideEffect(producer.bits)
      }
    }
  }
  // In file: tool.scala

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
}

