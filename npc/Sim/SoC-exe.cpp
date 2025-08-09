//
// Created by sealessland on 2025/8/8.
//

#include "include/SoC-exe.h"
#include <VysyxSoCFull.h>
#include <iostream>
#include<verilated.h>
#include "include/SoC-exe.h"
#include <VysyxSoCFull.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <iostream>

// 为日志输出定义ANSI颜色代码
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_RESET      "\33[0m"
#define ANSI_BOLD       "\33[1m"

SoCExecutor::SoCExecutor() : soc(nullptr), tfp(nullptr), sim_time(0) {}

SoCExecutor::~SoCExecutor() {
    finalize();
}

bool SoCExecutor::initialize(const SoCConfig& cfg) {
    // 初始化Verilator
    Verilated::traceEverOn(true);

    // 创建SoC模型实例
    soc = new VysyxSoCFull();
    soc->clock = 0;
    soc->reset = 1;  // 启动时进入复位状态

    // 配置波形追踪
    tfp = new VerilatedVcdC;
    soc->trace(tfp, 99);
    tfp->open(cfg.wave_file.c_str());

    std::cout << ANSI_BOLD ANSI_FG_GREEN "🚀 SoC仿真环境初始化完成" ANSI_RESET << std::endl;
    std::cout << ANSI_FG_CYAN "   └── 波形文件: " << cfg.wave_file << ANSI_RESET << std::endl;

    // 执行复位序列
    std::cout << ANSI_BOLD ANSI_FG_YELLOW "🔄 正在执行复位序列..." ANSI_RESET << std::endl;
    for (int i = 0; i < 50; ++i) {
        toggle_clock();
    }
    soc->reset = 0; // 撤销复位信号
    toggle_clock(); // 再执行一个周期以使复位信号生效

    std::cout << ANSI_BOLD ANSI_FG_GREEN "✅ 复位完成" ANSI_RESET << std::endl;

    return true;
}

void SoCExecutor::finalize() {
    if (tfp) {
        tfp->close();
        delete tfp;
        tfp = nullptr;
    }
    if (soc) {
        delete soc;
        soc = nullptr;
    }
    std::cout << ANSI_BOLD ANSI_FG_GREEN "🏁 SoC执行器已清理资源" ANSI_RESET << std::endl;
}

void SoCExecutor::toggle_clock() {
    // 时钟上升沿
    soc->clock = 1;
    soc->eval();
    if (tfp) tfp->dump(sim_time++);

    // 时钟下降沿
    soc->clock = 0;
    soc->eval();
    if (tfp) tfp->dump(sim_time++);
}

void SoCExecutor::run_cycles(int cycles) {
    if (cycles <= 0) return;

    std::cout << "\n" << ANSI_BOLD ANSI_FG_YELLOW "🚀 开始执行 " << cycles << " 个时钟周期..." ANSI_RESET << std::endl;

    for (int i = 0; i < cycles; ++i) {
        if (Verilated::gotFinish()) {
            std::cout << "🛑 仿真因`$finish`指令而终止。" << std::endl;
            break;
        }
        toggle_clock();
    }

    std::cout << ANSI_BOLD ANSI_FG_GREEN "✅ " << cycles << " 个周期执行完毕。" ANSI_RESET << std::endl;
}

extern "C" void flash_read(int32_t addr, int32_t *data)
{
    std::cout << "flash_read: addr=0x" << std::hex << addr << std::dec << std::endl;

    assert(0);
}
extern "C" void mrom_read(int32_t addr, int32_t *data)
{   std::cout << "mrom_read: addr=0x" << std::hex << addr << std::dec << std::endl;
    *data = 0x12345678;
}