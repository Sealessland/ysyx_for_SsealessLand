package  dxy
import chisel3._
import chisel3.util._
import chisel3.experimental._

class execution extends Module {
  val io = IO(new Bundle {
    val rs1_data = Input(UInt(32.W))
    val rs2_data = Input(UInt(32.W))
    val opcode   = Input(UInt(8.W))
    val imm      = Input(UInt(32.W))
    val rdEn     = Input(Bool())
    val rd_data  = Output(UInt(32.W))
    val next_pc  = Output(UInt(32.W))
    val pc       = Input(UInt(32.W))
    // 添加内存访问状态信号
    val mem_busy = Output(Bool())
  })

  val alu_out = Wire(UInt(32.W))
  alu_out := 0.U
  io.next_pc := io.pc + 4.U

  val read  = Module(new readDelay)
  val write = Module(new DPIWriteMemory)

  // Initialize read module connections
  read.io.mem_ren := false.B // 默认设置为 false
  read.io.mem_addr := 0.U
  read.io.data_len := 0.U // 默认为字节访问

  // Initialize write module connections
  write.io.clock := clock
  write.io.reset := reset
  write.io.mem_wen := false.B
  write.io.mem_addr := 0.U
  write.io.data_len := 0.U // 默认为字节访问
  write.io.mem_wdata := 0.U

  // 内存访问状态控制
  val is_load = Wire(Bool())
  val is_store = Wire(Bool())
  val mem_state = RegInit(0.U(2.W))  // 0: 空闲, 1: 读请求发送, 2: 读数据等待, 3: 写请求发送
  val mem_addr_reg = RegInit(0.U(32.W))
  val mem_data_reg = RegInit(0.U(32.W))
  val mem_size_reg = RegInit(0.U(2.W))
  val mem_op_reg = RegInit(0.U(8.W))

  // 引入流水线寄存器来暂存从内存读取的数据
  val mem_rdata_reg = RegInit(0.U(32.W))

  // 初始化内存操作信号
  is_load := false.B
  is_store := false.B
  io.mem_busy := (mem_state =/= 0.U)


  switch(io.opcode) {
    is("b00000001".U) { // add
      alu_out := io.rs1_data + io.rs2_data
    }
    is("b00000010".U) { // sub
      alu_out := io.rs1_data - io.rs2_data
    }
    is("b00000011".U) { // sll
      alu_out := io.rs1_data << io.rs2_data(4, 0)
    }
    is("b00000100".U) { // slt
      alu_out := Mux(io.rs1_data.asSInt < io.rs2_data.asSInt, 1.U, 0.U)
    }
    is("b00000101".U) { // sltu
      alu_out := Mux(io.rs1_data < io.rs2_data, 1.U, 0.U)
    }
    is("b00000110".U) { // xor
      alu_out := io.rs1_data ^ io.rs2_data
    }
    is("b00000111".U) { // srl
      alu_out := io.rs1_data >> io.rs2_data(4, 0)
    }
    is("b00001000".U) { // sra
      alu_out := (io.rs1_data.asSInt >> io.rs2_data(4, 0)).asUInt
    }
    is("b00001001".U) { // or
      alu_out := io.rs1_data | io.rs2_data
    }
    is("b00001010".U) { // and
      alu_out := io.rs1_data & io.rs2_data
    }
    is("b00001011".U) { // addi
      alu_out := io.rs1_data + io.imm
    }
    is("b00001100".U) { // slti
      alu_out := Mux(io.rs1_data.asSInt < io.imm.asSInt, 1.U, 0.U)
    }
    is("b00001101".U) { // sltiu
      alu_out := Mux(io.rs1_data < io.imm, 1.U, 0.U)
    }
    is("b00001110".U) { // xori
      alu_out := io.rs1_data ^ io.imm
    }
    is("b00001111".U) { // ori
      alu_out := io.rs1_data | io.imm
    }
    is("b00010000".U) { // andi
      alu_out := io.rs1_data & io.imm
    }
    is("b00010001".U) { // slli
      alu_out := io.rs1_data << io.imm(4, 0)
    }
    is("b00010010".U) { // srli
      alu_out := io.rs1_data >> io.imm(4, 0)
    }
    is("b00010011".U) { // srai
      alu_out := (io.rs1_data.asSInt >> io.imm(4, 0)).asUInt
    }
    is("b00010100".U) { // lb
      is_load := true.B
      when(mem_state === 0.U) {
        mem_addr_reg := io.rs1_data + io.imm
        mem_size_reg := 0.U // 字节
        mem_op_reg := io.opcode
      }
    }
    is("b00010101".U) { // lh
      is_load := true.B
      when(mem_state === 0.U) {
        mem_addr_reg := io.rs1_data + io.imm
        mem_size_reg := 1.U // 半字
        mem_op_reg := io.opcode
      }
    }
    is("b00010110".U) { // lw
      is_load := true.B
      when(mem_state === 0.U) {
        mem_addr_reg := io.rs1_data + io.imm
        mem_size_reg := 2.U // 字
        mem_op_reg := io.opcode
      }
    }
    is("b00010111".U) { // lbu
      is_load := true.B
      when(mem_state === 0.U) {
        mem_addr_reg := io.rs1_data + io.imm
        mem_size_reg := 0.U // 字节
        mem_op_reg := io.opcode
      }
    }
    is("b00011000".U) { // lhu
      is_load := true.B
      when(mem_state === 0.U) {
        mem_addr_reg := io.rs1_data + io.imm
        mem_size_reg := 1.U // 半字
        mem_op_reg := io.opcode
      }
    }
    is("b00011001".U) { // sb
      is_store := true.B
      when(mem_state === 0.U) {
        mem_addr_reg := io.rs1_data + io.imm
        mem_data_reg := io.rs2_data
        mem_size_reg := 0.U // 字节
        mem_op_reg := io.opcode
      }
      alu_out := 0.U
    }
    is("b00011010".U) { // sh
      is_store := true.B
      when(mem_state === 0.U) {
        mem_addr_reg := io.rs1_data + io.imm
        mem_data_reg := io.rs2_data
        mem_size_reg := 1.U // 半字
        mem_op_reg := io.opcode
      }
      alu_out := 0.U
    }
    is("b00011011".U) { // sw
      is_store := true.B
      when(mem_state === 0.U) {
        mem_addr_reg := io.rs1_data + io.imm
        mem_data_reg := io.rs2_data
        mem_size_reg := 2.U // 字
        mem_op_reg := io.opcode
      }
      alu_out := 0.U
    }
    is("b00011100".U){ // beq
      io.next_pc := Mux(io.rs1_data === io.rs2_data, io.pc + io.imm, io.pc + 4.U)
    }
    is("b00011101".U){ // bne
      io.next_pc := Mux(io.rs1_data =/= io.rs2_data, io.pc + io.imm, io.pc + 4.U)
    }
    is("b00011110".U){ // blt
      io.next_pc := Mux(io.rs1_data.asSInt < io.rs2_data.asSInt, io.pc + io.imm, io.pc + 4.U)
    }
    is("b00011111".U){ // bge
      io.next_pc := Mux(io.rs1_data.asSInt >= io.rs2_data.asSInt, io.pc + io.imm, io.pc + 4.U)
    }
    is("b00100000".U){ // bltu
      io.next_pc := Mux(io.rs1_data < io.rs2_data, io.pc + io.imm, io.pc + 4.U)
    }
    is("b00100001".U){ // bgeu
      io.next_pc := Mux(io.rs1_data >= io.rs2_data, io.pc + io.imm, io.pc + 4.U)
    }
    is("b00100010".U){ // jal
      io.next_pc := io.pc + io.imm
      alu_out := io.pc + 4.U
    }
    is("b00100011".U){ // jalr
      io.next_pc := ((io.rs1_data + io.imm) & (~(1.U(32.W))).asUInt).asUInt
      alu_out := io.pc + 4.U
    }
    is("b00100100".U) { // lui
      alu_out := io.imm
    }
    is("b00100101".U) { // auipc
      alu_out := io.pc + io.imm
    }
  }

  // 内存访问状态机
  switch(mem_state) {
    is(0.U) { // 空闲状态
      when(is_load) {
        // 开始读请求
        mem_state := 1.U
      }.elsewhen(is_store) {
        // 开始写请求
        mem_state := 3.U
      }
    }

    is(1.U) { // 读请求发送状态
      // 发送读请求，包括地址和数据长度
      read.io.mem_ren := true.B
      read.io.mem_addr := mem_addr_reg
      read.io.data_len := mem_size_reg
      // 转到等待状态
      mem_state := 2.U
    }

    is(2.U) { // 读数据等待状态
      // 读取数据
      mem_rdata_reg := read.io.mem_rdata
      // 处理不同类型的加载指令
      when(mem_op_reg === "b00010100".U) { // lb
        alu_out := Cat(Fill(24, read.io.mem_rdata(7)), read.io.mem_rdata(7, 0))
      }.elsewhen(mem_op_reg === "b00010101".U) { // lh
        alu_out := Cat(Fill(16, read.io.mem_rdata(15)), read.io.mem_rdata(15, 0))
      }.elsewhen(mem_op_reg === "b00010110".U) { // lw
        alu_out := read.io.mem_rdata
      }.elsewhen(mem_op_reg === "b00010111".U) { // lbu
        alu_out := Cat(Fill(24, 0.U), read.io.mem_rdata(7, 0))
      }.elsewhen(mem_op_reg === "b00011000".U) { // lhu
        alu_out := Cat(Fill(16, 0.U), read.io.mem_rdata(15, 0))
      }
      // 返回空闲状态
      mem_state := 0.U
    }

    is(3.U) { // 写请求发送状态
      // 发送写请求
      write.io.mem_wen := true.B
      write.io.mem_addr := mem_addr_reg
      write.io.mem_wdata := mem_data_reg
      write.io.data_len := mem_size_reg
      // 返回空闲状态
      mem_state := 0.U
    }
  }

  // 使用 when 而不是 if 来避免类型不匹配错误
  when(io.rdEn) {
    io.rd_data := alu_out
  }.otherwise {
    io.rd_data := 0.U
  }
}
