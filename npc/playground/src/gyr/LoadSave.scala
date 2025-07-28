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


class LoadSave extends Module {
  val io = IO(new LSBus)

  // LSU需要状态来管理与SRAM的交互，因为读操作有延迟。
  // s_idle: 空闲状态，可以接收来自EXU的新指令。
  // s_wait: 等待状态，正在等待SRAM返回读操作的数据。
  val s_idle :: s_wait :: Nil = Enum(2)
  val state = RegInit(s_idle)

  // 寄存器，用于锁存需要传递给WBU（写回单元）的数据。
  // 这是必须的，以确保当读操作导致停顿时，指令的其他信息能与读回的数据在时间上对齐。
  val l2w_reg = RegInit(0.U.asTypeOf(new L2W))  // --- 默认信号连接 ---

  io.in.ready         := false.B // 默认不接收新指令
  io.sram.req.valid   := false.B // 默认不向SRAM发请求
  io.sram.resp.ready  := false.B // 默认不接收SRAM响应
  io.out.valid        := false.B // 默认输出无效
  io.out.bits         := l2w_reg // 输出数据永远来自寄存器

  // SRAM请求的数据部分可以直接连接，因为它们是组合逻辑
  io.sram.req.bits.addr  := io.in.bits.mem_addr
  io.sram.req.bits.wdata := io.in.bits.mem_wdata
  io.sram.req.bits.wen   := io.in.bits.mem_wen
  // 注意：需要将UInt转换为自定义的MemLen类型
  io.sram.req.bits.len   := io.in.bits.mem_len

  // --- 状态机逻辑 ---
  switch(state) {
    is(s_idle) {
      // 在空闲状态，我们准备好接收来自EXU的新指令。
      io.in.ready := true.B

      // 当一个有效的指令从EXU成功传入时...
      when(io.in.fire) {
        // 首先，将所有需要透传的信息锁存到我们的输出寄存器中。
        l2w_reg.rd_en   := io.in.bits.rd_en
        l2w_reg.rd_addr := io.in.bits.rd_addr
        l2w_reg.rd_data := io.in.bits.rd_data // 这是来自ALU的计算结果

        // 判断指令类型
        val is_load = io.in.bits.rd_en && !io.in.bits.mem_wen
        val is_store = io.in.bits.mem_wen

        when(is_load) {
          // 是加载指令：向SRAM发出读请求，并进入等待状态。
          io.sram.req.valid := true.B
          when(io.sram.req.ready) { // 确保SRAM能接收我们的请求
            state := s_wait
          }
        } .elsewhen(is_store) {
          // 是存储指令：向SRAM发出写请求。假设写操作一周期完成，所以保持在空闲状态。
          io.sram.req.valid := true.B
          state := s_idle
        } .otherwise {
          // 是非访存指令 (如 ADD)：数据已经锁存，直接在下一个周期输出。
          io.out.valid := true.B
          state := s_idle
        }
      }
    }

    is(s_wait) {
      // 在等待状态，我们正在等待SRAM的读响应。
      // 此时不能接收来自EXU的新指令。
      io.in.ready := false.B

      // 我们永远准备好接收SRAM的响应。
      io.sram.resp.ready := true.B

      // 当SRAM的响应成功到达时...
      when(io.sram.resp.fire) {
        // 用从SRAM读回的数据，更新输出寄存器中的数据部分。
        l2w_reg.rd_data := io.sram.resp.bits.rdata

        // 现在，完整的输出数据包准备好了，通知下游。
        io.out.valid := true.B

        // 任务完成，返回空闲状态。
        state := s_idle
      }
    }
  }
}
