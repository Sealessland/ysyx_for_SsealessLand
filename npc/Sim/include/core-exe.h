#ifndef CORE_EXE_H
#define CORE_EXE_H

#include <string>
#include "verilated.h"
#include "verilated_vcd_c.h"
// 前向声明
class Vcore;

// 核心仿真配置
struct CoreConfig {
    std::string wave_file;    // 波形文件名
    int cycles;               // 仿真周期数
    uint32_t start_pc;        // 起始PC值
    bool debug;               // 是否启用调试模式
    bool diff_test;           // 是否启用差分测试
    std::string memory_file;  // 内存文件路径
    std::string diff_so;      // 差分测试SO文件路径
    bool itrace;
    bool mtrace;
};

class CoreExecutor {
public:
    CoreExecutor();
    ~CoreExecutor();
    void run_cycles(int cycles);
    bool initialize(const CoreConfig& cfg);
    void finalize();
    void run(const CoreConfig& cfg);
    void toggle_clock();
    void run_insts(int insts);
    Vcore* get_core() { return core; }


private:

    Vcore* core;           // 核心模块实例
    VerilatedVcdC* tfp;    // 波形跟踪指针
    vluint64_t sim_time;   // 仿真时间
};

#endif // CORE_EXE_H
