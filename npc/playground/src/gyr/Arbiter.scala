package gyr

import chisel3._

class Arbiter extends Module{
  val io = IO(new Bundle{
    val in1 = new AXI4
    val in2 = new AXI4
  })
  // forever in1 first Arbiter
}
