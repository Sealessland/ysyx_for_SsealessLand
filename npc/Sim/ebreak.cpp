#include<ebreak.h>
#include <iostream>
#include<stdio.h>
#include<reg.h>
#include<states.h>
#include <bits/ostream.tcc>
#include<cstdlib>
extern "C" void ebreak_handler()
{
    bool success = false;
    bool *p = &success;  // 使用有效指针而非NULL
    int halt_return = isa_reg_str2val("a0", p);

    // 根据返回值决定CPU状态
    if (halt_return == 0) {
        // 正常退出
        printf("EBREAK触发: 正常退出程序，返回值=%d\n", halt_return);
        cpu_state = CPU_State{CPU_STATES::CPU_END, halt_return};
    } else {
        // 异常退出
        printf("EBREAK触发: 异常退出程序，返回值=%d\n", halt_return);
        cpu_state = CPU_State{CPU_STATES::CPU_ABORT, halt_return};
    }
}