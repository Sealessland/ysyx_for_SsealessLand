//
// Created by sealessland on 25-5-9.
//
#include<core-exe.h>

enum class CPU_STATES
{
    CPU_RUNNING,
    CPU_STOP,
    CPU_END,
    CPU_ABORT,
    CPU_QUIT
};

// 创建一个结构体来保存CPU状态和返回值
struct CPU_State {
    CPU_STATES state;
    int halt_ret;
};

CPU_State cpu_state;

int is_exit_status_bad() {
    int good = (cpu_state.state == CPU_STATES::CPU_END && cpu_state.halt_ret == 0) ||
               (cpu_state.state == CPU_STATES::CPU_QUIT);
    return !good;
}