// mem.cpp
#include "mem.h"
#include "include/mem.h"

#include <fstream>
#include <cstring>
#include <iostream>
#include <map>

// 全局内存实例
static Memory g_memory;

// 获取内存实例的全局函数
Memory& get_memory() {
    return g_memory;
}

// 构造函数 - 改为稀疏存储
Memory::Memory() {
    std::cout << "虚拟内存已初始化: 支持完整32位地址空间 (0x00000000-0xFFFFFFFF)\n";
}

// 从块索引和块内偏移获取或创建内存块
std::vector<uint8_t>& Memory::get_or_create_block(uint32_t addr) {
    uint32_t block_index = addr / BLOCK_SIZE;
    auto it = memory_blocks.find(block_index);
    if (it == memory_blocks.end()) {
        auto result = memory_blocks.emplace(block_index, std::vector<uint8_t>(BLOCK_SIZE, 0));
        return result.first->second;
    }
    return it->second;
}

// 内存读取函数 - 支持稀疏存储
uint32_t Memory::read(uint32_t addr, uint32_t len) {
    if (len > 4) {
        printf("错误：不支持大于4字节的内存读取 addr=0x%08x, len=%d\n", addr, len);
        return 0;
    }

    uint32_t result = 0;
    for (uint32_t i = 0; i < len; i++) {
        uint32_t block_index = (addr + i) / BLOCK_SIZE;
        uint32_t block_offset = (addr + i) % BLOCK_SIZE;

        auto it = memory_blocks.find(block_index);
        uint8_t value = (it != memory_blocks.end()) ? it->second[block_offset] : 0;
        result |= (value << (i * 8));
    }

    printf("内存读取：addr=0x%08x, len=%d, data=0x%08x\n", addr, len, result);
    return result;
}

// 内存写入函数
void Memory::write(uint32_t addr, uint32_t len, uint32_t value) {
    if (len > 4) {
        printf("错误：不支持大于4字节的内存写入 addr=0x%08x, len=%d\n", addr, len);
        return;
    }

    for (uint32_t i = 0; i < len; i++) {
        uint32_t block_index = (addr + i) / BLOCK_SIZE;
        uint32_t block_offset = (addr + i) % BLOCK_SIZE;

        // 获取或创建内存块
        std::vector<uint8_t>& block = get_or_create_block(addr + i);
        block[block_offset] = (value >> (i * 8)) & 0xFF;
    }

    printf("内存写入：addr=0x%08x, len=%d, data=0x%08x\n", addr, len, value);
}

// 从文件加载内存内容
bool Memory::load_from_file(const std::string& filename, uint32_t offset) {
    std::ifstream file(filename, std::ios::binary);
    if (!file.is_open()) {
        printf("错误：无法打开内存映像文件 '%s'\n", filename.c_str());
        return false;
    }

    // 读取文件大小
    file.seekg(0, std::ios::end);
    size_t filesize = file.tellg();
    file.seekg(0, std::ios::beg);

    // 创建临时缓冲区
    std::vector<char> buffer(filesize);
    file.read(buffer.data(), filesize);

    // 将文件内容写入内存
    for (size_t i = 0; i < filesize; i++) {
        uint32_t addr = offset + i;
        uint32_t block_index = addr / BLOCK_SIZE;
        uint32_t block_offset = addr % BLOCK_SIZE;

        std::vector<uint8_t>& block = get_or_create_block(addr);
        block[block_offset] = static_cast<uint8_t>(buffer[i]);
    }

    printf("已加载内存映像: %s (%zu 字节) 到地址 0x%08x\n",
           filename.c_str(), filesize, offset);
    return true;
}

// 加载默认内存映像
void Memory::load_default_image(uint32_t offset) {
    // 简单的RISC-V指令序列示例
    const uint32_t default_program[] = {
        0x00100513,  // li a0, 1
        0x00200593,  // li a1, 2
        0x00b50633,  // add a2, a0, a1
        0x00c02023,  // sw a2, 0(zero)
        0xffdff06f   // j -4 (无限循环)
    };

    // 计算程序大小
    size_t instr_count = sizeof(default_program) / sizeof(default_program[0]);
    size_t prog_size = instr_count * 4;  // 每条指令4字节

    // 将默认程序写入内存
    for (size_t i = 0; i < instr_count; i++) {
        uint32_t instr = default_program[i];
        for (int j = 0; j < 4; j++) {
            uint32_t addr = offset + i * 4 + j;
            uint32_t block_index = addr / BLOCK_SIZE;
            uint32_t block_offset = addr % BLOCK_SIZE;

            std::vector<uint8_t>& block = get_or_create_block(addr);
            block[block_offset] = (instr >> (j * 8)) & 0xFF;
        }
    }

    printf("已加载内置默认内存镜像 (%zu 字节) 到地址 0x%08x\n",
           prog_size, offset);
}

// DPI-C接口函数实现
extern "C" void mem_read(uint32_t addr, uint32_t len, uint32_t* data) {
    *data = get_memory().read(addr, len);
}

extern "C" void mem_write(uint32_t addr, uint32_t len, uint32_t data) {
    get_memory().write(addr, len, data);
}