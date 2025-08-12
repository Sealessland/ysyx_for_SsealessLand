#include "include/device.h"
#include <iostream>
#include <ctime>
#include <queue>
#include <difftest.h>
// 串口设备状态
static std::queue<char> serial_input_buffer;
static bool serial_ready = true;

// RTC设备状态
static uint64_t rtc_base_time = 0;

// 设备初始化
void device_init() {
    // 初始化RTC基准时间（微秒）
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    rtc_base_time = ts.tv_sec * 1000000ULL + ts.tv_nsec / 1000;
    
    std::cout << "设备初始化完成\n";
}

// 串口读取
uint32_t serial_read(uint32_t offset) {
    switch (offset) {
        case 0: // 数据寄存器
            if (!serial_input_buffer.empty()) {
                char ch = serial_input_buffer.front();
                serial_input_buffer.pop();
                return static_cast<uint32_t>(ch);
            }
            return 0;
        case 5: // 线路状态寄存器 (LSR)
            // bit 0: 数据可读
            // bit 5: 发送保持寄存器空
            // bit 6: 发送器空
            return 0x60 | (!serial_input_buffer.empty() ? 1 : 0);
        default:
            return 0;
    }
}

// 串口写入
void serial_write(uint32_t offset, uint32_t data) {
    switch (offset) {
        case 0: // 数据寄存器
            // 输出字符到控制台
            putchar(data & 0xFF);
            fflush(stdout);
            break;
        default:
            // 其他寄存器暂不处理
            break;
    }
}

// RTC读取
uint32_t rtc_read(uint32_t offset) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    uint64_t current_time = ts.tv_sec * 1000000ULL + ts.tv_nsec / 1000;
    uint64_t elapsed = current_time - rtc_base_time;
    
    switch (offset) {
        case 0: // 低32位
            return static_cast<uint32_t>(elapsed & 0xFFFFFFFF);
        case 4: // 高32位
            return static_cast<uint32_t>(elapsed >> 32);
        default:
            return 0;
    }
}

// RTC写入（通常只读，但可以用于重置）
void rtc_write(uint32_t offset, uint32_t data) {
    if (offset == 0 && data == 0) {
        // 重置RTC
        struct timespec ts;
        clock_gettime(CLOCK_MONOTONIC, &ts);
        rtc_base_time = ts.tv_sec * 1000000ULL + ts.tv_nsec / 1000;
    }
}

// 通用MMIO读取函数
uint32_t mmio_read(uint32_t addr, uint32_t len) {
    uint32_t offset;
    
    if (addr >= SERIAL_PORT && addr < SERIAL_PORT + 8) {
        offset = addr - SERIAL_PORT;
        uint32_t result = serial_read(offset);
        if (len == 1) result &= 0xFF;
        else if (len == 2) result &= 0xFFFF;
        return result;
    }
    else if (addr >= RTC_ADDR && addr < RTC_ADDR + 8) {
        offset = addr - RTC_ADDR;
        return rtc_read(offset);
    }
    else if (addr >= KBD_ADDR && addr < KBD_ADDR + 8) {
        // 键盘设备（暂时返回0）
        return 0;
    }
    else if (addr >= VGACTL_ADDR && addr < VGACTL_ADDR + 16) {
        // VGA控制器（暂时返回0）
        return 0;
    }
    else if (addr >= AUDIO_ADDR && addr < AUDIO_ADDR + 16) {
        // 音频设备（暂时返回0）
        return 0;
    }
    else if (addr >= DISK_ADDR && addr < DISK_ADDR + 16) {
        // 磁盘设备（暂时返回0）
        return 0;
    }
    
    std::cout << "未知MMIO读取地址: 0x" << std::hex << addr << std::dec << std::endl;
    return 0;
}

// 通用MMIO写入函数
void mmio_write(uint32_t addr, uint32_t len, uint32_t data) {
    uint32_t offset;
    
    if (addr >= SERIAL_PORT && addr < SERIAL_PORT + 8) {
        offset = addr - SERIAL_PORT;
        serial_write(offset, data);
    }
    else if (addr >= RTC_ADDR && addr < RTC_ADDR + 8) {
        offset = addr - RTC_ADDR;
        rtc_write(offset, data);
    }
    else if (addr >= KBD_ADDR && addr < KBD_ADDR + 8) {
        // 键盘设备写入
    }
    else if (addr >= VGACTL_ADDR && addr < VGACTL_ADDR + 16) {
        // VGA控制器写入（暂不实现）
    }
    else if (addr >= AUDIO_ADDR && addr < AUDIO_ADDR + 16) {
        // 音频设备写入（暂不实现）
    }
    else if (addr >= DISK_ADDR && addr < DISK_ADDR + 16) {
        // 磁盘设备写入（暂不实现）
    }
    else {
        std::cout << "未知MMIO写入地址: 0x" << std::hex << addr << ", data=0x" << data << std::dec << std::endl;
    }
}

// 检查地址是否在MMIO范围内
bool is_mmio_addr(uint32_t addr) {
    return (addr >= DEVICE_BASE && addr < DEVICE_BASE + 0x1000) ||
           (addr >= FB_ADDR && addr < FB_ADDR + 0x400000) ||
           (addr >= AUDIO_SBUF_ADDR && addr < AUDIO_SBUF_ADDR + 0x200000);
}

