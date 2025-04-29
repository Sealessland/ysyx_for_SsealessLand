// main.cpp
#include "include/mem.h"
#include "include/exe.h"
#include "verilated.h"
#include <stdio.h>
#include <string>
#include <cstring>

// 解析命令行参数
CPUConfig parse_args(int argc, char** argv, std::string& memory_file) {
    CPUConfig cfg;
    cfg.wave_file = "wave.vcd";  // 默认波形文件名
    cfg.cycles = 30;             // 默认仿真周期数
    cfg.start_pc = 0x80000000;   // 默认起始PC
    memory_file = "";            // 默认不加载内存文件

    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-m") == 0 || strcmp(argv[i], "--memory") == 0) {
            if (i + 1 < argc) {
                memory_file = argv[++i];
            }
        } else if (strcmp(argv[i], "-w") == 0 || strcmp(argv[i], "--wave") == 0) {
            if (i + 1 < argc) {
                cfg.wave_file = argv[++i];
            }
        } else if (strcmp(argv[i], "-c") == 0 || strcmp(argv[i], "--cycles") == 0) {
            if (i + 1 < argc) {
                cfg.cycles = atoi(argv[++i]);
            }
        } else if (strcmp(argv[i], "-pc") == 0 || strcmp(argv[i], "--start-pc") == 0) {
            if (i + 1 < argc) {
                cfg.start_pc = strtoul(argv[++i], NULL, 0);
            }
        } else if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            printf("用法: %s [选项]\n", argv[0]);
            printf("选项:\n");
            printf("  -m, --memory FILE   从FILE加载内存映像\n");
            printf("  -w, --wave FILE     将波形输出到FILE (默认: wave.vcd)\n");
            printf("  -c, --cycles N      运行N个周期 (默认: 10)\n");
            printf("  -pc, --start-pc VAL 设置起始PC值 (默认: 0x80000000)\n");
            printf("  -h, --help          显示此帮助信息\n");
            exit(0);
        }
    }

    return cfg;
}

int main(int argc, char** argv) {
    // 解析命令行参数
    std::string memory_file;
    CPUConfig cfg = parse_args(argc, argv, memory_file);

    // 初始化 Verilator 上下文
    Verilated::commandArgs(argc, argv);

    // 获取内存实例并初始化
    Memory& memory = get_memory();

    // 如果指定了内存文件，加载内存
    if (!memory_file.empty()) {
        if (!memory.load_from_file(memory_file)) {
            return 1;
        }
    } else {
        // 没有指定内存文件，加载默认内置镜像
        memory.load_default_image();
    }

    // 创建并初始化CPU执行器
    CPUExecutor executor;
    if (!executor.initialize(cfg)) {
        return 1;
    }

    // 运行仿真
    executor.run(cfg);

    // 资源清理由析构函数自动完成
    return 0;
}