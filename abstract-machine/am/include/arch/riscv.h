#ifndef ARCH_H__
#define ARCH_H__

#ifdef __riscv_e
#define NR_REGS 16
#else
#define NR_REGS 32
#endif

enum {REG_ZERO, REG_RA, REG_SP, REG_GP, REG_TP,
      REG_T0, REG_T1, REG_T2, REG_S0, REG_S1,
      REG_A0, REG_A1, REG_A2, REG_A3, REG_A4,
      REG_A5, REG_A6, REG_A7, REG_S2, REG_S3,
      REG_S4, REG_S5, REG_S6, REG_S7, REG_S8,
      REG_S9, REG_S10,REG_S11};

struct Context {
  // TODO: fix the order of these members to match trap.S
  uintptr_t gpr[NR_REGS], mcause, mstatus, mepc;
  void *pdir;
};

#ifdef __riscv_e
#define GPR1 gpr[15] // a5
#else
#define GPR1 gpr[17] // a7
#endif

#define GPR2 gpr[0]
#define GPR3 gpr[0]
#define GPR4 gpr[0]
#define GPRx gpr[0]

#endif
