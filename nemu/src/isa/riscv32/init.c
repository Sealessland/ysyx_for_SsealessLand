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

#include <isa.h>
#include <memory/paddr.h>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
static const uint32_t img [] = {
  0x87fff137,  // lui sp, 0x87fff        # sp = 0x87fff000
  0xff010113,  // addi sp, sp, 0xff0     # sp = 0x87fff000 + 0xff0 = 0x87fffff0
  0x00100513,  // li a0, 1            # 设置初始值
  0x00200593,  // li a1, 2
  0x00300613,  // li a2, 3
  0x00b50633,  // add a2, a0, a1      # a2 = a0 + a1 = 3

  // 内存存储测试 (使用sp作为基址)
  0x00c12023,  // sw a2, 0(sp)        # 存储a2到0(sp)
  0x00a12223,  // sw a0, 4(sp)        # 存储a0到4(sp)
  0x00b12423,  // sw a1, 8(sp)        # 存储a1到8(sp)

  // 内存加载测试 (使用sp作为基址)
  0x00012703,  // lw a4, 0(sp)        # 从0(sp)加载到a4
  0x00412783,  // lw a5, 4(sp)        # 从4(sp)加载到a5
  0x00812803,  // lw a6, 8(sp)        # 从8(sp)加载到a6


};

static void restart() {
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;
  /* The zero register is always 0. */
  /* Set the initial program counter. */

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
  cpu.csr[MSTATUS] = 0x1800;
}

void init_isa() {
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));

  /* Initialize this virtual computer system. */
  restart();
}
