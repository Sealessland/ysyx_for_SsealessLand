// include/states.h
#ifndef STATES_H
#define STATES_H

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

extern CPU_State cpu_state;

int is_exit_status_bad();

#endif // STATES_H