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
        0x00100093, // addi x1, x0, 1
        0x00200113, // addi x2, x0, 2
        0x00300193, // addi x3, x0, 3
        0x00400213, // addi x4, x0, 4
        0x00500293, // addi x5, x0, 5
        0x00600313, // addi x6, x0, 6
        0x00700393, // addi x7, x0, 7
        0x00800413, // addi x8, x0, 8
        0x00900493, // addi x9, x0, 9
        0x00a00513, // addi x10, x0, 10
        0x00b00593, // addi x11, x0, 11
        0x00c00613, // addi x12, x0, 12
        0x00d00693, // addi x13, x0, 13
        0x00e00713, // addi x14, x0, 14
        0x00f00793, // addi x15, x0, 15
        0x01000813, // addi x16, x0, 16
        0x01100893, // addi x17, x0, 17
        0x01200913, // addi x18, x0, 18
        0x01300993, // addi x19, x0, 19
        0x01400a13, // addi x20, x0, 20
        0x01500a93, // addi x21, x0, 21
        0x01600b13, // addi x22, x0, 22
        0x01700b93, // addi x23, x0, 23
        0x01800c13, // addi x24, x0, 24
        0x01900c93, // addi x25, x0, 25
        0x01a00d13, // addi x26, x0, 26
        0x01b00d93, // addi x27, x0, 27
        0x01c00e13, // addi x28, x0, 28
        0x01d00e93, // addi x29, x0, 29
        0x01e00f13, // addi x30, x0, 30
        0x01f00f93, // addi x31, x0, 31
        0x00000297, // auipc x5, 0x0   // 第32条：x5 = pc + 0（假设此时pc为当前指令地址）
        0x005283b3, // add x7, x5, x5  // 第33条：x7 = x5 + x5
        0xfe9ff06f, // jal x0, -24
        // 依次将1~31号寄存器填充为其序号
        // 1. 准备要写入的数据
        0xdeadb5b7, // lui a1, 0xdeadb      ; a1 = 0xdeadb000
        0xeef58593, // addi a1, a1, -273    ; a1 = 0xdeadbeef (要写入的数据)

        // 2. 准备目标内存地址
        0x80000537, // lui a0, 0x80000      ; a0 = 0x80000000
        0x00450513, // addi a0, a0, 4       ; a0 = 0x80000004 (目标地址)

        // 3. 执行写操作
        0x00b52223, // sw a1, 4(a0)         ; M[0x80000004] = a1

        // 4. 执行读操作进行验证
        0x00452603, // lw a2, 4(a0)         ; a2 = M[0x80000004], difftest会检查a2是否等于a1

        0xdeadb5b7, // lui a1, 0xdeadb      ; a1 = 0xdeadb000
   0xeef58593, // addi a1, a1, -273    ; a1 = 0xdeadbeef (要写入的数据)

   // 2. 准备目标内存地址
   0x80000537, // lui a0, 0x80000      ; a0 = 0x80000000
   0x00450513, // addi a0, a0, 4       ; a0 = 0x80000004 (目标地址)

   // 3. 执行写操作
   0x00b52223, // sw a1, 4(a0)         ; M[0x80000004] = a1

   // 4. 执行读操作进行验证
   0x00452603, // lw a2, 4(a0)         ; a2 = M[0x80000004], difftest会检查a2是否等于a1

   // 5. 无限循环结束


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

// C-style interface for Verilator DPI-C
extern "C" void memory_read(int addr, int* data) {
    uint32_t read_val = get_memory().read(static_cast<uint32_t>(addr), 4);
    std::cout << "mem_read: addr=0x" << std::hex << addr << ", data=0x" << read_val << std::dec << std::endl;
    *data = read_val;
}

extern "C" void memory_write(int addr, int data ,int len) {
    std::cout << "mem_write: addr=0x" << std::hex << addr << ", data=0x" << data << std::endl;
    get_memory().write(static_cast<uint32_t>(addr), len, data);
}
