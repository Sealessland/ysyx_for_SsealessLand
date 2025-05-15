#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
#define REGNUM 32

// ANSI颜色代码
#define ANSI_FG_BLACK   "\33[1;30m"
#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_FG_WHITE   "\33[1;37m"
#define ANSI_BG_BLACK   "\33[1;40m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_BLUE    "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;45m"
#define ANSI_BG_CYAN    "\33[1;46m"
#define ANSI_BG_WHITE   "\33[1;47m"
#define ANSI_NONE       "\33[0m"

const char *regs2[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

// CSR寄存器名称
const char *csr_names[] = {
  "mstatus", "mtvec", "mepc", "mcause"
};

// CSR寄存器地址
const uint32_t csr_addrs[] = {
  0x300, 0x305, 0x341, 0x342  // MSTATUS, MTVEC, MEPC, MCAUSE
};

bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  bool flag = true;
  int i;
  
  // 保存寄存器不匹配状态
  bool reg_mismatch[REGNUM] = {false};
  bool csr_mismatch[4] = {false};
  bool pc_mismatch = false;
  
  // 检查程序计数器
  if(ref_r->pc != cpu.pc) {
    flag = false;
    pc_mismatch = true;
    printf("%sPC不匹配: ref_pc=0x%x, dut_pc=0x%x%s\n", 
           ANSI_FG_RED, ref_r->pc, cpu.pc, ANSI_NONE);
  }
  
  // 检查通用寄存器
  for(i = 0; i < REGNUM; i++) {
    if(ref_r->gpr[i] != cpu.gpr[i]) {
      flag = false;
      reg_mismatch[i] = true;
      printf("%s通用寄存器%s不匹配: ref=0x%x, dut=0x%x%s\n", 
             ANSI_FG_RED, regs2[i], ref_r->gpr[i], cpu.gpr[i], ANSI_NONE);
    }
  }
  
  // 检查CSR寄存器
 /* for(i = 0; i < 4; i++) {
    uint32_t csr_addr = csr_addrs[i];
    if(ref_r->csr[csr_addr] != cpu.csr[csr_addr]) {
      flag = false;
      csr_mismatch[i] = true;
      printf("%sCSR寄存器%s(0x%x)不匹配: ref=0x%x, dut=0x%x%s\n", 
             ANSI_FG_RED, csr_names[i], csr_addr, 
             ref_r->csr[csr_addr], cpu.csr[csr_addr], ANSI_NONE);
    }
  }
  */
  // 如果有不匹配的情况，打印详细的寄存器状态
  if(flag == false) {
    printf("\n=========== 寄存器状态详情 ===========\n");
    
    // 打印PC
    printf("PC: ");
    if(pc_mismatch) {
      printf("%sref=0x%08x dut=0x%08x%s\n", 
             ANSI_BG_RED, ref_r->pc, cpu.pc, ANSI_NONE);
    } else {
      printf("%sref=0x%08x dut=0x%08x%s\n", 
             ANSI_FG_GREEN, ref_r->pc, cpu.pc, ANSI_NONE);
    }
    
    // 打印通用寄存器
    printf("\n通用寄存器:\n");
    for(i = 0; i < REGNUM; i++) {
      if(reg_mismatch[i]) {
        printf("%s%3s: ref=0x%08x dut=0x%08x%s  ", 
               ANSI_BG_RED, regs2[i], ref_r->gpr[i], cpu.gpr[i], ANSI_NONE);
      } else {
        printf("%s%3s: ref=0x%08x dut=0x%08x%s  ", 
               ANSI_FG_GREEN, regs2[i], ref_r->gpr[i], cpu.gpr[i], ANSI_NONE);
      }
      
      if((i + 1) % 3 == 0) printf("\n");
    }
    
    // 打印CSR寄存器
    printf("\nCSR寄存器:\n");
    for(i = 0; i < 4; i++) {
      uint32_t csr_addr = csr_addrs[i];
      if(csr_mismatch[i]) {
        printf("%s%7s: ref=0x%08x dut=0x%08x%s  ", 
               ANSI_BG_RED, csr_names[i], 
               ref_r->csr[csr_addr], cpu.csr[csr_addr], ANSI_NONE);
      } else {
        printf("%s%7s: ref=0x%08x dut=0x%08x%s  ", 
               ANSI_FG_GREEN, csr_names[i], 
               ref_r->csr[csr_addr], cpu.csr[csr_addr], ANSI_NONE);
      }
      
      if((i + 1) % 2 == 0) printf("\n");
    }
    
    printf("\n=======================================\n\n");
  }
  
  return flag;
}

void isa_difftest_attach() {
}