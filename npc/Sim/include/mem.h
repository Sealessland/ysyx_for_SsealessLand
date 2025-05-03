
#ifndef MEM_H
#define MEM_H

#include <cstdint>
#include <vector>
#include <string>
#include <map>

// 内存相关功能类
class Memory {
private:
    static constexpr size_t BLOCK_SIZE = 1024 * 1024; // 1MB大小的内存块
    std::map<uint32_t, std::vector<uint8_t>> memory_blocks; // 稀疏存储的内存块

    // 获取或创建内存块
    std::vector<uint8_t>& get_or_create_block(uint32_t addr);

public:
    // 构造函数，不再需要指定大小
    Memory();

    // 内存读取函数
    uint32_t read(uint32_t addr, uint32_t len);

    // 内存写入函数
    void write(uint32_t addr, uint32_t len, uint32_t value);

    // 从文件加载内存内容
    bool load_from_file(const std::string& filename, uint32_t offset = 0x80000000);

    // 加载默认的内存镜像
    void load_default_image(uint32_t offset = 0x80000000);
};

// 获取全局内存实例
Memory& get_memory();

// 为了兼容C接口的全局函数
extern "C" {
    void mem_read(uint32_t addr, uint32_t len, uint32_t* data);
    void mem_write(uint32_t addr, uint32_t len, uint32_t data);
}

#endif // MEM_H