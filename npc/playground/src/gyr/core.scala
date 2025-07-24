package gyr

import chisel3._
import chisel3.util._
import gyr.tool.BusConn

class core extends Module{
  val SRAM = Module(new SRAM)

  val IFU = Module(new Fetch)

  val IDU = Module(new Decode)

  val RF  = Module(new RegFile)

  val EXU= Module(new Execute)
  BusConn(IFU.io.out, IDU.io.in)
  BusConn(IFU.io.sram.req,SRAM.io.req)
  BusConn(SRAM.io.resp,IFU.io.sram.resp)
  RF.io.d2r<>IDU.io.d2r
  IDU.io.r2d<>RF.io.r2e
  BusConn(IDU.io.out,EXU.io.in)


}