package xininn

import chisel3._
import chisel3.util.DecoupledIO
import chisel3.experimental._
import chisel3.experimental.dataview._
case class AXIconfig(
  addrWidth: Int = 32,
  dataWidth: Int = 32,
  islite :Boolean = false
)
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



object AXIUtils {

  /**
   * 驱动AXI Master的AW通道为安全默认值
   * @param aw AXI AW Channel DecoupledIO port from a Master's perspective
   */
  def drive_aw_defaults(aw: DecoupledIO[AXIawChannel]): Unit = {
    aw.valid     := false.B
    aw.bits.awid   := 0.U
    aw.bits.awaddr := 0.U
    aw.bits.awlen  := 0.U
    aw.bits.awsize := 0.U
    aw.bits.awburst:= 0.U
  }

  /**
   * 驱动AXI Master的W通道为安全默认值
   * @param w AXI W Channel DecoupledIO port from a Master's perspective
   */
  def drive_w_defaults(w: DecoupledIO[AXIwChannel]): Unit = {
    w.valid     := false.B
    w.bits.wdata  := 0.U
    w.bits.wstrb  := 0.U
    w.bits.wlast  := false.B
  }

  /**
   * 驱动AXI Master的AR通道为安全默认值
   * @param ar AXI AR Channel DecoupledIO port from a Master's perspective
   */
  def drive_ar_defaults(ar: DecoupledIO[AXIarChannel]): Unit = {
    ar.valid     := false.B
    ar.bits.arid   := 0.U
    ar.bits.araddr := 0.U
    ar.bits.arlen  := 0.U
    ar.bits.arsize := 0.U
    ar.bits.arburst:= 0.U
  }

  /**
   * 驱动AXI Master对Slave返回通道的默认行为（时刻准备接收）
   * @param r AXI R Channel DecoupledIO port from a Master's perspective
   * @param b AXI B Channel DecoupledIO port from a Master's perspective
   */
  def drive_read_response_defaults(r: DecoupledIO[AXIrChannel]): Unit = {
    r.ready := true.B
  }

  def drive_write_response_defaults(b: DecoupledIO[AXIbChannel]): Unit = {
    b.ready := true.B
  }

  /**
   * 主函数：将一个完整的AXI Master端口初始化为安全默认状态
   * @param axi AXI Bundle from a Master's perspective (e.g., IO(Flipped(new AXI)))
   */
  def drive_master_defaults(axi: AXI): Unit = {
    drive_aw_defaults(axi.aw)
    drive_w_defaults(axi.w)
    drive_ar_defaults(axi.ar)
    drive_read_response_defaults(axi.r)
    drive_write_response_defaults(axi.b)
  }

  def inst_req(ar: DecoupledIO[AXIarChannel], pc: UInt): Unit = {
    // 1. 驱动 valid 信号，表示请求有效
    ar.valid := true.B
    // 2. 使用传入的 pc 参数作为地址
    ar.bits.araddr := pc
    // 3. 设置 AXI 其他参数
    ar.bits.arlen  := 1.U        // 突发长度为1 (0+1)
    ar.bits.arsize := 2.U        // 传输大小为4字节 (2^2)，适用于32位指令
    ar.bits.arburst:= 1.U        // 突发类型为 INCR
    ar.bits.arid   := 0.U        // ID
  }
  def inst_resp(r: DecoupledIO[AXIrChannel], data: UInt): Unit = {
    r.bits.rid := 0.U
    r.bits.rdata := data
    r.bits.rresp := 0.U
    r.bits.rlast := true.B
  }

}