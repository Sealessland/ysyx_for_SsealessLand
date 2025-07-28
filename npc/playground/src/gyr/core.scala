package gyr

import chisel3._
import chisel3.util._
import gyr.tool.BusConn
import gyr.tool.ConnLog

class ReadyLog extends Bundle  {
  val ready1 = Output(Bool())
  val ready2 = Output(Bool())
  val ready3 = Output(Bool())
  val ready4 = Output(Bool())
  val ready5 = Output(Bool())
}
class ValidLog extends Bundle {
  val valid1 = Output(Bool())
  val valid2 = Output(Bool())
  val valid3 = Output(Bool())
  val valid4 = Output(Bool())
  val valid5 = Output(Bool())
}
class core extends Module{
  val io = IO(new Bundle {
    val debugPC = Output(UInt(32.W)) // 用于调试的PC输出
    val debugInst = Output(UInt(32.W)) // 用于调试的指令输出
    val debugin1  =Output(UInt(32.W)) // 用于调试的输入信号1
    val debugin2  =Output(UInt(32.W)) // 用于调试的输入信号2
    val debugout1 = Output(UInt(32.W)) // 用于调试的输出信号1
    val debugmemaddr = Output(UInt(32.W)) // 用于调试的内存地址
    val debugmemdata = Output(UInt(32.W)) // 用于调试的内存数据
    val inst_done = Output(Bool()) // 用于指示指令是否完成
    val log= new ReadyLog
    val Log = new ValidLog

  })
  val Fsram = Module(new SRAM)
  val Lsram = Module(new SRAM)
  val IFU = Module(new Fetch)
  val IDU = Module(new Decode)
  val EXU= Module(new Execute)
  val RF  = Module(new RegFile)
  val LSU= Module(new LoadSave)
  val WBU= Module(new WriteBack)

  // --- 流水线连接 ---
  BusConn(IFU.io.out, IDU.io.in,ConnLog.apply)
  BusConn(IFU.io.sram.req,Fsram.io.req,ConnLog.apply)
  BusConn(Fsram.io.resp,IFU.io.sram.resp,ConnLog.apply)

  BusConn(IDU.io.out, EXU.io.in,ConnLog.apply)

  RF.io.d2r <> IDU.io.d2r
  IDU.io.r2d <>  RF.io.r2e
  BusConn(EXU.io.out, LSU.io.in,ConnLog.apply)
  BusConn(LSU.io.out, WBU.io.in,ConnLog.apply)
  BusConn(LSU.io.sram.req,Lsram.io.req,ConnLog.apply)
  BusConn(Lsram.io.resp,LSU.io.sram.resp,ConnLog.apply)
  WBU.io.out<>RF.io.w2r
  BusConn(WBU.io.w2f, IFU.io.in,ConnLog.apply)

  // --- 连接调试信号 ---
  // 从取指单元 (IFU) 获取 PC 和指令
  io.debugPC    := IFU.io.out.bits.pc
  io.debugInst  := IFU.io.out.bits.inst

  // 从执行单元 (EXU) 获取 ALU 的输入和输出
  io.debugin1   := IDU.io.out.bits.rs1_data
  io.debugin2   := IDU.io.out.bits.rs2_data
  io.debugout1  := EXU.io.out.bits.rd_data

  // 从访存单元 (LSU) 获取内存操作的地址和数据
  io.debugmemaddr := LSU.io.sram.req.bits.addr
  io.debugmemdata := LSU.io.sram.resp.bits.rdata
  io.inst_done := WBU.io.w2f.bits.inst_done // 指示指令是否完成

  io.log.ready1 := IDU.io.in.ready
  io.log.ready2 := EXU.io.in.ready
  io.log.ready3 := LSU.io.in.ready
  io.log.ready4 := WBU.io.in.ready
  io.log.ready5 := IFU.io.in.ready

  io.Log.valid1 := IFU.io.out.valid
  io.Log.valid2 := IDU.io.out.valid
  io.Log.valid3 := EXU.io.out.valid
  io.Log.valid4 := LSU.io.out.valid
  io.Log.valid5 := WBU.io.w2f.valid


}
