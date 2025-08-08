package xininn
import chisel3._
import chisel3.util._
class ARport extends Bundle {
  val addr: UInt = UInt(32.W)
}
class Rport extends Bundle {
  val resp: UInt = UInt(2.W);
  val data: UInt = UInt(32.W)
}
class AWport extends Bundle { val
addr: UInt = UInt(32.W)
}
class Wport extends Bundle { val
data: UInt = UInt(32.W); val strb: UInt = UInt(4.W)
}
class Bport extends Bundle { val
resp: UInt = UInt(2.W)
}

class AXI4lite extends Bundle {
  val ar: DecoupledIO[ARport] = Flipped(Decoupled(new ARport))
  val r: DecoupledIO[Rport] = Decoupled(new Rport)
  val aw: DecoupledIO[AWport] = Flipped(Decoupled(new AWport))
  val w: DecoupledIO[Wport] = Flipped(Decoupled(new Wport))
  val b: DecoupledIO[Bport] = Decoupled(new Bport)
}
object extension4lite {
  def apply(axi: AXI4lite): AXI4lite = {
    // 将AXI4转换为AXI4Lite
    val lite_axi = Wire(new AXI4lite)
    lite_axi.ar <> axi.ar
    lite_axi.r <> axi.r
    lite_axi.aw <> axi.aw
    lite_axi.w <> axi.w
    lite_axi.b <> axi.b

    // 设置Lite特性：只支持32位地址和数据宽度
    lite_axi.ar.bits.addr := lite_axi.ar.bits.addr(31, 0)
    lite_axi.aw.bits.addr := lite_axi.aw.bits.addr(31, 0)
    lite_axi.w.bits.data := lite_axi.w.bits.data(31, 0)

    lite_axi
  }
}