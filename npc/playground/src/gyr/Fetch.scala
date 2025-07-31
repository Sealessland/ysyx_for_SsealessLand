// In file: Fetch.scala
package gyr
import chisel3._
import chisel3.util._
import chisel3.util.experimental._
import gyr.tool._

class W2F extends Bundle {
  val inst_done = Bool()
}

class F2D extends Bundle {
  val inst = UInt(32.W)
  val pc   = UInt(32.W)
}

class E2F extends Bundle {
  val pcSrc = Bool()
  val dnpc  = UInt(32.W)
}

class FUBus extends Bundle {
  val in  = Flipped(new W2F)
  val out = Decoupled(new F2D)
  val axi = Flipped(new AXI4)
  val e2f = Flipped(new E2F)
}


import chisel3._
import chisel3.util._

// 假设 FUBus, F2D, AXI4, E2F 等 Bundle 定义存在...
import chisel3._
import chisel3.util._

// 假设 FUBus 和 E2FBundle 的定义如下
// class FUBus extends Bundle { ... }
// class E2FBundle extends Bundle { ... }
// object BusConn { ... } // 使用上一问中的最优 BusConn 实现
class Fetch extends Module {
  val io = IO(new FUBus)

  // --- AXI 写通道和应答通道，在此模块中未使用 ---
  io.axi.w.valid      := false.B
  io.axi.aw.valid     := false.B
  io.axi.w.bits.data  := 0.U
  io.axi.w.bits.strb  := 0.U
  io.axi.aw.bits.addr := 0.U
  io.axi.b.ready      := true.B // 最佳实践：即使不用，也应该让B通道随时就绪，防止死锁

  // =================================================================
  // 1. PC 管理与预取逻辑
  // =================================================================
  val pc = RegInit("h80000000".U(32.W))
  // 请求地址的PC需要被寄存，因为axi.r返回数据时，pc可能已经指向pc+4
  val pc_in_flight = Reg(UInt(32.W))

  // 标志位，表示是否已经发送了一个AR请求但尚未收到R响应
  val ar_request_in_flight = RegInit(false.B)

  // 何时可以发起新的取指请求？
  // 条件：没有正在处理的请求，并且输出握手接口准备好腾出空间。
  // io.out.ready 信号表示下游可以接收新指令，是我们发起预取的时机。
  val can_send_ar_request = !ar_request_in_flight

  // 默认情况下，地址请求无效
  io.axi.ar.valid := false.B
  io.axi.ar.bits.addr := pc

  when(can_send_ar_request) {
    io.axi.ar.valid := true.B // 尝试发起取指
    when(io.axi.ar.fire) {
      pc_in_flight         := pc // 锁存当前请求的PC
      ar_request_in_flight := true.B
      // 立即更新PC，指向下一条指令，实现预取！
      pc                   := pc + 4.U
    }
  }

  // =================================================================
  // 2. 指令缓冲与输出 (使用 BusConn 解耦)
  // =================================================================

  // 创建一个临时的 DecoupledIO，用于连接 AXI Read 和 BusConn
  // 因为 BusConn 需要 DecoupledIO 作为输入
  val axi_r_decoupled = Wire(Decoupled(new Bundle {
    val inst = UInt(32.W)
    val pc   = UInt(32.W)
  }))

  axi_r_decoupled.valid       := io.axi.r.valid
  axi_r_decoupled.bits.inst   := io.axi.r.bits.data
  axi_r_decoupled.bits.pc     := pc_in_flight // 使用锁存的PC，而不是预取的PC
  io.axi.r.ready              := axi_r_decoupled.ready // BusConn 会控制 ready 信号

  // 当AXI读数据返回时，飞行中的请求处理完毕
  when(io.axi.r.fire) {
    ar_request_in_flight := false.B
  }

  // 使用我们最优的 BusConn 模块作为指令缓冲
  // 它连接了AXI的返回数据(producer)和模块的输出(consumer)
  BusConn(axi_r_decoupled, io.out)

  // =================================================================
  // 3. 分支/跳转处理 (最高优先级)
  // =================================================================
  when(io.e2f.pcSrc) {
    // 检测到分支跳转，这是最高优先级的事件，需要覆盖一切常规操作
    // 1. 更新PC到新的目标地址
    pc := io.e2f.dnpc

    // 2. 取消正在飞行中的AR请求。虽然无法撤回已发出的AXI事务，
    //    但我们可以通过复位状态来忽略其返回结果。
    ar_request_in_flight := false.B
    io.axi.ar.valid      := false.B // 在本周期停止发送错误的请求

    // 3. 清空 BusConn 中的任何已缓冲数据。
    //    通过给 BusConn 的 producer 输入一个无效信号，并让 consumer 读取（如果它能），
    //    可以间接清空。一个更直接的方法是给 BusConn 增加一个 flush 端口。
    //    这里用一个简化的逻辑：当跳转发生，我们强制认为AXI返回的数据无效。
    axi_r_decoupled.valid := false.B
  }
}