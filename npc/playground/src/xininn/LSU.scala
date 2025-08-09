package xininn

import chisel3._
import chisel3.util._
import AXIUtils._

// =============================================================================
// IO Bundle Definitions (LSU side)
// =============================================================================
class L2W extends Bundle{
  val rd_en   = Bool()
  val rd_addr = UInt(5.W)
  val rd_data = UInt(32.W)
  val ls_en   = Bool() // true when instruction bypassed LSU (non-memory)
}

class LSBus extends Bundle{
  val in  = Flipped(Decoupled(new E2L))
  val out = Decoupled(new L2W)
  val axi = new AXI
}

// Passive snapshot bundle for LSU register stage
class E2LReg extends Bundle{
  val rd_en   = Bool()
  val rd_addr = UInt(5.W)
  val rd_data = UInt(32.W)
  val mem_en  = Bool()
  val mem_wr  = UInt(2.W)
  val mlen    = UInt(3.W)
  val wdata   = UInt(32.W)
  val maddr   = UInt(32.W)
}

class LSU extends Module {
  val io = IO(new LSBus)

  // --- 1. State Machine Definition ---
  val sIdle :: sReadAddr :: sReadResp :: sWriteAddrData :: sWriteResp :: Nil = Enum(5)
  val state = RegInit(sIdle)

  // --- 2. Latch request ---
  val e2l_reg = Reg(new E2LReg)

  // --- 3. AXI defaults ---
  drive_aw_defaults(io.axi.aw)
  drive_w_defaults(io.axi.w)
  drive_ar_defaults(io.axi.ar)
  io.axi.r.ready := false.B
  io.axi.b.ready := false.B

  // --- 4. Output defaults ---
  io.out.valid := false.B
  io.out.bits  := 0.U.asTypeOf(io.out.bits)

  // --- 5. Handshake default ---
  io.in.ready := false.B

  // 判断是否为非访存指令 (直通)
  val isPassthrough = io.in.valid && !io.in.bits.mem_en
  io.out.bits.ls_en := isPassthrough

  switch(state) {
    is(sIdle) {
      when(isPassthrough) {
        // 直通非访存指令
        io.out.valid         := io.in.valid
        io.out.bits.rd_en    := io.in.bits.rd_en
        io.out.bits.rd_addr  := io.in.bits.rd_addr
        io.out.bits.rd_data  := io.in.bits.rd_data
        io.in.ready          := io.out.ready
      }.otherwise {
        io.in.ready := true.B
        when(io.in.fire) {
          e2l_reg.rd_en   := io.in.bits.rd_en
          e2l_reg.rd_addr := io.in.bits.rd_addr
          e2l_reg.rd_data := io.in.bits.rd_data
          e2l_reg.mem_en  := io.in.bits.mem_en
          e2l_reg.mem_wr  := io.in.bits.mem_wr
          e2l_reg.mlen    := io.in.bits.mlen
          e2l_reg.wdata   := io.in.bits.wdata
          e2l_reg.maddr   := io.in.bits.maddr
          when(io.in.bits.mem_en) {
            when(io.in.bits.mem_wr === "b01".U) { // load
              state := sReadAddr
            }.elsewhen(io.in.bits.mem_wr === "b10".U) { // store
              state := sWriteAddrData
            }
          }
        }
      }
    }

    // ---------------- Read Path ----------------
    is(sReadAddr) {
      io.axi.ar.valid          := true.B
      io.axi.ar.bits.arid      := 0.U
      io.axi.ar.bits.araddr    := e2l_reg.maddr
      io.axi.ar.bits.arlen     := 0.U // single beat
      io.axi.ar.bits.arsize    := e2l_reg.mlen // mlen 直接作为 size
      io.axi.ar.bits.arburst   := 1.U // INCR
      when(io.axi.ar.fire) { state := sReadResp }
    }

    is(sReadResp) {
      io.axi.r.ready := true.B
      when(io.axi.r.fire) {
        val rdata = io.axi.r.bits.rdata
        val off   = e2l_reg.maddr(1,0)
        val size  = e2l_reg.mlen
        val finalData = Wire(UInt(32.W))
        val loadByte  = (rdata >> (off * 8.U))(7,0)
        val loadHalf  = Mux(off(1), rdata(31,16), rdata(15,0))
        finalData := rdata
        when(size === 0.U) {            // LB/LBU -> 8-bit, zero-extend
          finalData := Cat(0.U(24.W), loadByte)
        }.elsewhen(size === 1.U) {      // LH/LHU -> 16-bit, zero-extend
          finalData := Cat(0.U(16.W), loadHalf)
        }.elsewhen(size === 2.U) {      // LW -> 32-bit
          finalData := rdata
        }

        io.out.valid        := true.B
        io.out.bits.rd_en   := e2l_reg.rd_en
        io.out.bits.rd_addr := e2l_reg.rd_addr
        io.out.bits.rd_data := finalData
        when(io.out.ready) { state := sIdle }
      }
    }

    // ---------------- Write Path ----------------
    is(sWriteAddrData) {
      // AW channel
      io.axi.aw.valid          := true.B
      io.axi.aw.bits.awid      := 0.U
      io.axi.aw.bits.awaddr    := e2l_reg.maddr
      io.axi.aw.bits.awlen     := 0.U // single beat
      io.axi.aw.bits.awsize    := e2l_reg.mlen // mlen 直接作为 size
      io.axi.aw.bits.awburst   := 1.U // INCR

      // W channel with byte/half/word alignment
      io.axi.w.valid           := true.B
      val off   = e2l_reg.maddr(1,0)
      val size  = e2l_reg.mlen
      val wstrb = WireDefault(0.U(4.W))
      val wdata = Wire(UInt(32.W))
      wdata := 0.U
      when(size === 0.U) { // SB
        wstrb := (1.U(4.W) << off).asUInt
        val byte = e2l_reg.wdata(7,0)
        wdata := (byte << (off * 8.U)).asUInt
      }.elsewhen(size === 1.U) { // SH
        wstrb := Mux(off(1), "b1100".U, "b0011".U)
        val half = e2l_reg.wdata(15,0)
        wdata := Mux(off(1), (half << 16).asUInt, half)
      }.elsewhen(size === 2.U) { // SW
        wstrb := "b1111".U
        wdata := e2l_reg.wdata
      }
      io.axi.w.bits.wstrb := wstrb
      io.axi.w.bits.wdata := wdata
      io.axi.w.bits.wlast := true.B

      when(io.axi.aw.fire && io.axi.w.fire) {
        state := sWriteResp
      }
    }

    is(sWriteResp) {
      io.axi.b.ready := true.B
      when(io.axi.b.fire) {
        io.out.valid        := true.B
        io.out.bits.rd_en   := e2l_reg.rd_en
        io.out.bits.rd_addr := e2l_reg.rd_addr
        io.out.bits.rd_data := e2l_reg.rd_data
        when(io.out.ready) { state := sIdle }
      }
    }
  }
}