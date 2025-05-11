#ifndef DIFFTEST_H
#define DIFFTEST_H

#include <cstdint>
class Vcore;

// 函数类型定义
typedef void (*difftest_memcpy_func)(uint32_t addr, void *buf, int n, bool direction);

// 对外暴露的函数指针
extern difftest_memcpy_func difftest_memcpy_ref;

// 差分测试初始化
bool difftest_init(const char* so_file, Vcore* core);

// 执行一步差分测试
void difftest_step(Vcore* core);

// 清理差分测试资源
void difftest_cleanup();

#endif //DIFFTEST_H