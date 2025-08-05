package xininn

import chisel3._
import chisel3.util.DecoupledIO
import chisel3.experimental._
import chisel3.experimental.dataview._

class AXIarChannel extends Bundle{
  val arid = UInt(4.W)
  val araddr = UInt(32.W)
  val arlen = UInt(8.W)
  val arsize = UInt(3.W)
  val arburst = UInt(2.W)
}
class AXIawChannel extends Bundle{
  val awid = UInt(4.W)
  val awaddr = UInt(32.W)
  val awlen = UInt(8.W)
  val awsize = UInt(3.W)
  val awburst = UInt(2.W)
}

class AXIwChannel extends Bundle{
  val wdata = UInt(32.W)
  val wstrb = UInt(4.W)
  val wlast = Bool()
}
class AXIrChannel extends Bundle{
  val rid = UInt(4.W)
  val rdata = UInt(32.W)
  val rresp = UInt(2.W)
  val rlast = Bool()
}

class AXIbChannel extends Bundle{
  val bid = UInt(4.W)
  val bresp = UInt(2.W)
}

class AXI extends Bundle{
  val ar = DecoupledIO(new AXIarChannel)
  val r = Flipped(DecoupledIO(new AXIrChannel))
  val aw = DecoupledIO(new AXIawChannel)
  val w  = DecoupledIO(new AXIwChannel)
  val b = Flipped(DecoupledIO(new AXIbChannel))
}


class SoCAXI extends Bundle {
  // AW Channel: Master -> Slave, so Master port is Output
  val awvalid = Output(Bool())
  val awready = Input(Bool())
  val awid    = Output(UInt(4.W))
  val awaddr  = Output(UInt(32.W))
  val awlen   = Output(UInt(8.W))
  val awsize  = Output(UInt(3.W))
  val awburst = Output(UInt(2.W))

  // W Channel: Master -> Slave, so Master port is Output
  val wvalid = Output(Bool())
  val wready = Input(Bool())
  val wdata  = Output(UInt(32.W))
  val wstrb  = Output(UInt(4.W))
  val wlast  = Output(Bool())

  // AR Channel: Master -> Slave, so Master port is Output
  val arvalid = Output(Bool())
  val arready = Input(Bool())
  val arid    = Output(UInt(4.W))
  val araddr  = Output(UInt(32.W))
  val arlen   = Output(UInt(8.W))
  val arsize  = Output(UInt(3.W))
  val arburst = Output(UInt(2.W))

  // R Channel: Slave -> Master, so Master port is Input
  val rvalid = Input(Bool())
  val rready = Output(Bool())
  val rid    = Input(UInt(4.W))
  val rdata  = Input(UInt(32.W))
  val rresp  = Input(UInt(2.W))
  val rlast  = Input(Bool())

  // B Channel: Slave -> Master, so Master port is Input
  val bvalid = Input(Bool())
  val bready = Output(Bool())
  val bid    = Input(UInt(4.W))
  val bresp  = Input(UInt(2.W))
}
object AXIdataview {
  implicit val axiView: DataView[SoCAXI, AXI] = DataView(
    (target: SoCAXI) => new AXI,
    // AW Channel (Master View -> SoC Target)
    // sink := source  =>  target := view
    _.awvalid      -> _.aw.valid,
    _.awready      -> _.aw.ready,
    _.awid         -> _.aw.bits.awid,
    _.awaddr       -> _.aw.bits.awaddr,
    _.awlen        -> _.aw.bits.awlen,
    _.awsize       -> _.aw.bits.awsize,
    _.awburst      -> _.aw.bits.awburst,

    // W Channel (Master View -> SoC Target)
    _.wvalid       -> _.w.valid,
    _.wready       -> _.w.ready,
    _.wdata        -> _.w.bits.wdata,
    _.wstrb        -> _.w.bits.wstrb,
    _.wlast        -> _.w.bits.wlast,

    // AR Channel (Master View -> SoC Target)
    _.arvalid      -> _.ar.valid,
    _.arready     ->  _.ar.ready,
    _.arid         -> _.ar.bits.arid,
    _.araddr       -> _.ar.bits.araddr,
    _.arlen        -> _.ar.bits.arlen,
    _.arsize       -> _.ar.bits.arsize,
    _.arburst      -> _.ar.bits.arburst,

    // R Channel (SoC Target -> Master View)
    // sink := source  =>  view := target
    _.rvalid       -> _.r.valid,
    _.rready       -> _.r.ready,
    _.rid-> _.r.bits.rid,
    _.rdata        -> _.r.bits.rdata,
    _.rresp       -> _.r.bits.rresp,
    _.rlast       -> _.r.bits.rlast,

    // B Channel (SoC Target -> Master View)
    _.bvalid       -> _.b.valid,
    _.bready       -> _.b.ready,
    _.bid   -> _.b.bits.bid,
    _.bresp -> _.b.bits.bresp,
  )
}