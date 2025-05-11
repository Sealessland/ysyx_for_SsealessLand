#ifndef STATES_H
#define STATES_H

enum class CPU_STATES
{
    CPU_RUNNING,  // CPU正在运行
    CPU_STOP,     // CPU已停止
    CPU_END,      // CPU正常结束
    CPU_ABORT,    // CPU异常终止
    CPU_QUIT      // 用户退出
};

// 创建一个结构体来保存CPU状态和返回值
struct CPU_State {
    CPU_STATES state;
    int halt_ret;
};

extern CPU_State cpu_state;

// 判断退出状态是否异常
int is_exit_status_bad();

// 设置CPU状态
void set_cpu_state(CPU_STATES state, int ret_code);

#endif // STATES_H
