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

    // 执行复位周期
    printf("执行复位周期...\n");
    for (int i = 0; i < 2; i++) {
        toggle_clock();
    }

    // 关闭复位并执行一个周期使复位信号生效
    core->reset = 0;
    core->clock = 1;
    core->eval();
    tfp->dump(sim_time++);
    printf("复位后上升沿: PC=0x%08x, Inst=0x%08x\n", core->io_debugPC, core->io_debugInst);
    core->clock = 0;
    core->eval();
    printf("复位后下降沿: PC=0x%08x, Inst=0x%08x\n", core->io_debugPC, core->io_debugInst);
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
    std::cout << "开始Core仿真，周期数: " << cfg.cycles << std::endl;

    // 直接运行指定周期数
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
void CoreExecutor::run_insts(int insts) {
    if (insts <= 0) return;

    int executed_insts = 0;
    uint32_t current_pc = core->io_debugPC;
    uint32_t current_inst = core->io_debugInst;

    printf("开始执行: PC=0x%08x, Inst=0x%08x\n", current_pc, current_inst);

    while (executed_insts < insts && !Verilated::gotFinish()) {
        // 执行一个时钟周期
        toggle_clock();

        // 如果PC发生变化，认为一条指令执行完成
        if (core->io_debugDNPC != current_pc) {
            executed_insts++;

            // 输出调试信息
            printf("指令 %d: 从PC=0x%08x 到PC=0x%08x, Inst=0x%08x\n",
                   executed_insts, current_pc, core->io_debugPC, current_inst);

            // 更新当前PC和指令
            current_pc = core->io_debugPC;
            current_inst = core->io_debugInst;
        }
    }

    printf("执行了 %d 条指令\n", executed_insts);
}