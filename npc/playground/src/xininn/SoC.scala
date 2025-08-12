package xininn

import chisel3._
import chisel3.util._
import chisel3.experimental.dataview._
import AXIdataview._ // 导入 DataView

class ysyx_23060321 extends Module {
  val io = IO(new Bundle {
    val master = new SoCAXI
    val slave = Flipped(new SoCAXI)
    val interrupt = Input(Bool())
  })

  // 获取结构化视图
  val master = io.master.viewAs[AXI]

  val slave  = io.slave.viewAs[AXI]
  val carry_pc = RegInit(0.U(32.W))
  val carry_inst = RegInit(0.U(32.W))

  // 将未使用的 slave 接口输出赋值为0
  slave.aw.ready := false.B
  slave.w.ready  := false.B
  slave.b.valid  := false.B
  slave.b.bits.bid   := 0.U
  slave.b.bits.bresp := 0.U
  slave.ar.ready := false.B
  slave.r.valid  := false.B
  slave.r.bits.rid   := 0.U
  slave.r.bits.rdata := 0.U
  slave.r.bits.rresp := 0.U
  slave.r.bits.rlast := false.B
  val ifu  = Module(new Fetch_v5)
  val idu  = Module(new IDU)
  val exu  = Module(new EXU)
  val lsu  = Module(new LSU)
  val wbu  = Module(new WBU)
  val xbar = Module(new Xbar)
  val rf   = Module(new RegFile)
  ifu.io.axi<>xbar.io.IFin
  lsu.io.axi<>xbar.io.LSin
  xbar.io.out<>master
  BusConn(ifu.io.out, idu.io.in)
  BusConn(idu.io.out, exu.io.in)
  BusConn(exu.io.out, lsu.io.in)
  BusConn(lsu.io.out, wbu.io.in)
  ifu.io.pcCtrl<>exu.io.pcCtrl
  val csr = Module(new CSR)
  idu.io.d2r<>rf.io.d2r
  idu.io.r2e <>  rf.io.r2e
  exu.io.csr<>csr.io
  wbu.io.out<>rf.io.w2r
  when(ifu.io.out.fire){
    carry_pc:=ifu.io.out.bits.pc
    carry_inst:=ifu.io.out.bits.inst
  }
  when(ifu.io.out.fire){
    InstCounter(enable = lsu.io.out.fire,  inst = carry_inst,clock = clock )
  }
}



class core extends Module{
  val io =IO(new Bundle {
    val debugPC = Output(UInt(32.W)) // 用于调试的PC输出
    val debugInst = Output(UInt(32.W)) // 用于调试
    val inst_done = Output(Bool())
  })
  val ifu  = Module(new Fetch_v5)
  val idu  = Module(new IDU)
  val exu  = Module(new EXU)
  val lsu  = Module(new LSU)
  val wbu  = Module(new WBU)
  val rf   = Module(new RegFile)
  val csr = Module(new CSR)

  io.debugPC:=ifu.io.out.bits.pc
  io.debugInst:=ifu.io.out.bits.inst
  BusConn(ifu.io.out, idu.io.in)
  BusConn(idu.io.out, exu.io.in)
  BusConn(exu.io.out, lsu.io.in)
  BusConn(lsu.io.out, wbu.io.in)
  idu.io.d2r<>rf.io.d2r
  idu.io.r2e <>  rf.io.r2e
  exu.io.csr<>csr.io
  wbu.io.out<>rf.io.w2r
  ifu.io.pcCtrl<>exu.io.pcCtrl

  val if_sram =Module(new SRAM)
  val ls_sram =Module(new SRAM)

  if_sram.io.ar.valid       := ifu.io.axi.ar.valid
  if_sram.io.ar.bits.addr   := ifu.io.axi.ar.bits.araddr
  ifu.io.axi.ar.ready       := if_sram.io.ar.ready
  // AXI4 Master 输出的 arid, arlen, arsize, arburst 等信号被自动忽略

  // --- 2. 读数据通道 (R: Slave -> Master) ---
  ifu.io.axi.r.valid        := if_sram.io.r.valid
  ifu.io.axi.r.bits.rdata   := if_sram.io.r.bits.data
  ifu.io.axi.r.bits.rresp   := if_sram.io.r.bits.resp
  if_sram.io.r.ready        := ifu.io.axi.r.ready
  // 为 AXI4 Master 的额外输入提供默认值
  ifu.io.axi.r.bits.rid     := 0.U(4.W) // AXI4-Lite 无ID，所以给0
  ifu.io.axi.r.bits.rlast   := true.B   // AXI4-Lite 总是单次传输，所以每次都是最后一次

  // --- IFU 的写通道 (如果存在) ---
  // 通常 IFU 是只读的，但如果你的设计中它有写通道，需要悬空
  ifu.io.axi.aw.ready := false.B // 表示Slave永远不准备好接收写地址
  ifu.io.axi.w.ready  := false.B // 表示Slave永远不准备好接收写数据
  if_sram.io.aw.bits.addr   := ifu.io.axi.aw.bits.awaddr
  if_sram.io.aw.valid       := ifu.io.axi.aw.valid
  if_sram.io.w.bits.data   :=0.U

  if_sram.io.w.bits.strb   :=0.U
  if_sram.io.w.valid       :=0.U
  if_sram.io.b.ready       :=0.U
  ifu.io.axi.b.valid  := false.B // 表示Slave永远没有写响应
  ifu.io.axi.b.bits   := 0.U.asTypeOf(new AXIbChannel)


  // =================================================================
  // 连接 LSU (AXI4 Master) 到 ls_sram (AXI4-Lite Slave)
  // LSU 有读写通道 (AR, R, AW, W, B)
  // =================================================================

  // --- 1. 读地址通道 (AR: Master -> Slave) ---
  ls_sram.io.ar.valid       := lsu.io.axi.ar.valid
  ls_sram.io.ar.bits.addr   := lsu.io.axi.ar.bits.araddr
  lsu.io.axi.ar.ready       := ls_sram.io.ar.ready
  // arid, arlen, arsize, arburst 被忽略

  // --- 2. 读数据通道 (R: Slave -> Master) ---
  lsu.io.axi.r.valid        := ls_sram.io.r.valid
  lsu.io.axi.r.bits.rdata   := ls_sram.io.r.bits.data
  lsu.io.axi.r.bits.rresp   := ls_sram.io.r.bits.resp
  ls_sram.io.r.ready        := lsu.io.axi.r.ready
  // 提供默认值
  lsu.io.axi.r.bits.rid     := 0.U(4.W)
  lsu.io.axi.r.bits.rlast   := true.B

  // --- 3. 写地址通道 (AW: Master -> Slave) ---
  ls_sram.io.aw.valid       := lsu.io.axi.aw.valid
  ls_sram.io.aw.bits.addr   := lsu.io.axi.aw.bits.awaddr
  lsu.io.axi.aw.ready       := ls_sram.io.aw.ready
  // awid, awlen, awsize, awburst 被忽略

  // --- 4. 写数据通道 (W: Master -> Slave) ---
  ls_sram.io.w.valid        := lsu.io.axi.w.valid
  ls_sram.io.w.bits.data    := lsu.io.axi.w.bits.wdata
  ls_sram.io.w.bits.strb    := lsu.io.axi.w.bits.wstrb
  lsu.io.axi.w.ready        := ls_sram.io.w.ready
  // wlast 被忽略

  // --- 5. 写响应通道 (B: Slave -> Master) ---
  lsu.io.axi.b.valid        := ls_sram.io.b.valid
  lsu.io.axi.b.bits.bresp   := ls_sram.io.b.bits.resp
  ls_sram.io.b.ready        := lsu.io.axi.b.ready
  // 提供默认值
  val LS_reg =RegNext(ls_sram.io.r.valid ||ls_sram.io.w.valid, init = false.B)
  io.inst_done:=LS_reg||wbu.io.w2f.inst_done
  lsu.io.axi.b.bits.bid     := 0.U(4.W) // AXI4-Lite 无ID，所以给0


}