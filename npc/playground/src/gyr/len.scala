package gyr

import chisel3.ChiselEnum
import chisel3.util._
import chisel3._
object MemLen extends ChiselEnum {
  val BYTE = Value(1.U)    // 1字节
  val HALF = Value(2.U)    // 2字节
  val WORD = Value(4.U)    // 4字节
  val DWORD = Value(8.U)   // 8字节
}

