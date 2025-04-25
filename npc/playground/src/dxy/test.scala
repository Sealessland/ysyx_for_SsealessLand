package dxy
import  chisel3._
import chisel3.util._
import chisel3.experimental._
class test extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(32.W))
    val b = Input(UInt(32.W))
    val c = Output(UInt(32.W))
    val regout= Output(UInt(32.W))
  })
  when(io.a > io.b) {
    io.c := io.a
  } .otherwise {
    io.c := io.b
  }
  switch(io.a) {
    is(0.U) {
      io.c := 0.U
    }
    is(1.U) {
      io.c := 1.U
    }
    is(2.U) {
      io.c := 2.U
    }
    is(3.U) {
      io.c := 3.U
    }
    is(4.U) {
      io.c := 4.U
    }
  }
  val reg = RegInit(0.U(32.W))
  when(io.a > io.b) {
    reg := io.a
  } .otherwise {
    reg := io.b
  }
  val Reg1 = RegInit(io.a)
  val Reg2 = RegNext(io.b)
  io.regout := Reg1 + Reg2 +reg
  val delayreg = RegInit(0.U(32.W))
  when(io.a > io.b) {
    delayreg := io.a
  } .otherwise {
    delayreg := io.b
  }
  val delayreg2 = RegNext(delayreg)
  val delayreg3 = RegNext(delayreg2)
  io.regout:= delayreg2 + delayreg3 + reg
}
import chisel3._

class readDelay extends Module {
  val io = IO(new Bundle {
    val mem_ren  = Input(Bool())
    val mem_addr = Input(UInt(32.W))
    val data_len = Input(UInt(2.W)) // 数据长度: 0=byte, 1=half-word, 2=word
    val mem_rdata = Output(UInt(32.W))
  })

  val readInter = Module(new DPIReadMemory)
  val readReg   = RegInit(0.U(32.W))

  // Connect to the optimized DPIReadMemory module
  readInter.io.clock := clock
  readInter.io.reset := reset
  readInter.io.mem_ren := io.mem_ren
  readInter.io.mem_addr := io.mem_addr
  readInter.io.data_len := io.data_len

  // Capture read data when memory read is enabled
  when(io.mem_ren) {
    readReg := readInter.io.mem_rdata
  }

  io.mem_rdata := readReg
}
