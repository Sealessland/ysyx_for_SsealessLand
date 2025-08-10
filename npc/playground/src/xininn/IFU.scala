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
    val out = Decoupled(new FDBus) // 输出到译码阶段
    val axi = new AXI // 完整的 AXI4 接口
    val pcCtrl = new pcCtrl // 跳转控制接口
    val pc = Output(UInt(32.W))
  })


  io.axi.aw.valid := false.B
  io.axi.aw.bits.awid := 0.U
  io.axi.aw.bits.awaddr := 0.U
  io.axi.aw.bits.awlen := 0.U
  io.axi.aw.bits.awsize := 0.U
  io.axi.aw.bits.awburst := 0.U

  io.axi.w.valid := false.B
  io.axi.w.bits.wdata := 0.U
  io.axi.w.bits.wstrb := 0.U
  io.axi.w.bits.wlast := false.B

  io.axi.b.ready := false.B
  val pc = RegInit("h80000000".U(32.W))

  // --- AXI 读通道默认信号 ---
  io.axi.ar.valid := false.B
  io.axi.ar.bits.araddr := pc
  // 为 AXI4 新增的信号提供固定的、符合单次读操作的默认值
  io.axi.ar.bits.arid := 0.U // 事务ID，固定为0
  io.axi.ar.bits.arlen := 0.U // 突发长度为1 (0表示1拍)
  io.axi.ar.bits.arsize := 2.U // 传输大小为4字节 (2^2)
  io.axi.ar.bits.arburst := 1.U // INCR burst type

  io.axi.r.ready := false.B


  // ---------------------------------------------------------------------------
  //  3. 核心控制逻辑 (逻辑不变)
  // ---------------------------------------------------------------------------

  val inst = RegInit(0.U(32.W))
  // 单项指令缓冲
  io.pc := pc

  // 建议使用两状态状态机
  val s_idle :: s_busy :: Nil = Enum(2)
  val state = RegInit(s_idle)

  // -- 输出逻辑 --
  // 仅在 s_busy 状态且收到AXI数据时，数据才有效
  val inst_reg = Reg(UInt(32.W))
  val pc_reg = Reg(UInt(32.W)) // 用一个寄存器锁存PC，与指令对齐

  io.out.valid := state === s_busy && io.axi.r.valid
  io.out.bits.inst := io.axi.r.bits.rdata // 直接连接，或通过inst_reg
  io.out.bits.pc := pc_reg

  // -- AXI请求逻辑 (受状态机和反压控制) --
  io.axi.ar.valid := state === s_idle && io.out.ready // **关键：受反压控制**
  io.axi.ar.bits.araddr := pc

  // -- AXI接收逻辑 --
  io.axi.r.ready := state === s_busy && io.out.ready // **关键：数据接收也受反压控制**

  // -- 状态机与PC更新 --
  switch(state) {
    is(s_idle) {
      // 当下游准备好，且AXI请求被接受时
      when(io.axi.ar.fire) {
        pc_reg := pc // **关键：在发请求时锁存PC**
        state := s_busy
      }
    }
    is(s_busy) {
      // 当数据被下游接收时
      when(io.out.fire) {
        pc := pc + 4.U // **关键：只在指令被消耗时更新PC**
        state := s_idle
      }
    }
  }
  when(io.out.fire) {
  }
  val pc_en_delay = RegNext(io.pcCtrl.pc_en, false.B)
  val pc_en_posedge = io.pcCtrl.pc_en && !pc_en_delay

  val dnpc_delay = RegNext(io.pcCtrl.dnpc, 0.U)
  val dnpc_pulse = dnpc_delay =/= io.pcCtrl.dnpc
  // -- 跳转控制逻辑 (最高优先级) --

  when(dnpc_pulse && pc_en_posedge) {
    pc := io.pcCtrl.dnpc
    state := s_idle
    inst_reg := 0.U
    // 当跳转发生时，需要冲刷流水线
    // 将state复位到s_idle，可以自然地取消正在进行的任何操作。
    // 下一拍，s_idle会根据新的pc发起请求。
  }
}

