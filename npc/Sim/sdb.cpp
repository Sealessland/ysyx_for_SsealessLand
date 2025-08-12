// sdb.cpp
#include "include/sdb.h"
#include "include/mem.h"
#include "include/core-exe.h"
#include <Vcore.h>
#include <VysyxSoCFull.h>
#include<states.h>
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <string.h>
#include "include/SoC-exe.h"
#include <regex>
#include <reg.h>
#ifdef CORE
extern CoreExecutor* g_executor; // 全局执行器指针，需要在主程序中声明
#endif
#ifdef SOC
extern SoCExecutor* g_executor ; // g_executor为调试器提供SoC模型

#endif

// 命令表
static sdb_cmd_t cmd_table[] = {
  { "help", "显示所有支持的命令信息", cmd_help },
  { "c", "继续执行程序", cmd_c },
  { "q", "退出调试器", cmd_q },
  { "info", "打印寄存器状态", cmd_info },
  { "si", "单步执行", cmd_si },
  { "x", "扫描内存", cmd_x }
};

int nr_cmd = sizeof(cmd_table) / sizeof(cmd_table[0]);

// 帮助命令实现
int cmd_help(char *args) {
  printf("SDB - 简易调试器\n");

  printf("以下是支持的命令:\n\n");

  for (int i = 0; i < nr_cmd; i++) {
    printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
  }

  return 0;
}

// 继续执行命令
int cmd_c(char *args) {
  if (g_executor == nullptr) {
    printf("错误: 执行器未初始化\n");
    return -1;
  }

  printf("继续执行...\n");

  // 这里可以实现执行到下一个断点或者执行指定周期数
  // 暂时简单实现为执行100个周期
  cpu_state.state=CPU_STATES::CPU_RUNNING;
#ifdef CORE
  g_executor->run_insts(999999);
#endif
#ifdef SOC
  g_executor->run_cycles(999999);
#endif
  return 0;
}

// 退出命令
int cmd_q(char *args) {
  if (g_executor != nullptr) {
    cpu_state.state=CPU_STATES::CPU_STOP;
    g_executor->finalize();
  }
  exit(0);
  return 0;
}

// 打印寄存器状态
int cmd_info(char *args){
  if (g_executor == nullptr || g_executor->get_model() == nullptr) {
    printf("错误: 执行器未初始化\n");
    return -1;
  }
#ifdef CORE
  Vcore* core = g_executor->get_model();
#endif
#ifdef SOC
  VysyxSoCFull* soc = g_executor->get_model();
#endif
#ifndef SOC
  if (args != nullptr && strcmp(args, "r") == 0) {
    printf("所有寄存器状态:\n");
    printAllRegs(core); // 调用 printAllRegs 函数
  } else {
    printf("当前CPU状态:\n");
    printf("PC = 0x%08x\n", core->io_debugPC);
    printf("当前指令 = 0x%08x\n", core->io_debugInst);
  }
#endif

  return 0;
}

// 单步执行
int cmd_si(char *args) {
  if (g_executor == nullptr) {
    printf("错误: 执行器未初始化\n");
    return -1;
  }

  int steps = 1;
  if (args != nullptr) {
    steps = atoi(args);
    if (steps <= 0) steps = 1;
  }

  printf("单步执行 %d 步...\n", steps);
  for (int i = 0; i < steps; i++) {
#ifdef CORE
    g_executor->run_insts(1);
#endif
#ifdef SOC
    g_executor->run_cycles(1);
#endif
  }

  // 执行完后显示状态
  cmd_info(nullptr);
  return 0;
}

// 扫描内存
int cmd_x(char *args) {
  if (args == nullptr) {
    printf("用法: x N ADDR - 显示从ADDR开始的N个32位字\n");
    return -1;
  }

  // 解析参数
  int n;
  uint32_t addr;

  char* arg1 = strtok(args, " ");
  char* arg2 = strtok(nullptr, " ");

  if (arg1 == nullptr || arg2 == nullptr) {
    printf("用法: x N ADDR - 显示从ADDR开始的N个32位字\n");
    return -1;
  }

  n = atoi(arg1);
  // 支持十六进制地址格式 0x12345678
  if (strncmp(arg2, "0x", 2) == 0) {
    addr = strtoul(arg2, nullptr, 16);
  } else {
    addr = strtoul(arg2, nullptr, 0);
  }

  Memory& mem = get_memory();
  printf("内存 0x%08x 内容:\n", addr);

  for (int i = 0; i < n; i++) {
    uint32_t value = mem.read(addr + i*4, 4);
    printf("0x%08x: 0x%08x\n", addr + i*4, value);
  }

  return 0;
}

// 执行命令
static int cmd_execute(char *cmd) {
  if (cmd == nullptr) return 0;

  // 去除命令前后的空格
  while (*cmd == ' ') cmd++;

  // 空命令
  if (*cmd == '\0') return 0;

  // 分割命令名和参数
  char *args = cmd;
  while (*args != '\0' && *args != ' ') args++;
  if (*args != '\0') {
    *args = '\0';
    args++;
    while (*args == ' ') args++;
  } else {
    args = nullptr;
  }

  // 查找并执行命令
  for (int i = 0; i < nr_cmd; i++) {
    if (strcmp(cmd, cmd_table[i].name) == 0) {
      return cmd_table[i].handler(args);
    }
  }

  printf("未知命令: %s\n", cmd);
  return -1;
}

// SDB主循环
void sdb_mainloop() {
  printf("欢迎使用简易调试器 (SDB)\n");
  printf("输入 'help' 获取命令列表\n");

  for (char *line; (line = readline("(sdb) ")) != nullptr; ) {
    // 将命令添加到历史记录
    if (line[0] != '\0') {
      add_history(line);
    }

    cmd_execute(line);
    // 检查CPU状态，如果为STOP则退出mainloop
    if (cpu_state.state == CPU_STATES::CPU_STOP) {
      break;
    }
    free(line);
  }
}

// 初始化调试器
void init_sdb() {
  // 使用readline的自动补全功能
  rl_bind_key('\t', rl_complete);
}