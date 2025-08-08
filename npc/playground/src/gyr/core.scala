package gyr

import chisel3._
import chisel3.util._
import gyr.tool.BusConn
import gyr.tool.ConnLog

//class ReadyLog extends Bundle  {
//  val ready1 = Output(Bool())
//  val ready2 = Output(Bool())
//  val ready3 = Output(Bool())
//  val ready4 = Output(Bool())
//  val ready5 = Output(Bool())
//}
//class ValidLog extends Bundle {
//  val valid1 = Output(Bool())
//  val valid2 = Output(Bool())
//  val valid3 = Output(Bool())
//  val valid4 = Output(Bool())
//  val valid5 = Output(Bool())
//}
class core extends Module{
  val io = IO(new Bundle {
    val debugPC = Output(UInt(32.W)) // 用于调试的PC输出
    val debugInst = Output(UInt(32.W)) // 用于调试的指令输出
    val debugin1  =Output(UInt(32.W)) // 用于调试的输入信号1
    val debugin2  =Output(UInt(32.W)) // 用于调试的输入信号2
    val debugout1 = Output(UInt(32.W)) // 用于调试的输出信号1
    val debugmemaddr = Output(UInt(32.W)) // 用于调试的内存地址
    val debugmemdata = Output(UInt(32.W)) // 用于调试的内存数据
    val debugwaddr = Output(UInt(32.W)) // 用于调试的写地址
    val debugwdata = Output(UInt(32.W)) // 用于调试的写
    val inst_done = Output(Bool()) // 用于指示指令是否完成
    val ls_done    =Output(Bool()) // 用于指示PC选择信号
    val ecall = Output(Bool())

  })
 // val commit = Module(new CommitDPI)
  val Fsram = Module(new SRAM)
  val Lsram = Module(new SRAM)
  val IFU = Module(new Fetch)
  val IDU = Module(new Decode)
  val EXU= Module(new Execute)
  val rf  = Module(new RegFile)
  val LSU= Module(new LoadSave)
  val WBU= Module(new WriteBack)
  val ebreak = Module(new ebreak)
  val csr = Module(new CSR)
  ebreak.io.clock := clock
  ebreak.io.en := IDU.io.ebreakhandler
  // --- 流水线连接 ---
  BusConn(IFU.io.axi.ar, Fsram.io.ar   )
  BusConn(Fsram.io.r, IFU.io.axi.r   )
  BusConn(IFU.io.axi.aw, Fsram.io.aw   )
  BusConn(Fsram.io.b, IFU.io.axi.b   )
  BusConn(IFU.io.axi.w, Fsram.io.w   )

  BusConn(LSU.io.axi.ar, Lsram.io.ar   )
  BusConn(Lsram.io.r, LSU.io.axi.r   )
  BusConn(LSU.io.axi.aw, Lsram.io.aw   )
  BusConn(Lsram.io.b, LSU.io.axi.b   )
  BusConn(LSU.io.axi.w, Lsram.io.w   )

  BusConn(IFU.io.out, IDU.io.in   )
  BusConn(IDU.io.out, EXU.io.in   )

  rf.io.d2r <> IDU.io.d2r
  IDU.io.r2d <>  rf.io.r2e
  csr.io.read <> IDU.io.csr
  csr.io.write <> EXU.io.csr
  BusConn(EXU.io.out, LSU.io.in   )
  BusConn(LSU.io.out, WBU.io.in   )
  // The following connections are commented out because they use an older interface
  // that's not compatible with the current AXI interface
  //  BusConn(LSU.io.sram.req, Lsram.io.req   )
  //  BusConn(Lsram.io.resp, LSU.io.sram.resp   )
  WBU.io.out<>rf.io.w2r
  // Replace BusConn with direct connections to ensure correct signal direction

  IFU.io.in := WBU.io.w2f


  // Connect Execute's PC control signals to Fetch
  IFU.io.e2f.pcSrc := EXU.io.pcCtrl.pcSel
  IFU.io.e2f.dnpc := EXU.io.pcCtrl.dnpc

  // --- 连接调试信号 ---
  // 从取指单元 (IFU) 获取 PC 和指令
  io.debugPC    := IFU.io.pc
  io.debugInst  := IFU.io.out.bits.inst

  // 从执行单元 (EXU) 获取 ALU 的输入和输出
  io.debugin1   := IDU.io.out.bits.rs1_data
  io.debugin2   := IDU.io.out.bits.rs2_data
  io.debugout1  := EXU.io.out.bits.rd_data

  // 连接内存调试信号
  io.debugmemaddr := LSU.io.axi.ar.bits.addr // 使用读地址作为调试内存地址
  io.debugmemdata := LSU.io.axi.r.bits.data  // 使用读数据作为调试内存数据
  val LS_reg =RegNext(LSU.io.axi.r.valid ||LSU.io.axi.w.valid, init = false.B)

  io.inst_done := WBU.io.w2f.inst_done || LS_reg // 连接指令完成信号，包含 WBU 和 LSU 的状态
  io.ls_done := LSU.io.axi.w.valid || LSU.io.axi.r.valid // 连接加载/存储完成信号
  // 连接 WBU 的 LS 完成信号
  io.debugmemaddr := LSU.io.axi.ar.bits.addr // 使用读地址作为调试内存地址
  io.debugmemdata := LSU.io.axi.r.bits.data  // 使用读数据作为
  io.debugwaddr:= LSU.io.axi.aw.bits.addr // 使用写地址作为调试写地址
  io.debugwdata:= LSU.io.axi.w.bits.data  // 使用写数据作为调试写数据
  io.ecall := IDU.io.out.bits.ecall_en
}
