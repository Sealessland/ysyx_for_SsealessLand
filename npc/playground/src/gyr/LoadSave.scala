package gyr

import chisel3._
import chisel3.util._
import gyr.tool._
import chisel3.experimental._

// =============================================================================
// IO Bundle Definitions
// =============================================================================
class L2W extends Bundle{
  val rd_en     = Bool()
  val rd_addr   = UInt(5.W)
  val rd_data   = UInt(32.W)
}


class LSBus extends Bundle{
  val in = Flipped(Decoupled(new E2L))
  val out = Decoupled(new L2W)
  val axi = Flipped(new AXI4)
}

// =============================================================================
// Corrected Load/Save Module Implementation
// =============================================================================
class LoadSave extends Module {
  val io = IO(new LSBus)

  // --- 1. State Machine Definition ---
  val s_idle :: s_read_addr :: s_read_resp :: s_write_addr_data :: s_write_resp :: Nil = Enum(5)
  val state = RegInit(s_idle)

  // --- 2. Register to hold instruction info during memory access ---
  val e2l_reg = Reg(new E2L)

  // --- 3. AXI Signal Defaults ---
  io.axi.ar.valid := false.B
  io.axi.ar.bits.addr := e2l_reg.mem_addr
  io.axi.r.ready := false.B
  io.axi.aw.valid := false.B
  io.axi.aw.bits.addr := e2l_reg.mem_addr
  io.axi.w.valid := false.B
  io.axi.b.ready := false.B

  // --- 4. Write Data & Strobe Generation (Using switch) ---
  val strb = Wire(UInt(4.W))
  val wdata = Wire(UInt(32.W))

  // 默认值
  strb := 0.U
  wdata := e2l_reg.mem_wdata // 默认情况下 (如SW)，使用完整的写数据

  // 使用 switch 语句替换 MuxLookup
  switch(e2l_reg.mem_len) {
    is("b000".U) { // Store Byte (SB)
      strb  := "b0001".U << e2l_reg.mem_addr(1,0)
      wdata := e2l_reg.mem_wdata(7,0) << (e2l_reg.mem_addr(1,0) << 3)
    }
    is("b001".U) { // Store Half-word (SH)
      strb  := "b0011".U << e2l_reg.mem_addr(1,0)
      wdata := e2l_reg.mem_wdata(15,0) << (e2l_reg.mem_addr(1,0) << 3)
    }
    is("b010".U) { // Store Word (SW)
      strb  := "b1111".U
      // wdata 使用默认值
    }
  }

  io.axi.w.bits.strb := strb
  io.axi.w.bits.data := wdata

  // --- 5. Output Signal Defaults ---
  io.out.valid := false.B
  io.out.bits := DontCare

  // --- 6. Core State Machine Logic (Corrected) ---
  io.in.ready := false.B // 默认不接收新指令

  // 判断是否为非访存指令 (直通)
  val is_passthrough = io.in.valid && !io.in.bits.mem_ren && !io.in.bits.mem_wen

  switch(state) {
    is(s_idle) {
      when(is_passthrough) {
        // --- 直通逻辑 ---
        // 直接连接输入和输出
        io.out.valid := io.in.valid
        io.out.bits.rd_en   := io.in.bits.rd_en
        io.out.bits.rd_addr := io.in.bits.rd_addr
        io.out.bits.rd_data := io.in.bits.rd_data

        // **关键修正**: ready信号直接由下游决定，打破环路
        io.in.ready := io.out.ready
        state := s_idle // 保持在空闲状态
      }.otherwise {
        // --- 访存或等待逻辑 ---
        io.in.ready := true.B
        when(io.in.fire) {
          e2l_reg := io.in.bits
          when(io.in.bits.mem_ren) {
            state := s_read_addr
          }.elsewhen(io.in.bits.mem_wen) {
            state := s_write_addr_data
          }
        }
      }
    }

    is(s_read_addr) {
      io.axi.ar.valid := true.B
      when(io.axi.ar.fire) {
        state := s_read_resp
      }
    }

    is(s_read_resp) {
      io.axi.r.ready := true.B
      when(io.axi.r.fire) {
        io.out.valid := true.B
        val rdata = io.axi.r.bits.data
        val addr_offset = e2l_reg.mem_addr(1,0)
        val final_data = Wire(UInt(32.W))
        final_data := 0.U // 默认值

        final_data := MuxLookup(e2l_reg.mem_len, 0.U)(Seq(
          "b0001".U -> Mux(e2l_reg.unsign_en, 
            Cat(Fill(24, 0.U), rdata(7,0)),        // unsigned: zero-extend
            Cat(Fill(24, rdata(7)), rdata(7,0))    // signed: sign-extend
          ),
          "b0011".U -> Mux(e2l_reg.unsign_en,
            Cat(Fill(16, 0.U), rdata(15,0)),       // unsigned: zero-extend  
            Cat(Fill(16, rdata(15)), rdata(15,0))  // signed: sign-extend
          ),
          "b1111".U -> rdata  // lw (32-bit load)
        ))

        io.out.bits.rd_en   := e2l_reg.rd_en
        io.out.bits.rd_addr := e2l_reg.rd_addr
        io.out.bits.rd_data := (final_data.asSInt >> (addr_offset << 3)).asUInt

        when(io.out.ready) {
          state := s_idle
        }
      }
    }

    is(s_write_addr_data) {
      io.axi.aw.valid := true.B
      io.axi.w.valid  := true.B
      when(io.axi.aw.fire && io.axi.w.fire) {
        state := s_write_resp
      }
    }

    is(s_write_resp) {
      io.axi.b.ready := true.B
      when(io.axi.b.fire) {
        io.out.valid := true.B
        io.out.bits.rd_en   := e2l_reg.rd_en
        io.out.bits.rd_addr := e2l_reg.rd_addr
        io.out.bits.rd_data := e2l_reg.rd_data

        when(io.out.ready) {
          state := s_idle
        }
      }
    }
  }
}