// mem.cpp
#include "mem.h"
#include "include/mem.h"
#include "include/device.h"

#include <fstream>
#include <cstring>
#include <iostream>
#include <map>

#ifdef DIFFTEST
#include "include/difftest.h"
#endif

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

// 内存读取函数 - 支持稀疏存储和MMIO
uint32_t Memory::read(uint32_t addr, uint32_t len) {
    if (len > 4) {
        printf("错误：不支持大于4字节的内存读取 addr=0x%08x, len=%d\n", addr, len);
        return 0;
    }

    // 检查是否为MMIO地址
    if (is_mmio_addr(addr)) {
        uint32_t result = mmio_read(addr, len);
#ifdef MTRACE
        printf("MMIO读取：addr=0x%08x, len=%d, data=0x%08x\n", addr, len, result);
#endif
        return result;
    }

    uint32_t result = 0;
    for (uint32_t i = 0; i < len; i++) {
        uint32_t block_index = (addr + i) / BLOCK_SIZE;
        uint32_t block_offset = (addr + i) % BLOCK_SIZE;

        auto it = memory_blocks.find(block_index);
        uint8_t value = (it != memory_blocks.end()) ? it->second[block_offset] : 0;
        result |= (value << (i * 8));
    }

#ifdef MTRACE
    printf("内存读取：addr=0x%08x, len=%d, data=0x%08x\n", addr, len, result);
#endif
    return result;
}

// 内存写入函数 - 支持MMIO
void Memory::write(uint32_t addr, uint32_t len, uint32_t value) {
    if (len > 4) {
        printf("错误：不支持大于4字节的内存写入 addr=0x%08x, len=%d\n", addr, len);
        return;
    }

    // 检查是否为MMIO地址
    if (is_mmio_addr(addr)) {
        mmio_write(addr, len, value);
#ifdef MTRACE
        printf("MMIO写入：addr=0x%08x, len=%d, data=0x%08x\n", addr, len, value);
#endif
        return;
    }

    for (uint32_t i = 0; i < len; i++) {
        uint32_t block_index = (addr + i) / BLOCK_SIZE;
        uint32_t block_offset = (addr + i) % BLOCK_SIZE;

        // 获取或创建内存块
        std::vector<uint8_t>& block = get_or_create_block(addr + i);
        block[block_offset] = (value >> (i * 8)) & 0xFF;
    }

#ifdef MTRACE
    printf("内存写入：addr=0x%08x, len=%d, data=0x%08x\n", addr, len, value);
#endif
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
    // RISC-V MMIO测试程序
    const uint32_t default_program[] = {
        // 初始化栈指针
        0x87fff137,  // lui sp, 0x87fff        # sp = 0x87fff000
        0xff010113,  // addi sp, sp, 0xff0     # sp = 0x87fff000 + 0xff0 = 0x87fffff0
        
        // 设置MMIO基地址
        0xa0000537,  // lui a0, 0xa0000        # a0 = 0xa0000000 (DEVICE_BASE)
        
        // 计算串口和RTC地址
        0x3f800593,  // li a1, 0x3f8           # a1 = SERIAL_PORT offset
        0x00b50633,  // add a2, a0, a1         # a2 = SERIAL_PORT地址 (DEVICE_BASE + SERIAL_PORT_OFFSET)
        
        0x04800793,  // li a5, 0x48            # a5 = RTC_ADDR offset
        0x00f507b3,  // add a5, a0, a5         # a5 = RTC_ADDR地址 (DEVICE_BASE + RTC_ADDR_OFFSET)

        // 输出 "RTC Lo: "
        0x05200693,  // li a3, 'R'
        0x00d62023,  // sw a3, 0(a2)
        0x05400693,  // li a3, 'T'
        0x00d62023,  // sw a3, 0(a2)
        0x04300693,  // li a3, 'C'
        0x00d62023,  // sw a3, 0(a2)
        0x02000693,  // li a3, ' '
        0x00d62023,  // sw a3, 0(a2)
        0x04c00693,  // li a3, 'L'
        0x00d62023,  // sw a3, 0(a2)
        0x06f00693,  // li a3, 'o'
        0x00d62023,  // sw a3, 0(a2)
        0x03a00693,  // li a3, ':'
        0x00d62023,  // sw a3, 0(a2)
        0x02000693,  // li a3, ' '
        0x00d62023,  // sw a3, 0(a2)

        // 测试RTC读取低32位
        0x0007a683,  // lw a3, 0(a5)           # 读取RTC低32位到 a3 (was a5)

        // 打印 a3 (RTC低32位) 的十六进制值
        0x00800713,  // li a4, 8               # 循环8次
        0x01c00393,  // li t2, 28              # 初始移位数 (32 - 4)
        // print_hex_loop_start:
        0x0006f29b,  // srl t0, a3, t2         # t0 = (a3 >> t2)  (获取最高4位)
        0x00f2f293,  // andi t0, t0, 0xf       # t0 = t0 & 0xf (只保留低4位)

        // 将半字节转换为ASCII ('0'-'9', 'A'-'F')
        0x0092f313,  // addi t1, t0, -9        # t1 = t0 - 9
        0x00031063,  // bgtz t1, is_letter     # if (t0 > 9) goto is_letter
        0x0302e313,  // addi t1, t0, '0'       # t1 = t0 + '0'
        0x0050006f,  // j print_char
        // is_letter:
        0x0372e313,  // addi t1, t0, 'A'-10    # t1 = t0 + ('A' - 10)
        // print_char:
        0x00662023,  // sw t1, 0(a2)           # 输出字符到串口

        0xfec3d393,  // addi t2, t2, -4        # t2 = t2 - 4 (准备下一个半字节)
        0xfff71ee3,  // bnez a4, print_hex_loop_start # if (--a4 != 0) goto loop

        // 输出换行符
        0x00a00693,  // li a3, 10              # a3 = '\n'
        0x00d62023,  // sw a3, 0(a2)           # 输出换行
        
        // 无限循环结束
        0x0000006f,  // j .                    # 无限循环
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
extern "C" void inst_mem_read(int addr, int len, int* data) {
    uint32_t result = get_memory().read(static_cast<uint32_t>(addr), static_cast<uint32_t>(len));
    *data = static_cast<int>(result);
    std::cout << "指令内存读取：addr=0x" << std::hex << addr << ", len=" << len << ", data=0x" << *data << std::dec << std::endl;
}
extern "C" void data_mem_read(int addr, int len, int* data) {
    uint32_t physical_addr = static_cast<uint32_t>(addr) ;
    uint32_t result = get_memory().read(physical_addr, static_cast<uint32_t>(len));
    *data = static_cast<int>(result);
    std::cout << "数据内存读取：addr=0x" << std::hex << addr << ", len=" << len << ", data=0x" << *data << std::dec << std::endl;
}
extern "C" void data_mem_write(int addr, int len, int data)
{
    uint32_t physical_addr = static_cast<uint32_t>(addr);
    get_memory().write(physical_addr, static_cast<uint32_t>(len), static_cast<uint32_t>(data));
    std::cout << "数据内存write：addr=0x" << std::hex << addr << ", len=" << len << ", data=0x" << data << std::dec << std::endl;
}