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
  val ifu  = Module(new IFU)
  val idu  = Module(new IDU)
  val exu  = Module(new EXU)
  val lsu  = Module(new LSU)
  val wbu  = Module(new WBU)
  val xbar = Module(new Xbar)
  val rf   = Module(new RegFile)
  ifu.io.axi<>xbar.io.IFin
  lsu.io.axi<>xbar.io.LSin
  xbar.io.out<>master
  BusConn(ifu.io.out, idu.io.in)
  BusConn(idu.io.out, exu.io.in)
  BusConn(exu.io.out, lsu.io.in)
  BusConn(lsu.io.out, wbu.io.in)
  ifu.io.pcCtrl<>exu.io.pcCtrl
  val csr = Module(new CSR)
  idu.io.d2r<>rf.io.d2r
  idu.io.r2e <>  rf.io.r2e
  exu.io.csr<>csr.io
  wbu.io.out<>rf.io.w2r
}
class simcore extends Module{

}