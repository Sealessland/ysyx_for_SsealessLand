package xininn

import chisel3._
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

  // master 接口的输出暂时也赋值为0，因为CPU逻辑尚未实现
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
  master.ar.valid := false.B
  master.ar.bits.arid    := 0.U
  master.ar.bits.araddr  := 0.U
  master.ar.bits.arlen   := 0.U
  master.ar.bits.arsize  := 0.U
  master.ar.bits.arburst := 0.U
  master.r.ready  := false.B
}