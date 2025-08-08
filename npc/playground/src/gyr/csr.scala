package gyr
import chisel3._
import chisel3.util._

class csrR extends Bundle {
  val csrAddr = Input(UInt(12.W)) // CSR 地址
  val csrData = Output(UInt(32.W)) // CSR 读数据
}
class csrW extends Bundle{
  val addr = Input(UInt(12.W)) // CSR 地址
  val data = Input(UInt(32.W)) // CSR 写数据
  val wen = Input(Bool()) // CSR 写使能
}
// ==========================================================


// ==========================================================
// 修改点 1: 创建一个新的顶层IO Bundle
// This combines the read and write ports into a single IO for the module.
class CSRModuleIO extends Bundle {
  val read = new csrR()
  val write = new csrW()
}

class CSR extends Module {

  // 修改点 2: 使用新的顶层IO Bundle
  val io = IO(new CSRModuleIO())

  // CSR 地址常量 (保持不变)
  val MSTATUS = 0x300.U(12.W)
  val MTVEC   = 0x305.U(12.W)
  val MEPC    = 0x341.U(12.W)
  val MCAUSE  = 0x342.U(12.W)

  // CSR 寄存器实例化 (保持不变)
  val mstatus = RegInit(0.U(32.W))
  val mtvec   = RegInit(0.U(32.W))
  val mepc    = RegInit(0.U(32.W))
  val mcause  = RegInit(0.U(32.W))
  mcause := 0xb.U
  mstatus := 0x1800.U // MIE = 1, MPIE = 1, MPP = 0b11 (Machine mode)
  // 修改点 3: 写操作逻辑现在使用 io.write 接口
  when(io.write.wen) {
    switch(io.write.addr) {
      is(MSTATUS) { mstatus := io.write.data }
      is(MTVEC)   { mtvec   := io.write.data }
      is(MEPC)    { mepc    := io.write.data }
      is(MCAUSE)  { mcause  := io.write.data }
    }
  }

  // 修改点 4: 读操作逻辑现在使用 io.read 接口
  io.read.csrData := MuxLookup(io.read.csrAddr, 0.U(32.W))(Seq(
    MSTATUS -> mstatus,
    MTVEC   -> mtvec,
    MEPC    -> mepc,
    MCAUSE  -> mcause
  ))

}