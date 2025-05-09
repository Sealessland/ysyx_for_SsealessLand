#include<ebreak.h>
#include <iostream>
#include<stdio.h>
#include<reg.h>
#include <bits/ostream.tcc>
#include<cstdlib>
extern "C" void ebreak_handler()
{
    bool success = false;
    bool *p = &success;  // 使用有效指针而非NULL
    int halt_return = isa_reg_str2val("a0", p);
    std::cout<<isa_reg_str2val("a0", p);
    printf("EBREAK触发: 退出程序，返回值=%d\n", halt_return);
    exit(halt_return);
}

