// include/sdb.h
#ifndef SDB_H
#define SDB_H

#include <stdint.h>
#include <stdbool.h>
#include <string>

// 调试器命令结构
typedef struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} sdb_cmd_t;

// 已声明的命令处理函数
int cmd_help(char *args);
int cmd_c(char *args);
int cmd_q(char *args);
int cmd_info(char *args);
int cmd_si(char *args);
int cmd_x(char *args);

// 调试器主循环
void sdb_mainloop();

// 调试器初始化
void init_sdb();

#endif