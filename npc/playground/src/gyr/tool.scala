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
     * 创建一个最优的、高性能、无气泡、带单级缓冲的握手连接 (Skid Buffer)。
     *
     * 核心特性:
     * 1. **组合直通 (Combinational Pass-through)**: 当内部缓冲为空且下游准备好时，
     *    数据从 producer 到 consumer 存在一条纯组合逻辑路径，实现零延迟传输。
     * 2. **防滑缓冲 (Skid Buffer)**: 当下游阻塞时，可缓存一个数据，防止上游级联阻塞，
     *    从而解耦上下游时序，避免产生流水线气泡 (Bubbles)。
     *
     * @param producer 上游数据生产者，类型为 DecoupledIO[T_IN]
     * @param consumer 下游数据消费者，类型为 DecoupledIO[T_OUT]
     * @param sideEffect 一个当数据被模块 *接受* 时（即 producer.fire）触发的副作用函数
     * @tparam T_IN 输入数据类型
     * @tparam T_OUT 输出数据类型
     */
    def apply[T_IN <: Data, T_OUT <: Data](producer: DecoupledIO[T_IN],
                                           consumer: DecoupledIO[T_OUT],
                                           sideEffect: T_IN => Unit = (_: T_IN) => ()
                                          ): Unit = {

      // 状态寄存器：缓冲是否存有有效数据
      val validReg = RegInit(false.B)
      // 数据寄存器：用于缓冲数据
      val dataReg = Reg(chiselTypeOf(producer.bits))

      // 核心握手逻辑
      // 1. 我们何时能从上游接收数据 (producer.ready)？
      //    - 当下游准备好接收时 (数据可以直接通过)
      //    - 或者，当我们的内部缓冲为空时 (数据可以存入缓冲)
      val readyForProducer = consumer.ready || !validReg
      producer.ready := readyForProducer

      // 2. 我们何时有有效数据给下游 (consumer.valid)？
      //    - 当上游有新数据过来时
      //    - 或者，当我们的内部缓冲本身就存有有效数据时
      consumer.valid := producer.valid || validReg

      // 3. 下游应该接收什么数据 (consumer.bits)？
      //    - 如果缓冲为空(!validReg)，数据必然是直接来自上游的。
      //    - 否则，数据来自我们的缓冲。
      //    注意：在 producer.valid=true, validReg=true 的情况下，优先送出旧数据。
      //          Mux 的条件用 validReg 会更清晰、更标准。
      consumer.bits := Mux(validReg, dataReg, producer.bits).asTypeOf(consumer.bits)

      // 定义 "fire" 信号，表示一次成功的握手
      val producerFire = producer.fire // producer.valid && producer.ready
      val consumerFire = consumer.fire // consumer.valid && consumer.ready

      // 状态更新逻辑 (下一个时钟周期)
      // 这是最关键的部分，决定了缓冲区的行为
      when(producerFire) {
        // 只要上游成功发送了数据，我们就需要一个地方存放它，
        // 以备下游没有及时取走。所以总是锁存 producer.bits。
        // 在直通情况下，这个锁存值是“备用”的，不会被错误使用。
        dataReg := producer.bits
        sideEffect(producer.bits)
      }

      // validReg 的状态转换
      // 使用 when/else if 结构，逻辑更清晰
      when(validReg) {
        // 当前缓冲是满的
        // 如果下游消费了数据，并且没有新数据进来，缓冲就变空
        when(consumerFire && !producerFire) {
          validReg := false.B
        }
      }.otherwise {
        // 当前缓冲是空的
        // 如果上游来了数据，但下游没准备好接收，缓冲就变满
        when(producerFire && !consumerFire) {
          validReg := true.B
        }
      }
      // 其他情况 (producerFire 和 consumerFire 同为 true 或同为 false)，validReg 状态保持不变。
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
}

