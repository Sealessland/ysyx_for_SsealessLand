/***************************************************************************************
* Copyright (c) 2014-2024 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>
#include<isa.h>
#define CSR(i) csr(i)
#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S, TYPE_R, TYPE_B,
  TYPE_N, TYPE_J // none
};

#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() do { *imm = (SEXT(BITS(i, 31, 31), 20) << 20) | (BITS(i, 19, 12) << 12) | (BITS(i, 20, 20) << 11) | (BITS(i, 30, 21) << 1); } while(0)
#define immB() do { *imm = ((SEXT(BITS(i, 31, 31), 1) << 11) | BITS(i, 7, 7) << 10 | BITS(i, 30 , 25) << 4 | BITS(i , 11 , 8)) << 1; } while(0)
static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, word_t *csri, int type) {
  uint32_t i = s->isa.inst;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);
  *csri   = ZEXT(BITS(i, 31, 20), 12);
  switch (type) {
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_N: break;
    case TYPE_J: src1R();          immJ(); break;
    case TYPE_R: src1R(); src2R();         break;
    case TYPE_B: src1R(); src2R(); immB(); break;
    default: panic("unsupported type = %d", type);
  }
}

static int decode_exec(Decode *s) {
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  int rd = 0; \
  word_t src1 = 0, src2 = 0, imm = 0, csri = 0; \
  decode_operand(s, &rd, &src1, &src2, &imm, &csri, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(rd) = s->pc + imm);
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(rd) = SEXT(Mr(src1 + imm, 1), 8));
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(rd) = SEXT(Mr(src1 + imm, 2), 16));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(rd) = Mr(src1 + imm, 2));
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(rd) = Mr(src1 + imm, 1));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2));
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, src2));
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(rd) = src1 + SEXT(imm,12));
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(rd) = src1 + src2);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(rd) = src1 - src2);
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(rd) = src1 & src2);
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(rd) = src1 & SEXT(imm,12));
  INSTPAT("0100000 ????? ????? 101 ????? 01100 11", sra    , R,  R(rd) = SEXT(src1, 32) >> (src2 & 0x1f));
  INSTPAT("0100000 ????? ????? 101 ????? 00100 11", srai   , I,  R(rd) = SEXT(src1, 32) >> (imm & 0x1f));
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(rd) = s->snpc; s->dnpc = s->pc + SEXT(imm, 20));
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I,  R(rd)=s->snpc; s->dnpc = (src1 + SEXT(imm, 12)) & ~1);
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2));
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", srl    , R, R(rd) = src1 >> (src2 & 0x1f));
  INSTPAT("0000000 ????? ????? 101 ????? 00100 11", srli   , I, R(rd) = src1 >> (imm & 0x1f));
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(rd) = (int32_t)src1 < (int32_t)src2? 1: 0); 
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(rd) = src1 < src2);
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(rd) = src1 ^ src2);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(rd) = src1 ^ SEXT(imm,12));
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(rd) = src1 | src2);
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori    , I, R(rd) = src1 | imm);
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(rd) = (src1 < imm));
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(rd) = src1 << (src2 & 0x1f));
  INSTPAT("0000000 ????? ????? 001 ????? 00100 11", slli   , I, R(rd) = src1 << (imm & 0x1f));
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, if (src1 == src2) s->dnpc = s->pc + imm);
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, if (src1 != src2) s->dnpc = s->pc + imm);
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, s->dnpc = ((int32_t)src1 >=(int32_t)src2)?s->pc + imm : s->dnpc);
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, s->dnpc = ((int32_t)src1 <(int32_t)src2)?s->pc + SEXT(imm,12) : s->dnpc);
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, s->dnpc = (src1 < src2)?s->pc + SEXT(imm,12) : s->dnpc);
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, if (src1 >= src2) s->dnpc = s->pc + SEXT(imm, 12));
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul    , R, R(rd) = src1 * src2);
  INSTPAT("0000001 ????? ????? 001 ????? 01100 11", mulh   , R, R(rd) = ((int64_t)SEXT(src1, 32) * (int64_t)SEXT(src2, 32)) >> 32);
  INSTPAT("0000001 ????? ????? 010 ????? 01100 11", mulhsu , R, R(rd) = ((int64_t)SEXT(src1, 32) * SEXT(src2, 32)) >> 32);
  INSTPAT("0000001 ????? ????? 011 ????? 01100 11", mulhu  , R, R(rd) = ((uint64_t)src1 * (uint64_t)src2) >> 32);
  INSTPAT("0000001 ????? ????? 100 ????? 01100 11", div    , R, R(rd) = SEXT(src1,32) / SEXT(src2,32));
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu   , R, R(rd) = src1 / src2);
  INSTPAT("0000001 ????? ????? 110 ????? 01100 11", rem    , R, R(rd) = SEXT(src1,32) % SEXT(src2,32));
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu   , R, R(rd) = src1 % src2);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(rd) = imm);
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(rd) = Mr(src1 + imm, 4));
  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , N, s->dnpc = isa_raise_intr(EVENT_YIELD, s->pc));
  INSTPAT("0011000 00010 00000 000 00000 11100 11", mret   , R, s->dnpc = CSR(MEPC));
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw, I, 
    printf("\n[CSRRW执行] PC=0x%08x\n", s->pc);
    printf("  CSR地址: 0x%03x (%s)\n", csri, 
           csri == 0x300 ? "mstatus" : 
           csri == 0x305 ? "mtvec" : 
           csri == 0x341 ? "mepc" : 
           csri == 0x342 ? "mcause" : "其他");
    int t = CSR(csri); 
    printf("  CSR原值: 0x%08x\n", t);
    printf("  写入值(rs1=%lld): 0x%08x\n", BITS(s->isa.inst, 19, 15), src1);
    CSR(csri) = src1; 
    printf("  目标寄存器(rd=%d): %s\n", rd, 
           rd == 0 ? "$zero" : 
           rd == 1 ? "ra" : 
           rd == 2 ? "sp" : 
           rd == 10 ? "a0" : "其他");
    R(rd) = t;
    printf("  结果: CSR=0x%08x, %s=0x%08x\n", CSR(csri), 
           rd == 0 ? "$zero" : 
           rd == 1 ? "ra" : 
           rd == 2 ? "sp" : 
           rd == 10 ? "a0" : "其他", R(rd));
  );
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrrs, I, 
    printf("\n[CSRRS执行] PC=0x%08x\n", s->pc);
    printf("  CSR地址: 0x%03x (%s)\n", csri, 
           csri == 0x300 ? "mstatus" : 
           csri == 0x305 ? "mtvec" : 
           csri == 0x341 ? "mepc" : 
           csri == 0x342 ? "mcause" : "其他");
    int t = CSR(csri); 
    printf("  CSR原值: 0x%08x\n", t);
    printf("  设置位(rs1=%lld): 0x%08x\n", BITS(s->isa.inst, 19, 15), src1);
    CSR(csri) = t | src1; 
    printf("  目标寄存器(rd=%d): %s\n", rd, 
           rd == 0 ? "$zero" : 
           rd == 1 ? "ra" : 
           rd == 2 ? "sp" : 
           rd == 10 ? "a0" : "其他");
    R(rd) = t;
    printf("  结果: CSR=0x%08x, %s=0x%08x\n", CSR(csri), 
           rd == 0 ? "$zero" : 
           rd == 1 ? "ra" : 
           rd == 2 ? "sp" : 
           rd == 10 ? "a0" : "其他", R(rd));
  );
  INSTPAT("??????? ????? ????? 011 ????? 11100 11", csrrc, I, 
    printf("\n[CSRRC执行] PC=0x%08x\n", s->pc);
    printf("  CSR地址: 0x%03x (%s)\n", csri, 
           csri == 0x300 ? "mstatus" : 
           csri == 0x305 ? "mtvec" : 
           csri == 0x341 ? "mepc" : 
           csri == 0x342 ? "mcause" : "其他");
    int t = CSR(csri); 
    printf("  CSR原值: 0x%08x\n", t);
    printf("  清除位(rs1=%lld): 0x%08x\n", BITS(s->isa.inst, 19, 15), src1);
    CSR(csri) = t & ~src1; 
    printf("  目标寄存器(rd=%d): %s\n", rd, 
           rd == 0 ? "$zero" : 
           rd == 1 ? "ra" : 
           rd == 2 ? "sp" : 
           rd == 10 ? "a0" : "其他");
    R(rd) = t;
    printf("  结果: CSR=0x%08x, %s=0x%08x\n", CSR(csri), 
           rd == 0 ? "$zero" : 
           rd == 1 ? "ra" : 
           rd == 2 ? "sp" : 
           rd == 10 ? "a0" : "其他", R(rd));
  );
  INSTPAT("??????? ????? ????? 101 ????? 11100 11", csrrwi, I, 
    uint32_t zimm = BITS(s->isa.inst, 19, 15); // 零扩展的5位立即数
    printf("\n[CSRRWI执行] PC=0x%08x\n", s->pc);
    printf("  CSR地址: 0x%03x (%s)\n", csri, 
           csri == 0x300 ? "mstatus" : 
           csri == 0x305 ? "mtvec" : 
           csri == 0x341 ? "mepc" : 
           csri == 0x342 ? "mcause" : "其他");
    int t = CSR(csri); 
    printf("  CSR原值: 0x%08x\n", t);
    printf("  写入立即数: 0x%02x\n", zimm);
    CSR(csri) = zimm; 
    printf("  目标寄存器(rd=%d): %s\n", rd, 
           rd == 0 ? "$zero" : 
           rd == 1 ? "ra" : 
           rd == 2 ? "sp" : 
           rd == 10 ? "a0" : "其他");
    R(rd) = t;
    printf("  结果: CSR=0x%08x, %s=0x%08x\n", CSR(csri), 
           rd == 0 ? "$zero" : 
           rd == 1 ? "ra" : 
           rd == 2 ? "sp" : 
           rd == 10 ? "a0" : "其他", R(rd));
  );
  INSTPAT("??????? ????? ????? 110 ????? 11100 11", csrrsi, I, 
    uint32_t zimm = BITS(s->isa.inst, 19, 15); // 零扩展的5位立即数
    printf("\n[CSRRSI执行] PC=0x%08x\n", s->pc);
    printf("  CSR地址: 0x%03x (%s)\n", csri, 
           csri == 0x300 ? "mstatus" : 
           csri == 0x305 ? "mtvec" : 
           csri == 0x341 ? "mepc" : 
           csri == 0x342 ? "mcause" : "其他");
    int t = CSR(csri); 
    printf("  CSR原值: 0x%08x\n", t);
    printf("  设置立即数位: 0x%02x\n", zimm);
    CSR(csri) = t | zimm; 
    printf("  目标寄存器(rd=%d): %s\n", rd, 
           rd == 0 ? "$zero" : 
           rd == 1 ? "ra" : 
           rd == 2 ? "sp" : 
           rd == 10 ? "a0" : "其他");
    R(rd) = t;
    printf("  结果: CSR=0x%08x, %s=0x%08x\n", CSR(csri), 
           rd == 0 ? "$zero" : 
           rd == 1 ? "ra" : 
           rd == 2 ? "sp" : 
           rd == 10 ? "a0" : "其他", R(rd));
  );
  INSTPAT("??????? ????? ????? 111 ????? 11100 11", csrrci, I, 
    uint32_t zimm = BITS(s->isa.inst, 19, 15); // 零扩展的5位立即数
    printf("\n[CSRRCI执行] PC=0x%08x\n", s->pc);
    printf("  CSR地址: 0x%03x (%s)\n", csri, 
           csri == 0x300 ? "mstatus" : 
           csri == 0x305 ? "mtvec" : 
           csri == 0x341 ? "mepc" : 
           csri == 0x342 ? "mcause" : "其他");
    int t = CSR(csri); 
    printf("  CSR原值: 0x%08x\n", t);
    printf("  清除立即数位: 0x%02x\n", zimm);
    CSR(csri) = t & ~zimm; 
    printf("  目标寄存器(rd=%d): %s\n", rd, 
           rd == 0 ? "$zero" : 
           rd == 1 ? "ra" : 
           rd == 2 ? "sp" : 
           rd == 10 ? "a0" : "其他");
    R(rd) = t;
    printf("  结果: CSR=0x%08x, %s=0x%08x\n", CSR(csri), 
           rd == 0 ? "$zero" : 
           rd == 1 ? "ra" : 
           rd == 2 ? "sp" : 
           rd == 10 ? "a0" : "其他", R(rd));
  );
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END(); 

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
