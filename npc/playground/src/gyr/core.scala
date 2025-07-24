package gyr

import chisel3._
import chisel3.util._
// 确保 BusConn 在这个路径下或者正确导入
// import gyr.tool.BusConn

/**
 * 定义一个简单的数据包用于传输
 */
class TestData extends Bundle {
  val data = UInt(8.W)
}
/**
 * 定义生产者模块
 */
class Producer extends Module {
  val io = IO(new Bundle {
    val en     = Input(Bool())
    val dataIn = Input(new TestData)
    val out    = Decoupled(new TestData)
  })

  io.out.valid := io.en
  io.out.bits  := io.dataIn
}
/**
 * 定义消费者模块
 */
class Consumer extends Module {
  val io = IO(new Bundle {
    val en      = Input(Bool())
    val dataOut = Output(new TestData)
    val in      = Flipped(Decoupled(new TestData))
  })

  io.in.ready := io.en
  // 使用一个寄存器来锁存接收到的数据
  val receivedData = RegInit(0.U.asTypeOf(new TestData))
  when(io.in.fire) {
    receivedData := io.in.bits
  }
  io.dataOut := receivedData
}
/**
 * 顶层示例模块，演示 BusConn 的用法
 */
class BusConnExample extends Module {
  val io = IO(new Bundle {
    // 暴露内部状态用于观察
    val producerDataOut = Output(new TestData)
    val consumerDataOut = Output(new TestData)
    val busFire         = Output(Bool())
  })

  val producer = Module(new Producer)
  val consumer = Module(new Consumer)

  // *** 使用 BusConn 连接 producer 和 consumer ***
  // 假设 BusConn 已经定义并导入
  // BusConn(producer.io.out, consumer.io.in)

  // 如果没有 BusConn，等效的手动连接如下：
  producer.io.out.ready := consumer.io.in.ready
  consumer.io.in.valid := producer.io.out.valid
  consumer.io.in.bits := producer.io.out.bits


  // 内部逻辑，用于自动驱动 producer 和 consumer
  // 使用一个计数器来生成变化的输入
  val cycle = RegInit(0.U(32.W))
  cycle := cycle + 1.U

  // 生产者每2个周期发送一次数据
  producer.io.en := (cycle % 2.U) === 0.U
  producer.io.dataIn.data := cycle(7, 0) // 发送计数器的低8位

  // 消费者每3个周期准备好接收一次，用于演示反压
  consumer.io.en := (cycle % 3.U) =/= 0.U

  // 将内部信号连接到顶层IO以便观察
  io.producerDataOut := producer.io.out.bits
  io.consumerDataOut := consumer.io.dataOut
  io.busFire         := consumer.io.in.fire // fire 信号表示握手成功
}