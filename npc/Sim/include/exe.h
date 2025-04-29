// include/exe.h
#ifndef EXE_H
#define EXE_H

#include "verilator_model/VCPU.h"
#include "verilated_vcd_c.h"
#include <string>
#include <cstdint>

// CPU执行配置
struct CPUConfig {
    std::string wave_file;  // 波形文件名
    int cycles;             // 仿真周期数
    uint32_t start_pc;      // 起始PC
};

// CPU执行器类
class CPUExecutor {
private:
    VCPU* cpu;                // CPU实例
    VerilatedVcdC* tfp;       // 波形追踪对象
    unsigned long sim_time;   // 仿真时间

public:
    CPUExecutor();
    ~CPUExecutor();

    // 初始化仿真器
    bool initialize(const CPUConfig& cfg);
    void single_cycle();
    // 运行仿真
    void run(const CPUConfig& cfg);

    // 清理资源
    void finalize();
};

#endif // EXE_H