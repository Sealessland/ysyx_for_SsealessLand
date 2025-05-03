#include <verilated.h>
#include <Vcore.h>
#include <Vcore___024root.h>
#include <string.h>
#include <stdio.h>

#define REGNUM 32

// 声明全局变量
static Vcore* cpu = nullptr;  // Verilator 模型实例
static uint32_t gpr[REGNUM];  // 通用寄存器数组
static uint32_t pc;           // 程序计数器
static uint32_t csr[4];       // CSR 寄存器

// 寄存器名称数组
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

// 初始化函数，在主程序开始时调用
void init_reg(Vcore* core_model) {
  cpu = core_model;
}

// 获取寄存器值的函数
void get_reg() {
  if (!cpu) {
    printf("错误：CPU 模型未初始化\n");
    return;
  }

  // 必须通过 vlSymsp->TOP 或 rootp 访问内部信号
  Vcore___024root* rootp = cpu->rootp;

  // 获取每个寄存器的值
  gpr[0] = 0;  // x0 永远为 0
  gpr[1] = rootp->core__DOT__rf__DOT__rf_1;   // ra
  gpr[2] = rootp->core__DOT__rf__DOT__rf_2;   // sp
  gpr[3] = rootp->core__DOT__rf__DOT__rf_3;   // gp
  gpr[4] = rootp->core__DOT__rf__DOT__rf_4;   // tp
  gpr[5] = rootp->core__DOT__rf__DOT__rf_5;   // t0
  gpr[6] = rootp->core__DOT__rf__DOT__rf_6;   // t1
  gpr[7] = rootp->core__DOT__rf__DOT__rf_7;   // t2
  gpr[8] = rootp->core__DOT__rf__DOT__rf_8;   // s0
  gpr[9] = rootp->core__DOT__rf__DOT__rf_9;   // s1
  gpr[10] = rootp->core__DOT__rf__DOT__rf_10; // a0
  gpr[11] = rootp->core__DOT__rf__DOT__rf_11; // a1
  gpr[12] = rootp->core__DOT__rf__DOT__rf_12; // a2
  gpr[13] = rootp->core__DOT__rf__DOT__rf_13; // a3
  gpr[14] = rootp->core__DOT__rf__DOT__rf_14; // a4
  gpr[15] = rootp->core__DOT__rf__DOT__rf_15; // a5
  gpr[16] = rootp->core__DOT__rf__DOT__rf_16; // a6
  gpr[17] = rootp->core__DOT__rf__DOT__rf_17; // a7
  gpr[18] = rootp->core__DOT__rf__DOT__rf_18; // s2
  gpr[19] = rootp->core__DOT__rf__DOT__rf_19; // s3
  gpr[20] = rootp->core__DOT__rf__DOT__rf_20; // s4
  gpr[21] = rootp->core__DOT__rf__DOT__rf_21; // s5
  gpr[22] = rootp->core__DOT__rf__DOT__rf_22; // s6
  gpr[23] = rootp->core__DOT__rf__DOT__rf_23; // s7
  gpr[24] = rootp->core__DOT__rf__DOT__rf_24; // s8
  gpr[25] = rootp->core__DOT__rf__DOT__rf_25; // s9
  gpr[26] = rootp->core__DOT__rf__DOT__rf_26; // s10
  gpr[27] = rootp->core__DOT__rf__DOT__rf_27; // s11
  gpr[28] = rootp->core__DOT__rf__DOT__rf_28; // t3
  gpr[29] = rootp->core__DOT__rf__DOT__rf_29; // t4
  gpr[30] = rootp->core__DOT__rf__DOT__rf_30; // t5
  gpr[31] = rootp->core__DOT__rf__DOT__rf_31; // t6

  // 获取 PC
  pc = rootp->core__DOT__instfetch__DOT__pc;

  // CSR 寄存器在提供的结构中不可见，暂时设为0
  for (int i = 0; i < 4; i++) {
    csr[i] = 0;
  }
}

// 显示寄存器值的函数
void isa_reg_display() {
  get_reg();  // 确保最新值

  printf("\ndut-pc=%x\n", pc);
  for (int i = 0; i < REGNUM; i++) {
    if (gpr[i] >= 0x02000000) {
      printf("dut-%3s = %-#11x", regs[i], gpr[i]);
    } else {
      printf("dut-%3s = %-11d", regs[i], gpr[i]);
    }
    if (i % 3 == 0) printf("\n");
  }
  printf("\n");
  printf("dut-mstatus = %#x\n", csr[0]);
  printf("dut-mtvec = %#x\n", csr[1]);
  printf("dut-mepc = %#x\n", csr[2]);
  printf("dut-mcause = %#x\n", csr[3]);
}

// 根据字符串获取寄存器值
uint32_t isa_reg_str2val(const char *s, bool *success) {
  get_reg();  // 确保最新值

  // 检查是否为 PC
  if (strcmp("pc", s+1) == 0) {
    *success = true;
    return pc;
  }

  // 检查是否为通用寄存器
  for (int i = 0; i < REGNUM; i++) {
    if (strcmp(regs[i], s+1) == 0) {
      *success = true;
      return gpr[i];
    }
  }

  *success = false;
  return 0;
}