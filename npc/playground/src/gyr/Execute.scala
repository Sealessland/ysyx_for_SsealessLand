package gyr
import chisel3._
import chisel3.util._
import firrtl.ir.BundleType
class E2L extends Bundle{
  val rd_en     = (Bool())
  val rd_addr   = (UInt(5.W))
  val rd_data   = (UInt(32.W))
  val mem_wen   = (Bool())
  val mem_waddr = (UInt(32.W))
  val mem_wdata = (UInt(32.W))
  val mem_raddr = (UInt(32.W))
  val mem_rlen  = UInt(3.W)
}
class PCcontrol extends Bundle{
  val pcSel = Output(Bool())
  val dnpc  =
}
class EUBus extends Bundle{
  val out = Decoupled(new E2L)
  val in  = Flipped(Decoupled(new D2E))
}


class Execute extends Module{
  val io = IO(new EUBus)

}