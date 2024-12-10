package SLLpc
import chisel3._




class TopBundle extends Bundle{
  val inst = Input(UInt(32.W))
  val pc = Output(UInt(32.W))
  val regfileState = Vec(32, UInt(32.W))
}


class top extends Module {
 val io = IO(new TopBundle)
 val pc = RegInit(0.U(32.W))
val inst = RegInit(0.U(32.W))
 val regfile = Module(new RegFile)
 val Controler = Module(new Controler)
 val MasterDecoder = Module(new MasterDecoder)  
 val memUnit = Module(new Mem)
 val execute = Module(new Execute) 

MasterDecoder.io.inst := io.inst
 regfile.io.read_addr1 := MasterDecoder.io.rs1
 regfile.io.read_addr2 := MasterDecoder.io.rs2     
 
 val imm = MasterDecoder.io.imm
 val alu_op = MasterDecoder.io.alu_op
 val rd = MasterDecoder.io.rd 
 val inst_type = MasterDecoder.io.inst_type

execute.io.inst_type := inst_type  
execute.io.rs1_data := regfile.io.read_data1
execute.io.rs2_data := regfile.io.read_data2
execute.io.imm := imm
execute.io.alu_op := alu_op
execute.io.rd := rd
execute.io.pc := pc
regfile.io.write_addr := rd
regfile.io.write_data := execute.io.rd_data 

memUnit.io.ren := execute.io.mem_ren
memUnit.io.wen := execute.io.mem_wen
memUnit.io.addr := execute.io.mem_addr
memUnit.io.wdata := execute.io.mem_wdata  



for (i <- 0 until 32) {
     io.regfileState(i) := regfile.regfile(i)  
}

io.pc := execute.io.next_pc//for next cycle
}