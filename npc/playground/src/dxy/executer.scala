package dxy
import chisel3._
import chisel3.util._

class executer extends Module {
  val io = IO(new Bundle {
    // 输入信号
    val opcode = Input(UInt(8.W))
    val rs1_addr = Input(UInt(5.W))
    val rs2_addr = Input(UInt(5.W))
    val rd_addr = Input(UInt(5.W))
    val rs1_en = Input(Bool())
    val rs2_en = Input(Bool())
    val rd_en = Input(Bool())
    val imm = Input(UInt(32.W))
    val pc = Input(UInt(32.W))

    // 寄存器数据输入
    val rs1_data = Input(UInt(32.W))
    val rs2_data = Input(UInt(32.W))

    // 内存数据输入 - 新增接口用于接收内存读取数据
    val mem_rdata = Input(UInt(32.W))

    // 输出信号
    val alu_output = Output(UInt(32.W))  // ALU计算结果
    val rd_data = Output(UInt(32.W))     // 写入目标寄存器的数据
    val rd_wen = Output(Bool())          // 目标寄存器写入使能
    val mem_wen = Output(Bool())         // 内存写入使能
    val mem_ren = Output(Bool())         // 内存读取使能
    val mem_addr = Output(UInt(32.W))    // 内存访问地址
    val mem_wdata = Output(UInt(32.W))   // 写入内存的数据
    val next_pc = Output(UInt(32.W))     // 下一条指令地址
    val branch_taken = Output(Bool())    // 分支是否被采纳
  })

  // 默认值设置
  io.rd_wen := io.rd_en
  io.mem_wen := false.B
  io.mem_ren := false.B
  io.mem_addr := 0.U
  io.mem_wdata := 0.U
  io.branch_taken := false.B
  io.next_pc := io.pc + 4.U  // 默认PC+4

  // ALU操作结果
  val alu_out = Wire(UInt(32.W))
  alu_out := 0.U
  io.alu_output := alu_out
  io.rd_data := alu_out  // 默认写回ALU结果

  // 基于opcode执行相应操作
  switch(io.opcode) {
    // R型指令 - 寄存器-寄存器运算
    is(1.U) { alu_out := io.rs1_data + io.rs2_data }                     // add
    is(2.U) { alu_out := io.rs1_data - io.rs2_data }                     // sub
    is(3.U) { alu_out := io.rs1_data << io.rs2_data(4, 0) }              // sll
    is(4.U) { alu_out := (io.rs1_data.asSInt < io.rs2_data.asSInt).asUInt } // slt
    is(5.U) { alu_out := (io.rs1_data < io.rs2_data).asUInt }            // sltu
    is(6.U) { alu_out := io.rs1_data ^ io.rs2_data }                     // xor
    is(7.U) { alu_out := io.rs1_data >> io.rs2_data(4, 0) }              // srl
    is(8.U) { alu_out := (io.rs1_data.asSInt >> io.rs2_data(4, 0)).asUInt } // sra
    is(9.U) { alu_out := io.rs1_data | io.rs2_data }                     // or
    is(10.U) { alu_out := io.rs1_data & io.rs2_data }                    // and

    // I型指令 - 立即数运算
    is(11.U) { alu_out := io.rs1_data + io.imm }                         // addi
    is(12.U) { alu_out := (io.rs1_data.asSInt < io.imm.asSInt).asUInt }  // slti
    is(13.U) { alu_out := (io.rs1_data < io.imm).asUInt }                // sltiu
    is(14.U) { alu_out := io.rs1_data ^ io.imm }                         // xori
    is(15.U) { alu_out := io.rs1_data | io.imm }                         // ori
    is(16.U) { alu_out := io.rs1_data & io.imm }                         // andi
    is(17.U) { alu_out := io.rs1_data << io.imm(4, 0) }                  // slli
    is(18.U) { alu_out := io.rs1_data >> io.imm(4, 0) }                  // srli
    is(19.U) { alu_out := (io.rs1_data.asSInt >> io.imm(4, 0)).asUInt }  // srai

    // 加载指令 - 修正后使用mem_rdata而非alu_output
    is(20.U) { // lb
      io.mem_ren := true.B
      io.mem_addr := io.rs1_data + io.imm
      io.rd_data := Cat(Fill(24, io.mem_rdata(7)), io.mem_rdata(7, 0))
    }
    is(21.U) { // lh
      io.mem_ren := true.B
      io.mem_addr := io.rs1_data + io.imm
      io.rd_data := Cat(Fill(16, io.mem_rdata(15)), io.mem_rdata(15, 0))
    }
    is(22.U) { // lw
      io.mem_ren := true.B
      io.mem_addr := io.rs1_data + io.imm
      io.rd_data := io.mem_rdata
    }
    is(23.U) { // lbu
      io.mem_ren := true.B
      io.mem_addr := io.rs1_data + io.imm
      io.rd_data := Cat(0.U(24.W), io.mem_rdata(7, 0))
    }
    is(24.U) { // lhu
      io.mem_ren := true.B
      io.mem_addr := io.rs1_data + io.imm
      io.rd_data := Cat(0.U(16.W), io.mem_rdata(15, 0))
    }

    // 存储指令
    is(25.U) { // sb
      io.mem_wen := true.B
      io.mem_addr := io.rs1_data + io.imm
      io.mem_wdata := io.rs2_data(7, 0)
      io.rd_wen := false.B
    }
    is(26.U) { // sh
      io.mem_wen := true.B
      io.mem_addr := io.rs1_data + io.imm
      io.mem_wdata := io.rs2_data(15, 0)
      io.rd_wen := false.B
    }
    is(27.U) { // sw
      io.mem_wen := true.B
      io.mem_addr := io.rs1_data + io.imm
      io.mem_wdata := io.rs2_data
      io.rd_wen := false.B
    }

    // 分支指令
    is(28.U) { // beq
      when(io.rs1_data === io.rs2_data) {
        io.branch_taken := true.B
        io.next_pc := io.pc + io.imm
      }
      io.rd_wen := false.B
    }
    is(29.U) { // bne
      when(io.rs1_data =/= io.rs2_data) {
        io.branch_taken := true.B
        io.next_pc := io.pc + io.imm
      }
      io.rd_wen := false.B
    }
    is(30.U) { // blt
      when(io.rs1_data.asSInt < io.rs2_data.asSInt) {
        io.branch_taken := true.B
        io.next_pc := io.pc + io.imm
      }
      io.rd_wen := false.B
    }
    is(31.U) { // bge
      when(io.rs1_data.asSInt >= io.rs2_data.asSInt) {
        io.branch_taken := true.B
        io.next_pc := io.pc + io.imm
      }
      io.rd_wen := false.B
    }
    is(32.U) { // bltu
      when(io.rs1_data < io.rs2_data) {
        io.branch_taken := true.B
        io.next_pc := io.pc + io.imm
      }
      io.rd_wen := false.B
    }
    is(33.U) { // bgeu
      when(io.rs1_data >= io.rs2_data) {
        io.branch_taken := true.B
        io.next_pc := io.pc + io.imm
      }
      io.rd_wen := false.B
    }

    // 跳转指令
    is(34.U) { // jal
      io.rd_data := io.pc + 4.U
      io.next_pc := io.pc + io.imm
      io.branch_taken := true.B
    }
    is(35.U) { // jalr - 修正类型问题
      io.rd_data := io.pc + 4.U
      io.next_pc := (io.rs1_data + io.imm) & (~1.U(32.W))
      io.branch_taken := true.B
    }

    // U型指令
    is(36.U) { // lui
      io.rd_data := io.imm
    }
    is(37.U) { // auipc
      io.rd_data := io.pc + io.imm
    }

    // 系统指令 (简化实现)
    is(38.U) { // ecall
      io.rd_wen := false.B
    }
    is(39.U) { // ebreak
      io.rd_wen := false.B
    }

    // 默认情况
    is(0.U) {
      io.rd_wen := false.B
    }
  }
}