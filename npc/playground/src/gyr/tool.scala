package gyr
import chisel3._
import chisel3.experimental._
import chisel3.util._

object tool {

  object BusConn {
    /**
     * 创建一个稳定、带单级缓冲的握手连接。
     * 。
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
      // validReg 用于表示模块内部是否存有有效数据 (缓冲区是否为满)
      // dataReg 用于锁存从 producer 传来的数据
      val validReg = RegInit(false.B)
      // 使用 chiselTypeOf 获取 producer.bits 的硬件类型来创建寄存器
      val dataReg = Reg(chiselTypeOf(producer.bits))

      // 计算握手信号
      val producerFire = producer.fire
      val consumerFire = consumer.fire

      // 2. 驱动 producer.ready 信号
      // 只有当内部缓冲区为空时 (validReg 为 false)，才告诉上游可以发送数据
      producer.ready := !validReg

      // 3. 驱动 consumer 信号
      // valid 由内部状态寄存器驱动，bits 由内部数据寄存器驱动
      // 这样可以确保下游看到的是稳定、被锁存的数据
      consumer.valid := validReg
      consumer.bits  := dataReg.asTypeOf(consumer.bits) // 使用 asTypeOf 以支持类型转换

      // 4. 状态转移逻辑
      // 默认情况下，状态保持不变
      // 当上游成功写入数据时，缓冲区变为“满” (validReg = true)
      when(producerFire) {
        validReg := true.B
        dataReg  := producer.bits
        // 副作用在数据被模块确认接收的时刻触发
        sideEffect(producer.bits)
      }

      // 当下游成功读取数据时，缓冲区变为“空” (validReg = false)
      // 注意：如果 producer 和 consumer 在同一周期 fire，这个逻辑有最终优先权，
      // 使得 validReg 在下一个周期变为 false。
      when(consumerFire) {
        validReg := false.B
      }

      // 优化：处理同时读写的情况，避免产生“气泡”（bubble）
      // 如果在一个周期内，下游读取的同时上游也写入了新数据，
      // 那么缓冲区应该保持为满，并载入新数据。
      when(consumerFire && producerFire) {
        validReg := true.B // 保持为满
        dataReg  := producer.bits // 载入新数据
      }
    }
  }
}