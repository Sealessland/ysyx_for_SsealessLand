package xininn

import chisel3._
import chisel3.util._

// 假设 AXI 和 AXI Channel 的 Bundle 定义已存在
// class AXI extends Bundle { ... }
// class AXIarChannel extends Bundle { ... }
// ...

class Xbar extends Module {
  val io = IO(new Bundle {
    val IFin = Flipped(new AXI)
    val LSin = Flipped(new AXI)
    val out = new AXI
  })

  // =================================================================
  // 1. 主->从 通道仲裁 (AR, AW)
  //    使用标准 Arbiter，它默认是固定优先级仲裁。
  //    将高优先级的 LSin 连接到 in(0)。
  // =================================================================

  // 读地址 (AR) 通道仲裁
  // Arbiter 默认是固定优先级，in(0) > in(1) > ...
  val ar_arb = Module(new Arbiter(new AXIarChannel, 2))
  ar_arb.io.in(0) <> io.LSin.ar  // LSin 连接到 in(0)，获得最高优先级
  ar_arb.io.in(1) <> io.IFin.ar // IFin 连接到 in(1)，获得较低优先级
  io.out.ar <> ar_arb.io.out

  // 写地址 (AW) 通道仲裁
  val aw_arb = Module(new Arbiter(new AXIawChannel, 2))
  aw_arb.io.in(0) <> io.LSin.aw  // LSin 连接到 in(0)，获得最高优先级
  aw_arb.io.in(1) <> io.IFin.aw // IFin 连接到 in(1)，获得较低优先级
  io.out.aw <> aw_arb.io.out

  // chosen 信号: 0 表示 LSin 获胜, 1 表示 IFin 获胜
  val ar_chosen = ar_arb.io.chosen
  val aw_chosen = aw_arb.io.chosen

  // =================================================================
  // 2. 写数据通道 (W) - 跟随AW仲裁结果 (修复了致命bug)
  //    W通道不能有独立仲裁，必须跟随AW通道的选择
  // =================================================================

  when(aw_chosen === 0.U) { // 0.U 对应 in(0)，即 LSin
    io.out.w <> io.LSin.w
    io.IFin.w.ready := false.B // 未被选中的通道必须设置 ready 为 false
  } .otherwise { // 1.U 对应 in(1)，即 IFin
    io.out.w <> io.IFin.w
    io.LSin.w.ready := false.B
  }

  // =================================================================
  // 3. 有状态的响应通道路由 (R, B) (修复了协议bug)
  //    必须记录请求的来源，因为响应返回时仲裁器的选择可能已改变
  // =================================================================

  // 寄存器用于锁存当前正在处理的事务来自哪个源
  val read_source_reg = Reg(UInt(1.W))
  val write_source_reg = Reg(UInt(1.W))

  // 当一个请求被下游接受时 (fire)，记录它的来源
  when(io.out.ar.fire) {
    read_source_reg := ar_chosen
  }
  when(io.out.aw.fire) {
    write_source_reg := aw_chosen
  }

  // ---- 设置默认值以避免生成锁存器 ----
  io.IFin.r.valid := false.B
  io.LSin.r.valid := false.B
  io.out.r.ready  := false.B
  io.IFin.b.valid := false.B
  io.LSin.b.valid := false.B
  io.out.b.ready  := false.B

  // ---- 读响应 (R) 路由 ----
  io.IFin.r.bits := io.out.r.bits
  io.LSin.r.bits := io.out.r.bits

  when(read_source_reg === 0.U) { // 0.U 对应 LSin
    io.LSin.r.valid := io.out.r.valid
    io.out.r.ready  := io.LSin.r.ready
  } .otherwise { // 1.U 对应 IFin
    io.IFin.r.valid := io.out.r.valid
    io.out.r.ready  := io.IFin.r.ready
  }

  // ---- 写响应 (B) 路由 ----
  io.IFin.b.bits := io.out.b.bits
  io.LSin.b.bits := io.out.b.bits

  when(write_source_reg === 0.U) { // 0.U 对应 LSin
    io.LSin.b.valid := io.out.b.valid
    io.out.b.ready  := io.LSin.b.ready
  } .otherwise { // 1.U 对应 IFin
    io.IFin.b.valid := io.out.b.valid
    io.out.b.ready  := io.IFin.b.ready
  }
}