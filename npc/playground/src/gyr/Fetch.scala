package gyr
import chisel3._
import chisel3.util._
import chisel3.util.experimental._

class F2D extends Bundle{
  val inst = UInt(32.W)
  val pc   = UInt(32.W)
}
class FUBus extends Bundle{
  val out = Decoupled(new F2D)
  val sram = Flipped(new SRAMport)
}

class Fetch extends Module{
  val io = IO(new FUBus)
  val pc = RegInit("h7ffffffc".U(32.W)) // 初始PC值，指向 0x80000000 的前一条指令

  // 1. 连接 SRAM 请求接口
  io.sram.req.valid     := true.B // 总是尝试发送请求
  io.sram.req.bits.addr := pc + 4.U // 请求下一条指令的地址
  io.sram.req.bits.wen  := false.B // 读操作
  io.sram.req.bits.wdata:= 0.U // 写数据无效
  io.sram.req.bits.len  := MemLen.WORD // 读一个字 (32位)

  // 2. PC 更新逻辑
  // 当 SRAM 接受了我们的读请求时，更新 PC
  when(io.sram.req.fire) {
    pc := pc + 4.U
  }

  // 3. 连接 SRAM 响应和模块输出
  // 将 SRAM 的响应直接传递给模块的输出
  io.out.valid        := io.sram.resp.valid
  io.out.bits.inst    := io.sram.resp.bits.rdata
  io.out.bits.pc      := pc // 输出当前指令对应的 PC


  io.sram.resp.ready  := io.out.ready
}


