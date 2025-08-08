package xininn

import chisel3._
import chisel3.util._
import chisel3.experimental.dataview._
import AXIdataview._ // 导入 DataView

class ysyx_23060321 extends Module {
  val io = IO(new Bundle {
    val master = new SoCAXI
    val slave = Flipped(new SoCAXI)
    val interrupt = Input(Bool())
  })

  // 获取结构化视图
  val master = io.master.viewAs[AXI]
  val slave  = io.slave.viewAs[AXI]

  // 将未使用的 slave 接口输出赋值为0
  slave.aw.ready := false.B
  slave.w.ready  := false.B
  slave.b.valid  := false.B
  slave.b.bits.bid   := 0.U
  slave.b.bits.bresp := 0.U
  slave.ar.ready := false.B
  slave.r.valid  := false.B
  slave.r.bits.rid   := 0.U
  slave.r.bits.rdata := 0.U
  slave.r.bits.rresp := 0.U
  slave.r.bits.rlast := false.B

  // 状态机：持续向0x20000000发送AR请求
  val s_idle :: s_wait_ready :: s_wait_response :: Nil = Enum(3)
  val state = RegInit(s_idle)
  // AR通道默认值（确保所有信号都有驱动）
  master.ar.valid := false.B
  master.ar.bits.arid    := 0.U
  master.ar.bits.araddr  := 0.U
  master.ar.bits.arlen   := 0.U
  master.ar.bits.arsize  := 0.U
  master.ar.bits.arburst := 0.U

  // R通道默认值
  master.r.ready := false.B
  // 默认关闭写通道
  master.aw.valid := false.B
  master.aw.bits.awid    := 0.U
  master.aw.bits.awaddr  := 0.U
  master.aw.bits.awlen   := 0.U
  master.aw.bits.awsize  := 0.U
  master.aw.bits.awburst := 0.U
  master.w.valid  := false.B
  master.w.bits.wdata := 0.U
  master.w.bits.wstrb := 0.U
  master.w.bits.wlast := false.B
  master.b.ready  := false.B

  // AR通道状态机控制
  switch(state) {
    is(s_idle) {
      // 发起AR请求到0x20000000
      master.ar.valid := true.B
      master.ar.bits.arid    := 1.U           // 设置ID为1
      master.ar.bits.araddr  := 0x20000000.U  // 目标地址
      master.ar.bits.arlen   := 0.U           // 单次传输 (len=0表示1个数据)
      master.ar.bits.arsize  := 2.U           // 4字节传输 (2^2=4)
      master.ar.bits.arburst := 1.U           // INCR突发类型

      when(master.ar.fire) {
        state := s_wait_response
      }
    }

    is(s_wait_response) {
      // 等待读响应
      master.ar.valid := false.B
      master.ar.bits.arid    := 0.U
      master.ar.bits.araddr  := 0.U
      master.ar.bits.arlen   := 0.U
      master.ar.bits.arsize  := 0.U
      master.ar.bits.arburst := 0.U
      master.r.ready := true.B

      when(master.r.fire) {
        state := s_idle // 收到响应后立即发起下一次请求
      }
    }
  }

  // 当不在等待响应状态时，关闭r.ready
  when(state =/= s_wait_response) {
    master.r.ready := false.B
  }
}

class simcore extends Module{

}