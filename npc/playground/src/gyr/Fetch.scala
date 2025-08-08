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
  val pc = Output(UInt(32.W))
}



class Fetch extends Module {
  val io = IO(new FUBus)

  // ---------------------------------------------------------------------------
  //  1. 内部状态和寄存器
  // ---------------------------------------------------------------------------

  // PC 寄存器，指向下一条将要获取的指令
  val pc = RegInit("h80000000".U(32.W))

  // 单项指令缓冲，用于解耦取指和译码
  // 当从AXI总线取回指令后，先存放在这里
  val inst_buf_valid = RegInit(false.B)
  val inst_buf_bits  = Reg(new F2D)

  // 状态机，管理AXI读事务
  val s_idle :: s_axi_read :: s_axi_wait :: Nil = Enum(3)
  val state = RegInit(s_idle)

  // ---------------------------------------------------------------------------
  //  2. 默认信号连接
  // ---------------------------------------------------------------------------

  // AXI 写通道默认无效，因为取指单元只读不写
  io.axi.aw.valid := false.B
  io.axi.aw.bits.addr := 0.U
  io.axi.w.valid := false.B
  io.axi.w.bits.data := 0.U
  io.axi.w.bits.strb := 0.U
  io.axi.b.ready := false.B

  // AXI 读通道默认信号
  io.axi.ar.valid := false.B
  io.axi.ar.bits.addr := pc
  io.axi.r.ready := false.B

  // 输出通道默认连接到指令缓冲
  io.out.valid     := inst_buf_valid
  io.out.bits      := inst_buf_bits

  // ---------------------------------------------------------------------------
  //  3. 核心控制逻辑
  // ---------------------------------------------------------------------------

  // 指令缓冲是否已满 (对于单项缓冲，就是valid位)
  // 这个信号用于实现反压：如果缓冲是满的，就不能再发起新的取指
  val buf_is_full = inst_buf_valid

  // 当下游(译码阶段)成功接收数据时，缓冲变为空闲
  when(io.out.fire) {
    inst_buf_valid := false.B
  }

  // AXI 读事务状态机
  switch(state) {
    is(s_idle) {
      // 在空闲状态，当缓冲有空位时，发起新的取指请求
      when(!buf_is_full) {
        state := s_axi_read
      }
    }

    is(s_axi_read) {
      // 发送读地址请求
      io.axi.ar.valid := true.B
      io.axi.ar.bits.addr := pc

      when(io.axi.ar.fire) { // 当地址被总线接受
        state := s_axi_wait
      }
    }

    is(s_axi_wait) {
      // 准备接收读数据
      io.axi.r.ready := true.B

      when(io.axi.r.fire) { // 当数据成功返回
        // 将收到的数据填入指令缓冲
        inst_buf_valid := true.B
        // 注意：AXI数据位宽可能是64位，而指令是32位。
        // 这里假设指令在低32位。如果不对，需要根据PC的最低位选择。
        inst_buf_bits.inst := io.axi.r.bits.data(31, 0)
        inst_buf_bits.pc   := pc

        // PC更新，指向下一条指令
        pc := pc + 4.U

        // 一次完整的事务结束，返回空闲状态
        state := s_idle
      }
    }
  }

  // ---------------------------------------------------------------------------
  //  4. 分支/跳转冲刷逻辑 (最高优先级)
  // ---------------------------------------------------------------------------

  // 当执行阶段发出跳转信号时，必须冲刷流水线
  when(io.e2f.pcSrc) {
    // 强制将PC更新为跳转目标地址
    pc := io.e2f.dnpc

    // 强制状态机复位到空闲状态，取消任何正在进行的AXI事务
    state := s_idle

    // 清空指令缓冲，使当前输出无效
    inst_buf_valid := false.B
    buf_is_full := false.B
    inst_buf_bits.inst := 0.U
    inst_buf_valid := false.B
    inst_buf_bits.pc   := 0.U
    pc := io.e2f.dnpc // 更新PC到跳转目标
  }

  // `io.in.inst_done` 信号在此设计中未使用。
  // 如果需要，它可以用来触发性能计数器或实现其他控制逻辑。
  io.pc:= pc // 输出当前PC值
}
