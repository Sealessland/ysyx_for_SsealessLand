// main.cpp
#include<disasm.h>
#include "include/mem.h"
#include "include/core-exe.h"
#include "include/sdb.h"
#include "include/difftest.h"
#include "include/parser.h"  // 添加parser头文件
#include "verilated.h"
#include <iostream>
#include<states.h>

// 全局执行器指针，供调试器使用
CoreExecutor* g_executor = nullptr;

int main(int argc, char** argv) {
    test_disassembler();
    
    // 反汇编单条指令
    uint32_t instruction = 0x009704b3;  // add s1, a4, s1
    uint32_t addr = 0x80000114;
    
    std::cout << disassemble(addr, instruction) << std::endl;
    std::cout << disassemble_with_colors(addr, instruction) << std::endl;
    

    // 解析命令行参数
#ifdef DIFFTEST
    std::cout<<"marco enabled"<<std::endl;
#endif

    CoreConfig cfg = parse_args(argc, argv);

    // 初始化Verilator上下文
    Verilated::commandArgs(argc, argv);

    // 获取内存实例并初始化
    Memory& memory = get_memory();

    // 加载内存
    if (!cfg.memory_file.empty()) {
        if (!memory.load_from_file(cfg.memory_file, cfg.start_pc)) {
            std::cerr << "加载内存文件失败: " << cfg.memory_file << std::endl;
            return 1;
        }
    } else {
        // 加载默认内置镜像
        memory.load_default_image(cfg.start_pc);
    }

    // 创建并初始化CPU执行器
    CoreExecutor executor;
    if (!executor.initialize(cfg)) {
        std::cerr << "初始化CPU执行器失败" << std::endl;
        return 1;
    }

    // 设置全局执行器指针
    g_executor = &executor;

    // 初始化调试器
    init_sdb();

    // 如果启用差分测试，初始化差分测试模块
    if (cfg.diff_test && !cfg.diff_so.empty()) {
        if (!difftest_init(cfg.diff_so.c_str(), executor.get_core())) {
            std::cerr << "初始化差分测试失败: " << cfg.diff_so << std::endl;
            return 1;
        }
    }

    // 根据模式运行
    if (cfg.debug) {
        // 进入调试模式
        sdb_mainloop();
    } else {
        // 直接运行
        executor.run_insts(99999999);
    }

    // 清理差分测试资源
    if (cfg.diff_test) {
        difftest_cleanup();
    }

    // 清理全局指针
    g_executor = nullptr;
    int exit_code = 0;
    if (is_exit_status_bad()) {
        exit_code = cpu_state.halt_ret != 0 ? cpu_state.halt_ret : 1;
        std::cout << "程序异常终止，退出码: " << exit_code << std::endl;
    } else {
        std::cout << "程序正常结束，退出码: 0" << std::endl;
    }

    return exit_code;
}

