#include "include/reg.h"

#include <cstdint>
#include <verilated.h>
#include <Vcore.h>
#include <Vcore___024root.h>
#include <string.h>
#include <stdio.h>

#define REGNUM 32

// 声明全局变量
 uint32_t gpr[REGNUM];  // 通用寄存器数组
static uint32_t pc;           // 程序计数器
static uint32_t csr[4];       // CSR 寄存器

// 寄存器名称数组
const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

// 获取寄存器状态的函数
void get_reg(Vcore* core) {
  // 必须通过 rootp 访问内部信号
  Vcore___024root* rootp = core->rootp;
  // 获取每个寄存器的值
 // gpr[0] 对应 regs[0] -> "$0"
gpr[0] = 0;
// gpr[1] 对应 regs[1] -> "ra" (x1)
gpr[1] = rootp->core__DOT__rf__DOT__rf_1;
// gpr[2] 对应 regs[2] -> "sp" (x2)
gpr[2] = rootp->core__DOT__rf__DOT__rf_2;
// gpr[3] 对应 regs[3] -> "gp" (x3)
gpr[3] = rootp->core__DOT__rf__DOT__rf_3;
// gpr[4] 对应 regs[4] -> "tp" (x4)
gpr[4] = rootp->core__DOT__rf__DOT__rf_4;
// gpr[5] 对应 regs[5] -> "t0" (x5)
gpr[5] = rootp->core__DOT__rf__DOT__rf_5;
// gpr[6] 对应 regs[6] -> "t1" (x6)
gpr[6] = rootp->core__DOT__rf__DOT__rf_6;
// gpr[7] 对应 regs[7] -> "t2" (x7)
gpr[7] = rootp->core__DOT__rf__DOT__rf_7;
// gpr[8] 对应 regs[8] -> "s0" (x8)
gpr[8] = rootp->core__DOT__rf__DOT__rf_8;
// gpr[9] 对应 regs[9] -> "s1" (x9)
gpr[9] = rootp->core__DOT__rf__DOT__rf_9;
// gpr[10] 对应 regs[10] -> "a0" (x10)
gpr[10] = rootp->core__DOT__rf__DOT__rf_10;
// gpr[11] 对应 regs[11] -> "a1" (x11)
gpr[11] = rootp->core__DOT__rf__DOT__rf_11;
// gpr[12] 对应 regs[12] -> "a2" (x12)
gpr[12] = rootp->core__DOT__rf__DOT__rf_12;
// gpr[13] 对应 regs[13] -> "a3" (x13)
gpr[13] = rootp->core__DOT__rf__DOT__rf_13;
// gpr[14] 对应 regs[14] -> "a4" (x14)
gpr[14] = rootp->core__DOT__rf__DOT__rf_14;
// gpr[15] 对应 regs[15] -> "a5" (x15)
gpr[15] = rootp->core__DOT__rf__DOT__rf_15;
// gpr[16] 对应 regs[16] -> "a6" (x16)
gpr[16] = rootp->core__DOT__rf__DOT__rf_16;
// gpr[17] 对应 regs[17] -> "a7" (x17)
gpr[17] = rootp->core__DOT__rf__DOT__rf_17;
// gpr[18] 对应 regs[18] -> "s2" (x18)
gpr[18] = rootp->core__DOT__rf__DOT__rf_18;
// gpr[19] 对应 regs[19] -> "s3" (x19)
gpr[19] = rootp->core__DOT__rf__DOT__rf_19;
// gpr[20] 对应 regs[20] -> "s4" (x20)
gpr[20] = rootp->core__DOT__rf__DOT__rf_20;
// gpr[21] 对应 regs[21] -> "s5" (x21)
gpr[21] = rootp->core__DOT__rf__DOT__rf_21;
// gpr[22] 对应 regs[22] -> "s6" (x22)
gpr[22] = rootp->core__DOT__rf__DOT__rf_22;
// gpr[23] 对应 regs[23] -> "s7" (x23)
gpr[23] = rootp->core__DOT__rf__DOT__rf_23;
// gpr[24] 对应 regs[24] -> "s8" (x24)
gpr[24] = rootp->core__DOT__rf__DOT__rf_24;
// gpr[25] 对应 regs[25] -> "s9" (x25)
gpr[25] = rootp->core__DOT__rf__DOT__rf_25;
// gpr[26] 对应 regs[26] -> "s10" (x26)
gpr[26] = rootp->core__DOT__rf__DOT__rf_26;
// gpr[27] 对应 regs[27] -> "s11" (x27)
gpr[27] = rootp->core__DOT__rf__DOT__rf_27;
// gpr[28] 对应 regs[28] -> "t3" (x28)
gpr[28] = rootp->core__DOT__rf__DOT__rf_28;
// gpr[29] 对应 regs[29] -> "t4" (x29)
gpr[29] = rootp->core__DOT__rf__DOT__rf_29;
// gpr[30] 对应 regs[30] -> "t5" (x30)
gpr[30] = rootp->core__DOT__rf__DOT__rf_30;
// gpr[31] 对应 regs[31] -> "t6" (x31)
gpr[31] = rootp->core__DOT__rf__DOT__rf_31;

  // 获取 PC
  pc =core->io_debugPC;

  // CSR 寄存器在提供的结构中不可见，暂时设为0
  for (int i = 0; i < 4; i++) {
    csr[i] = 0;
  }
}

// 显示寄存器值的函数
void isa_reg_display(Vcore* core) {
  get_reg(core);  // 确保最新值

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
uint32_t isa_reg_halt(bool *success)
{*success = true;
  return gpr[10];

}
// 根据字符串获取寄存器值
uint32_t isa_reg_str2val(const char *s, bool *success) {
  *success = true;
  const char *name = s;

  // 如果名称以'$'开头，则跳过它
  if (name[0] == '$') {
    name++;
  }

  // 检查是否为 PC
  if (strcmp("pc", name) == 0) {
    return pc;
  }

  // 检查是否为通用寄存器
  for (int i = 0; i < REGNUM; i++) {
    if (strcmp(regs[i], name) == 0) {
      return gpr[i];
    }
  }

  // 特殊处理 x0 的别名 "$0"
  if (strcmp("0", name) == 0) {
    return gpr[0];
  }

  *success = false;
  return 0;
}

// 获取寄存器值
uint32_t getRegValue(Vcore* core, uint32_t regIndex) {
  if (regIndex >= REGNUM) return 0;
  get_reg(core);
  return gpr[regIndex];
}

// 设置寄存器值
void setRegValue(Vcore* core, uint32_t regIndex, uint32_t value) {
  if (regIndex >= REGNUM || regIndex == 0) return; // x0不可写
  Vcore___024root* rootp = core->rootp;

  // 这里需要根据实际的Verilog模型结构设置寄存器值
  // 示例实现，实际代码可能需要调整
  switch(regIndex) {
    case 1: rootp->core__DOT__rf__DOT__rf_1 = value; break;
    case 2: rootp->core__DOT__rf__DOT__rf_2 = value; break;
    // ...其他寄存器类似实现
  }
}

// 获取寄存器名称
std::string getRegName(uint32_t regIndex) {
  if (regIndex >= REGNUM) return "invalid";
  return regs[regIndex];
}

// 打印所有寄存器值
void printAllRegs(Vcore* core) {
  isa_reg_display(core);
}

// 打印特定寄存器值
void printReg(Vcore* core, uint32_t regIndex) {
  if (regIndex >= REGNUM) return;
  get_reg(core);
  printf("%s = ", regs[regIndex]);
  if (gpr[regIndex] >= 0x02000000) {
    printf("%#x\n", gpr[regIndex]);
  } else {
    printf("%d\n", gpr[regIndex]);
  }
}

// 从寄存器名称获取索引
uint32_t getRegIndexByName(const std::string& name) {
  for (uint32_t i = 0; i < REGNUM; i++) {
    if (name == regs[i]) return i;
  }
  return REGNUM; // 返回无效索引
}

// 从 ISA 名称获取寄存器值
uint32_t getRegValueByName(Vcore* core, const std::string& name) {
  uint32_t index = getRegIndexByName(name);
  if (index >= REGNUM) return 0;
  return getRegValue(core, index);
}

// 从 ISA 名称设置寄存器值
void setRegValueByName(Vcore* core, const std::string& name, uint32_t value) {
  uint32_t index = getRegIndexByName(name);
  if (index < REGNUM) {
    setRegValue(core, index, value);
  }
}

// 打印 RISC-V 寄存器映射关系
void isa2Reg() {
  printf("RISC-V 寄存器映射关系：\n");
  for (int i = 0; i < REGNUM; i++) {
    printf("x%-2d: %s\n", i, regs[i]);
  }
}