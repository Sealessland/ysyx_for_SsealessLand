package SLLpc

import chisel3._

class RegFileBundle extends Bundle {
  val read_addr1 = Input(UInt(5.W))      // 读取地址1
  val read_addr2 = Input(UInt(5.W))      // 读取地址2
  val write_addr = Input(UInt(5.W))      // 写入地址
  val write_data = Input(UInt(32.W))     // 写入数据
  val read_data1 = Output(UInt(32.W))    // 读取数据1
  val read_data2 = Output(UInt(32.W))    // 读取数据2
}

class RegFile extends Module {
  val io = IO(new RegFileBundle)
  val regfile = Mem(32, UInt(32.W))       // 32个寄存器
    regfile(0) := 0.U
  // 写入逻辑
  when(io.write_addr =/= 0.U) {
    regfile(io.write_addr) := io.write_data
  }

  // 读取逻辑
  io.read_data1 := Mux(io.read_addr1 === 0.U, 0.U, regfile(io.read_addr1))
  io.read_data2 := Mux(io.read_addr2 === 0.U, 0.U, regfile(io.read_addr2))
}