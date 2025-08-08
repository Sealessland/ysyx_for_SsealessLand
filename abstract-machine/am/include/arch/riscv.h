#ifndef ARCH_H__
#define ARCH_H__

#ifdef __riscv_e
#define NR_REGS 16
#else
#define NR_REGS 32
#endif

struct Context {
  // 寄存器文件 (gpr) 和 CSRs
  uintptr_t gpr[NR_REGS], mcause, mstatus, mepc;
  // 虚地址空间
  void *pdir;
};

// ----- RISC-V 寄存器 ABI 名称 -----
#define zero gpr[0]  // 硬连线到 0
#define ra   gpr[1]  // 返回地址 (Return Address)
#define sp   gpr[2]  // 栈指针 (Stack Pointer)
#define gp   gpr[3]  // 全局指针 (Global Pointer)
#define tp   gpr[4]  // 线程指针 (Thread Pointer)
#define t0   gpr[5]  // 临时寄存器 0 (Temporary)
#define t1   gpr[6]  // 临时寄存器 1
#define t2   gpr[7]  // 临时寄存器 2
#define s0   gpr[8]  // 保存寄存器 0 / 帧指针 (Saved Register / Frame Pointer)
#define S1   gpr[9]  // 保存寄存器 1
#define a0   gpr[10] // 函数参数 0 / 返回值 0 (Argument / Return value)
#define a1   gpr[11] // 函数参数 1 / 返回值 1
#define a2   gpr[12] // 函数参数 2
#define a3   gpr[13] // 函数参数 3
#define a4   gpr[14] // 函数参数 4
#define a5   gpr[15] // 函数参数 5

// 以下寄存器在 RV32E (嵌入式) 扩展中不存在
#ifndef __riscv_e

#endif

// ----- 系统调用约定 (AM API) -----
#ifdef __riscv_e
  // RV32E 使用 a5 作为系统调用号
  #define GPR1 gpr[15] // 系统调用号 (syscall ID) 存放在 a5
#else
  // 标准 RISC-V 使用 a7 作为系统调用号
  #define GPR1 gpr[17] // 系统调用号 (syscall ID) 存放在 a7
#endif

// 系统调用的参数和返回值
#define GPR2 gpr[10] // 参数 1 (in)
#define GPR3 gpr[11] // 参数 2 (in)
#define GPR4 gpr[12] // 参数 3 (in)
#define GPRx gpr[10] // 返回值 (out) 存放在 a0

#endif
