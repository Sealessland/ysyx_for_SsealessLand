#ifndef SIM_SOC_EXE_H
#define SIM_SOC_EXE_H

#include <string>
#include <cstdint>
#include "verilated.h"
#include "verilated_vcd_c.h"
// 向前声明Verilator生成的类
class VysyxSoCFull;
class VerilatedVcdC;

// 为SoC执行器提供配置
struct SoCConfig {
    std::string wave_file = "soc_wave.vcd"; // 默认波形文件名
};

/*
 * SoCExecutor类负责管理VysyxSoCFull模型的仿真生命周期。
 * 它可以初始化模型、执行复位、按周期运行以及生成波形文件。
 */
class SoCExecutor {
public:
    SoCExecutor();
    ~SoCExecutor();

    // 初始化SoC仿真环境
    bool initialize(const SoCConfig& cfg);

    // 运行指定数量的时钟周期
    void run_cycles(int cycles);

    // 结束仿真并清理资源
    void finalize();

    // 新增: 获取VysyxSoCFull模型实例的指针
    VysyxSoCFull* get_model() { return soc; }

private:
    // 驱动时钟翻转一个完整的周期
    void toggle_clock();

    VysyxSoCFull* soc;      // 指向SoC Verilated模型的指针
    VerilatedVcdC* tfp;     // 指向波形VCD文件的指针
    uint64_t sim_time;      // 记录仿真时间
};

#endif // SIM_SOC_EXE_H