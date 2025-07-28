package gyr

import chisel3._
import chisel3.util._
import gyr.tool._

class L2W extends Bundle{
  val rd_en     = (Bool())
  val rd_addr   = (UInt(5.W))
  val rd_data   = (UInt(32.W))
}

class LSBus extends Bundle{
  val in = Flipped(Decoupled(new E2L))
  val out = Decoupled(new L2W)
  val sram = Flipped(new SRAMport)
}


