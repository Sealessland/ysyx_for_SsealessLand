package xininn
import chisel3._
import chisel3.util._


class Xbar extends Module {
  val io = IO(new Bundle {
    // 定义两个AXI从端口(输入)和一个AXI主端口(输出)
    val IFin = Flipped(new AXI)
    val LSin = Flipped(new AXI)
    val out = new AXI
  })

  // 1. 为每个 Master -> Slave 通道创建仲裁器
  val ar_arb = Module(new Arbiter(new AXIarChannel, 2))
  val aw_arb = Module(new Arbiter(new AXIawChannel, 2))
  val w_arb = Module(new Arbiter(new AXIwChannel, 2))

  // 2. 连接仲裁器的输入
  ar_arb.io.in(0) <> io.IFin.ar
  ar_arb.io.in(1) <> io.LSin.ar

  aw_arb.io.in(0) <> io.IFin.aw
  aw_arb.io.in(1) <> io.LSin.aw

  w_arb.io.in(0) <> io.IFin.w
  w_arb.io.in(1) <> io.LSin.w

  // 3. 连接仲裁器的输出到模块的输出
  io.out.ar <> ar_arb.io.out
  io.out.aw <> aw_arb.io.out
  io.out.w  <> w_arb.io.out

  // 4. 处理 Slave -> Master 的响应通道 (R 和 B)
  // 默认将输入端口的valid设为false，ready设为true
  io.IFin.r.valid := false.B
  io.LSin.r.valid := false.B
  io.IFin.b.valid := false.B
  io.LSin.b.valid := false.B

  io.IFin.r.bits := io.out.r.bits
  io.LSin.r.bits := io.out.r.bits
  io.IFin.b.bits := io.out.b.bits
  io.LSin.b.bits := io.out.b.bits

  io.out.r.ready := false.B
  io.out.b.ready := false.B

  // 根据读地址仲裁器的选择，将读响应(R)路由回正确的输入端口
  when(ar_arb.io.chosen === 0.U) {
    io.IFin.r.valid := io.out.r.valid
    io.out.r.ready := io.IFin.r.ready
  }.otherwise {
    io.LSin.r.valid := io.out.r.valid
    io.out.r.ready := io.LSin.r.ready
  }

  // 根据写地址仲裁器的选择，将写响应(B)路由回正确的输入端口
  when(aw_arb.io.chosen === 0.U) {
    io.IFin.b.valid := io.out.b.valid
    io.out.b.ready := io.IFin.b.ready
  }.otherwise {
    io.LSin.b.valid := io.out.b.valid
    io.out.b.ready := io.LSin.b.ready
  }
}