package gyr

import chisel3._
import chisel3.util.experimental._
import chisel3.util._
/*
val io = IO(new Bundle {
  val rs1_addr = Input(UInt(5.W))
  val rs2_addr = Input(UInt(5.W))
  val rs1_data = Output(UInt(64.W))
  val rs2_data = Output(UInt(64.W))
  val rd_addr  = Input(UInt(5.W))
  val rd_data  = Input(UInt(64.W))
  val rd_en    = Input(Bool())
})
*/


/**
 * 从 WriteBack 阶段传入的写请求 Bundle
 */
class W2R extends Bundle {
  val addr = Output(UInt(5.W))
  val data = Output(UInt(32.W))
  val en   = Output(Bool())
}


class R2E extends Bundle{
  val rs1_data = Output(UInt(32.W))
  val rs2_data = Output(UInt(32.W))
}
/**
 * RegFile 的顶层 IO Bundle
 */
class rfBundle extends Bundle {
  // d2r: 从 Decode 阶段来的读请求
  // D2R 定义在 Decode.scala 中，这里 Flipped 将其方向转为输入
  val d2r = Flipped(new D2R)
  // w2r: 从 WriteBack 阶段来的写请求
  val w2r = Flipped(new W2R)
  // 读出的数据
  val r2e = new R2E
}

class RegFile extends Module {
  val io = IO(new rfBundle)

  // 32个64位宽的寄存器
  val rf = RegInit(VecInit(Seq.fill(32)(0.U(32.W))))
  rf(0) := 0.U
  // 写逻辑：当写使能且目标地址不为x0时，写入数据
  when(io.w2r.en && (io.w2r.addr =/= 0.U)) {
    rf(io.w2r.addr) := io.w2r.data
  }
  io.r2e.rs1_data := Mux((io.d2r.rs1_addr =/= 0.U), rf(io.d2r.rs1_addr), 0.U)


  io.r2e.rs2_data := Mux((io.d2r.rs2_addr =/= 0.U), rf(io.d2r.rs2_addr), 0.U)

}


