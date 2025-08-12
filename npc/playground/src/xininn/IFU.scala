package xininn
import chisel3._
import chisel3.util._
import AXIUtils._
import chisel3.DontCare.:=

import scala.collection.immutable
import xininn.utils._

class W2F extends Bundle {
  val inst_done = Bool()
}
class pcCtrl extends Bundle{
  val dnpc = Input(UInt(32.W))
  val pc_en = Input(Bool())
}
class FDBus extends Bundle {
  val inst = Output(UInt(32.W)) // Instruction fetched from memory
  val pc   = Output(UInt(32.W)) // Program Counter of the fetched instruction
    // Indicates if the fetched instruction is valid
}


class Fetch_v5 extends Module {
  val io = IO(new Bundle {
    val out = Decoupled(new FDBus)
    val axi = new AXI
    val pcCtrl = new pcCtrl
    val pc = Output(UInt(32.W))
  })

  // --- AXI 写通道的默认连接 (保持不变) ---
  io.axi.aw := DontCare
  io.axi.w  := DontCare
  io.axi.b.ready := false.B

  val pc = RegInit("h80000000".U(32.W))
  io.pc := pc

  val s_idle :: s_busy :: Nil = Enum(2)
  val state = RegInit(s_idle)

  val pc_reg = Reg(UInt(32.W))

  // ===========================================================================
  //  核心逻辑重构：将跳转作为最高优先级
  // ===========================================================================

  // 默认情况下，不发起请求，也不接收数据
  io.axi.ar.valid := false.B
  io.axi.r.ready  := false.B

  // 默认输出无效
  io.out.valid := false.B

  // 默认连接，避免 latch
  io.axi.ar.bits.araddr := pc
  io.axi.ar.bits.arid   := 0.U
  io.axi.ar.bits.arlen  := 0.U
  io.axi.ar.bits.arsize := 2.U
  io.axi.ar.bits.arburst:= 1.U

  io.out.bits.inst := io.axi.r.bits.rdata
  io.out.bits.pc   := pc_reg

  // --- 跳转检测 ---
  val pc_en_delay = RegNext(io.pcCtrl.pc_en, false.B)
  val pc_en_posedge = io.pcCtrl.pc_en && !pc_en_delay

  // **关键：使用 when/otherwise 结构来处理优先级**
  when(pc_en_posedge) {
    // --- 分支/跳转处理 ---
    // 这是最高优先级。如果发生跳转，我们就冲刷流水线。

    // 1. 更新 PC 到跳转目标
    pc := io.pcCtrl.dnpc
    io.out.bits.pc := pc
    // 2. 将状态机复位到 idle，准备从新地址取指
    state := s_idle

    // 3. 此时，所有 AXI 信号都保持其默认的 false 值。
    //    我们不发起新的请求，也不准备接收任何数据。
    //    如果恰好有一个旧的 AXI 响应（r.valid=true）在这一拍到达，它将被忽略，
    //    因为 r.ready 为 false。AXI 总线会等待，直到下一拍我们进入正常状态。
    //    (注意：这假设 AXI slave 不会因等待 r.ready 而超时)
  } .otherwise {
    // --- 正常状态机逻辑 ---
    // 只有在没有跳转时，才执行常规的取指逻辑
    switch(state) {
      is(s_idle) {
        // 准备好发起请求，并且下游也准备好了
        io.axi.ar.valid := io.out.ready

        when(io.axi.ar.fire) {
          pc_reg := pc // 在发出请求时，锁存当前的PC
          state  := s_busy
        }
      }
      is(s_busy) {
        // 准备好接收数据，并且下游也准备好了
        io.axi.r.ready := io.out.ready
        io.out.valid   := io.axi.r.valid // 当数据到达时，输出有效

        when(io.out.fire) {
          pc    := pc + 4.U // 只有在指令被成功消耗后，才更新PC
          state := s_idle
        }
      }
    }
  }
}

