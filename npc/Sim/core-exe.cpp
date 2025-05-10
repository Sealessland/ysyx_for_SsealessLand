//
// Created by sealessland on 25-4-30.
////
// Created by sealessland on 25-4-30.
//

#include "include/core-exe.h"
#include <iostream>
#include <iomanip>
#include <Vcore.h>
#include "verilated.h"

#ifdef DIFFTEST
#include "include/difftest.h"
#endif

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
    std::cout << "执行复位周期..." << std::endl;
    for (int i = 0; i < 2; i++) {
        toggle_clock();
    }

    // 关闭复位并执行一个周期使复位信号生效
    core->reset = 0;
    core->clock = 1;
    core->eval();
    tfp->dump(sim_time++);
    std::cout << "复位后上升沿: PC=0x" << std::hex << std::setw(8) << std::setfill('0')
              << core->io_debugPC << ", Inst=0x" << std::setw(8) << std::setfill('0')
              << core->io_debugInst << std::dec << std::endl;
    core->clock = 0;
    core->eval();
    std::cout << "复位后下降沿: PC=0x" << std::hex << std::setw(8) << std::setfill('0')
              << core->io_debugPC << ", Inst=0x" << std::setw(8) << std::setfill('0')
              << core->io_debugInst << std::dec << std::endl;

#ifdef DIFFTEST
    // 差分测试初始化已经在main.cpp中完成
#endif

    return true;
}

void CoreExecutor::finalize() {
    // 关闭波形文件
    if (tfp) {
        tfp->close();
        delete tfp;
        tfp = nullptr;
    }

#ifdef DIFFTEST
    // 清理差分测试资源
    difftest_cleanup();
#endif

    // 释放core模块
    if (core) {
        delete core;
        core = nullptr;
    }
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

#ifdef DIFFTEST
    // 每个时钟周期执行一次差分测试
    difftest_step(core);
#endif
}

void CoreExecutor::run(const CoreConfig& cfg) {
    std::cout << "开始Core仿真，周期数: " << cfg.cycles << std::endl;

    uint32_t last_pc = core->io_debugPC;

    // 直接运行指定周期数
    for (int i = 0; i < cfg.cycles && !Verilated::gotFinish(); i++) {
        toggle_clock();

        // 调试输出
        if (i % 10 == 0 || i == cfg.cycles - 1) {
            std::cout << "周期 " << i << ": PC=0x" << std::hex << std::setw(8) << std::setfill('0')
                      << core->io_debugPC << ", Inst=0x" << std::setw(8) << std::setfill('0')
                      << core->io_debugInst << ", DNPC=0x" << std::setw(8) << std::setfill('0')
                      << core->io_debugDNPC << std::dec << std::endl;
        }
    }

    std::cout << "Core仿真完成，总周期数: " << cfg.cycles << std::endl;
}

void CoreExecutor::run_insts(int insts) {
    if (insts <= 0) return;

    int executed_insts = 0;
    uint32_t current_pc = core->io_debugPC;
    uint32_t current_inst = core->io_debugInst;

    std::cout << "开始执行: PC=0x" << std::hex << std::setw(8) << std::setfill('0')
              << current_pc << ", Inst=0x" << std::setw(8) << std::setfill('0')
              << current_inst << std::dec << std::endl;

    while (executed_insts < insts && !Verilated::gotFinish()) {
        // 执行一个时钟周期
        toggle_clock();

        // 如果PC发生变化，认为一条指令执行完成
        if (core->io_debugDNPC != current_pc) {
            executed_insts++;
#ifdef ITRACE
            // 输出调试信息
            std::cout << "指令 " << executed_insts << ": 从PC=0x" << std::hex << std::setw(8)
                      << std::setfill('0') << current_pc << " 到PC=0x" << std::setw(8)
                      << std::setfill('0') << core->io_debugPC << ", Inst=0x" << std::setw(8)
                      << std::setfill('0') << current_inst << std::dec << std::endl;

            std::cout << "开始执行: PC=0x" << std::hex << std::setw(8) << std::setfill('0')
                      << core->io_debugPC << ", Inst=0x" << std::setw(8) << std::setfill('0')
                      << core->io_debugInst << std::dec << std::endl;
#endif

            // 更新当前PC和指令
            current_pc = core->io_debugPC;
            current_inst = core->io_debugInst;
        }
    }

    std::cout << "执行了 " << executed_insts << " 条指令" << std::endl;
}