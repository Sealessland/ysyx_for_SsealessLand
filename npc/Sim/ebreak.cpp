// ebreak.cpp
#include "ebreak.h"
#include <iostream>
#include <stdio.h>
#include "reg.h"
#include "states.h"
#include <cstdlib>

#include "include/reg.h"

// 声明在其他文件中定义的全局变量
extern CPU_State cpu_state;

extern "C" void ebreak_handler()
{
    bool success = false;
    // 正确的做法是调用 reg.h 中声明的函数来获取 a0 的值。
    // 这能确保数据是从 DUT 同步过来的最新值。
    int halt_return = isa_reg_halt( &success);

    // 检查获取是否成功
    if (!success)
    {
        printf("EBREAK触发: 无法获取 a0 寄存器值！\n");
        cpu_state = CPU_State{CPU_STATES::CPU_ABORT, 1}; // 使用非零值表示错误
        return;
    }

    // 根据返回值决定CPU状态
    if (halt_return == 0)
    {
        // 正常退出
        printf("EBREAK触发: 正常退出程序，返回值=%d\n", halt_return);
        cpu_state = CPU_State{CPU_STATES::CPU_END, (uint32_t)halt_return};
    }
    else
    {
        // 异常退出
        printf("EBREAK触发: 异常退出程序，返回值=%d\n", halt_return);
        cpu_state = CPU_State{CPU_STATES::CPU_ABORT, (uint32_t)halt_return};
    }


}