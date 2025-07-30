// In file: Fetch.scala
package gyr
import chisel3._
import chisel3.util._
import chisel3.util.experimental._
import gyr.tool._

class W2F extends Bundle {
  val inst_done = Bool()
}

class F2D extends Bundle {
  val inst = UInt(32.W)
  val pc   = UInt(32.W)
}

class E2F extends Bundle {
  val pcSrc = Bool()
  val dnpc  = UInt(32.W)
}

class FUBus extends Bundle {
  val in  = Flipped(new W2F)
  val out = Decoupled(new F2D)
  val axi = Flipped(new AXI4)
  val e2f = Flipped(new E2F)
}


import chisel3._
import chisel3.util._

// 假设 FUBus, F2D, AXI4, E2F 等 Bundle 定义存在...

class Fetch extends Module {
  val io = IO(new FUBus)

  // --- AXI 写通道和应答通道，在此模块中未使用 ---
  io.axi.w.valid      := false.B
  io.axi.aw.valid     := false.B
  io.axi.w.bits.data  := 0.U
  io.axi.w.bits.strb  := 0.U
  io.axi.aw.bits.addr := 0.U
  io.axi.b.ready      := false.B // 写应答通道也应置为无效

  // --- PC 更新逻辑 ---
  val pc = RegInit("h80000000".U(32.W))
  pc := Mux(io.e2f.pcSrc, io.e2f.dnpc, pc + 4.U)

  // ====================== 修正部分 ======================

  // 1. 用于暂存指令和PC的输出缓冲寄存器
  val out_valid_reg = RegInit(false.B) // 缓冲中是否有有效数据
  val out_pc_reg    = Reg(UInt(32.W))
  val out_inst_reg  = Reg(UInt(32.W))

  // 2. 将模块的输出端口直接连接到缓冲寄存器
  io.out.valid     := out_valid_reg
  io.out.bits.pc   := out_pc_reg
  io.out.bits.inst := out_inst_reg

  // 用于匹配AXI请求和响应的PC寄存器 (仍在飞行途中的PC)
  val pc_reg = Reg(UInt(32.W))

  // 3. 握手信号定义
  // 定义何时可以取回新指令：当输出缓冲为空时
  val can_fetch_new = !out_valid_reg

  // AXI读数据通道的ready信号由缓冲状态决定
  io.axi.r.ready := can_fetch_new

  // AXI读地址请求使用当前的PC
  io.axi.ar.bits.addr := pc

  // 4. 状态机逻辑 (控制AXI事务)
  val s_Idle :: s_Wait :: Nil = Enum(2)
  val state = RegInit(s_Idle)

  // 默认AXI地址通道无效
  io.axi.ar.valid := false.B

  // 核心状态机，仅在缓冲为空时才启动新的取指
  switch(state) {
    is(s_Idle) {
      when(can_fetch_new) {
        io.axi.ar.valid := true.B
        when(io.axi.ar.fire) { // 地址请求被AXI总线接受
          pc_reg := pc         // 锁存当前PC，用于匹配返回的数据
          state  := s_Wait
        }
      }
    }
    is(s_Wait) {
      // 在等待状态下，我们总是准备好接收数据
      // 注意：r.ready 已经在外面根据 can_fetch_new 连接好了
      when(io.axi.r.fire) { // AXI数据返回
        state := s_Idle
        // 数据直接存入输出缓冲，此时不直接送往io.out
        // out_valid_reg 会在下面统一处理
      }
    }
  }

  // 5. 缓冲区的有效位控制逻辑
  //    这是实现数据保持和正确处理背压的关键
  when(io.axi.r.fire) {
    // 当AXI数据到达时，数据有效，填满缓冲区
    out_valid_reg := true.B
    out_inst_reg  := io.axi.r.bits.data
    out_pc_reg    := pc_reg // 使用之前锁存的PC，确保匹配
  }.elsewhen(io.out.fire) {
    // 当下游模块成功接收数据时，清空缓冲区
    out_valid_reg := false.B
  }
  // 如果两个事件都未发生，out_valid_reg 保持其现有值

  // ==================== 修正部分结束 ====================
}