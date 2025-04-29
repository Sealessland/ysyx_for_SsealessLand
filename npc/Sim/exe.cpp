#include "include/exe.h"

#include <ios>
#include <iostream>

#include "verilated.h"
#include <stdio.h>
#include <bits/ostream.tcc>

CPUExecutor::CPUExecutor() : cpu(nullptr), tfp(nullptr), sim_time(0) {}

CPUExecutor::~CPUExecutor() {
    finalize();
}



bool CPUExecutor::initialize(const CPUConfig& cfg) {
    // 创建波形追踪对象
    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;

    // 创建 CPU 实例
    cpu = new VCPU();

    // 初始化信号 - 避免重复初始化
    cpu->io_pc=cfg.start_pc;
    // 初始化波形追踪
    cpu->trace(tfp, 99);

    // 检查wave_file是否为空
    std::string wave_file = cfg.wave_file.empty() ? "wave.vcd" : cfg.wave_file;
    tfp->open(wave_file.c_str());

    // 打印初始信息
    printf("CPU 实例已创建，将运行 %d 个周期，起始PC=0x%08x\n",
           cfg.cycles, cfg.start_pc);

    return true;
}

void CPUExecutor::run(const CPUConfig& cfg) {
    // 打印仿真开始信息
    printf("开始CPU仿真，共%d个周期，起始PC=0x%08x\n", cfg.cycles, cpu->io_pc);

    // 打印初始状态
    printf("初始状态: PC = 0x%08x\n", cpu->io_pc);

    for (int i = 0; i < cfg.cycles; i++) {
        // 保存当前PC值用于显示
        uint32_t current_pc = cpu->io_pc;

        // 执行一个时钟周期（内部已包含波形记录）
        single_cycle();

        // 打印周期信息（从1开始计数更符合习惯）
        printf("周期 %d: PC = 0x%08x, DNPC = 0x%08x\n",
               i+1, current_pc, cpu->io_dnpc);

        // 更新PC为下一条指令地址
        cpu->io_pc = cpu->io_dnpc;
    }

    // 打印仿真结束信息
    printf("仿真结束，共执行%d个周期\n", cfg.cycles);
}
void CPUExecutor::finalize() {
    if (tfp) {
        tfp->close();
        delete tfp;
        tfp = nullptr;
    }

    if (cpu) {
        cpu->final();
        delete cpu;
        cpu = nullptr;
    }
}

void CPUExecutor::single_cycle() {
    cpu->clock = 0;
    cpu->eval();

    tfp->dump(sim_time++);  // 添加波形记录

    cpu->clock = 1;
    cpu->eval();
    tfp->dump(sim_time++);  // 添加波形记录

}