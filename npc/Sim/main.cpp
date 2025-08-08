// main.cpp
#include<disasm.h>
#include "include/mem.h"
#include "include/sdb.h"
#include "include/difftest.h"
#include "include/parser.h"
#include "verilated.h"
#include <iostream>
#include <memory> // 使用智能指针
#include<states.h>

#define SOC 1 // 假设我们正在SoC模式下

#ifdef CORE
#include "include/core-exe.h"
CoreExecutor* g_executor = nullptr; // g_executor为调试器提供Core模型
#endif

#ifdef SOC
#include "include/SoC-exe.h"
VysyxSoCFull* g_executor = nullptr; // g_executor为调试器提供SoC模型
#endif

int main(int argc, char** argv) {
    // --- 参数解析与通用初始化 ---
    CoreConfig cfg = parse_args(argc, argv);
    Verilated::commandArgs(argc, argv);
    Memory& memory = get_memory();
    if (!cfg.memory_file.empty()) {
        memory.load_from_file(cfg.memory_file, cfg.start_pc);
    } else {
        memory.load_default_image(cfg.start_pc);
    }

#ifdef SOC
    // --- SoC 模式逻辑 ---
    SoCExecutor executor;
    SoCConfig soc_cfg;
    soc_cfg.wave_file = cfg.wave_file;
    if (!executor.initialize(soc_cfg)) {
        std::cerr << "初始化SoC执行器失败" << std::endl;
        return 1;
    }
    g_executor = executor.get_soc(); // 正确赋值

    // SoC模式下difftest暂不兼容
    if (cfg.diff_test) {
        std::cerr << "警告: 差分测试当前不支持SoC模式。" << std::endl;
    }

    init_sdb();
    if (cfg.debug) {
        sdb_mainloop();
    } else {
        executor.run_cycles(99999999);
    }

#else
    // --- Core 模式逻辑 ---
    CoreExecutor executor;
    if (!executor.initialize(cfg)) {
        std::cerr << "初始化CPU执行器失败" << std::endl;
        return 1;
    }
    // 注意: g_executor 的类型在Core模式下应为 Vcore* (需配合difftest和sdb)
    // 您可能需要调整 g_executor 的定义或 get_core() 的返回值
    // g_executor = executor.get_core();

    if (cfg.diff_test && !cfg.diff_so.empty()) {
        if (!difftest_init(cfg.diff_so.c_str(), executor.get_core())) {
            std::cerr << "初始化差分测试失败: " << cfg.diff_so << std::endl;
            return 1;
        }
    }

    init_sdb();
    if (cfg.debug) {
        sdb_mainloop();
    } else {
        executor.run_insts(99999999);
    }

    if (cfg.diff_test) {
        difftest_cleanup();
    }
#endif

    // --- 通用收尾逻辑 ---
    g_executor = nullptr;
    int exit_code = is_exit_status_bad() ? (cpu_state.halt_ret != 0 ? cpu_state.halt_ret : 1) : 0;
    if (exit_code != 0) {
        std::cout << "程序异常终止，退出码: " << exit_code << std::endl;
    } else {
        std::cout << "程序正常结束，退出码: 0" << std::endl;
    }

    return exit_code;
}
