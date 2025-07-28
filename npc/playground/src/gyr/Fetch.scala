// In file: Fetch.scala
package gyr
import chisel3._
import chisel3.util._
import chisel3.util.experimental._
import gyr.tool._
class W2F extends Bundle{
  val inst_done = Bool() // 用于指示指令是否有效
}

class F2D extends Bundle{
  val inst = UInt(32.W)
  val pc   = UInt(32.W)
}
class FUBus extends Bundle{
  val in  = Flipped(Decoupled(new W2F)) // 从 WriteBack 阶段接收指令完成信号
  val out = Decoupled(new F2D)
  val sram = Flipped(new SRAMport)
}
class Fetch extends Module {
  val io = IO(new FUBus)

  // 1. 为Fetch量身定做的状态机
  val s_Idle :: s_Req_SRAM :: s_Wait_SRAM :: s_Send_Downstream :: Nil = Enum(4)
  val state = RegInit(s_Idle)

  val pc = RegInit("h7ffffffc".U(32.W))
  val is_first_inst = RegInit(true.B)

  // 默认输出
  io.in.ready := false.B
  io.out.valid := false.B
  io.out.bits := DontCare // or connect to a result register
  io.sram.req.valid := false.B
  io.sram.req.bits := DontCare
  io.sram.resp.ready := false.B

  // 保存SRAM返回的结果
  val result_reg = Reg(new F2D)

  switch(state) {
    is(s_Idle) {
      // 在空闲状态，等待“指令完成”信号
      val can_start = io.in.valid || is_first_inst
      io.in.ready := !is_first_inst // 只有非首条指令才需要实际的握手

      when(can_start) {
        state := s_Req_SRAM
      }
    }

    is(s_Req_SRAM) {
      // 发起SRAM请求
      io.sram.req.valid     := true.B
      io.sram.req.bits.addr := pc + 4.U
      io.sram.req.bits.len  := 4.U
      io.sram.req.bits.wen  := false.B
      // ... a.s.o

      when(io.sram.req.fire) {
        // 请求成功后，更新PC，并进入等待状态
        pc := pc + 4.U
        state := s_Wait_SRAM
      }
    }

    is(s_Wait_SRAM) {
      // 等待SRAM的响应
      io.sram.resp.ready := true.B // 始终准备好接收响应
      when(io.sram.resp.valid) {
        // 收到响应，锁存结果，进入发送状态
        result_reg.inst := io.sram.resp.bits.rdata
        result_reg.pc   := pc // 此时的pc已经是更新后的pc，与指令地址一致
        state := s_Send_Downstream
      }
    }

    is(s_Send_Downstream) {
      // 向下游发送数据
      io.out.valid := true.B
      io.out.bits  := result_reg

      when(io.out.fire) {
        // 发送成功后，返回空闲状态
        when(is_first_inst) { is_first_inst := false.B } // 清除首次执行标志
        state := s_Idle
      }
    }
  }
}