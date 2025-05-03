//
// Created by sealessland on 25-4-30.
//

#include "include/core-exe.h"

#include <iostream>
#include <Vcore.h>
#include "verilated.h"
#include <stdio.h>
CoreExecutor::CoreExecutor() : core(nullptr), tfp(nullptr), sim_time(0) {}

CoreExecutor::~CoreExecutor() {
    finalize();
}

bool CoreExecutor::initialize(const CoreConfig& cfg) {
    // 初始化Verilator
    Verilated::traceEverOn(true);
    
    // 创建core模块实例
    core = new Vcore();
    core->clock = 0;
    core->reset = 1;  // 开始时处于复位状态
    
    // 设置波形追踪
    tfp = new VerilatedVcdC;
    core->trace(tfp, 99);  // 跟踪99级深度
    tfp->open(cfg.wave_file.c_str());
    
    std::cout << "Core仿真初始化完成，波形文件: " << cfg.wave_file << std::endl;
    return true;
}

void CoreExecutor::finalize() {
    // 关闭波形文件
    if (tfp) {
        tfp->close();
        delete tfp;
        tfp = nullptr;
    }
    
    // 释放core模块
    if (core) {
        delete core;
        core = nullptr;
    }
}

void CoreExecutor::run(const CoreConfig& cfg) {
    // 重置状态
    core->reset = 1;
    core->clock = 0;
    
    std::cout << "开始Core仿真，周期数: " << cfg.cycles << std::endl;
    
    // 复位几个周期
    for (int i = 0; i < 5; i++) {
        toggle_clock();
    }
    
    // 关闭复位
    core->reset = 0;
    
    // 运行指定周期数
    for (int i = 0; i < cfg.cycles && !Verilated::gotFinish(); i++) {
        toggle_clock();
        
        // 调试输出
        if (i % 10 == 0 || i == cfg.cycles - 1) {
            printf("周期 %d: PC=0x%08x, Inst=0x%08x, DNPC=0x%08x\n", 
                   i, core->io_debugPC, core->io_debugInst, core->io_debugDNPC);
        }
    }
    
    std::cout << "Core仿真完成，总周期数: " << cfg.cycles << std::endl;

}

void CoreExecutor::toggle_clock() {
    // 时钟上升沿
    core->clock = 1;
    core->eval();
    tfp->dump(sim_time++);
    
    // 时钟下降沿
    core->clock = 0;
    core->eval();
    tfp->dump(sim_time++);
}
void CoreExecutor::run_cycles(int cycles) {
    for (int i = 0; i < cycles && !Verilated::gotFinish(); i++) {
        toggle_clock();

        if (i % 10 == 0 || i == cycles - 1) {
            printf("周期 %d: PC=0x%08x, Inst=0x%08x, DNPC=0x%08x\n",
                   i, core->io_debugPC, core->io_debugInst, core->io_debugDNPC);
        }
    }
}