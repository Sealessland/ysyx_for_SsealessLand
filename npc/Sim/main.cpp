// main.cpp
#include "include/mem.h"
#include "include/core-exe.h"
#include "include/sdb.h"
#include "include/difftest.h"
#include "include/parser.h"  // 添加parser头文件
#include "verilated.h"
#include <iostream>

// 全局执行器指针，供调试器使用
CoreExecutor* g_executor = nullptr;

int main(int argc, char** argv) {
    // 解析命令行参数
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
        executor.run(cfg);
    }

    // 清理差分测试资源
    if (cfg.diff_test) {
        difftest_cleanup();
    }

    // 清理全局指针
    g_executor = nullptr;
    return 0;
}