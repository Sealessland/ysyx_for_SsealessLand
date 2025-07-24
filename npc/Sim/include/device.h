//
// Created by sealessland on 25-6-1.
//

#ifndef DEVICE_H
#define DEVICE_H

#include <cstdint>

#define DEVICE_BASE 0xa0000000
#define MMIO_BASE 0xa0000000

#define SERIAL_PORT     (DEVICE_BASE + 0x00003f8)
#define KBD_ADDR        (DEVICE_BASE + 0x0000060)
#define RTC_ADDR        (DEVICE_BASE + 0x0000048)
#define VGACTL_ADDR     (DEVICE_BASE + 0x0000100)
#define AUDIO_ADDR      (DEVICE_BASE + 0x0000200)
#define DISK_ADDR       (DEVICE_BASE + 0x0000300)
#define FB_ADDR         (MMIO_BASE   + 0x1000000)
#define AUDIO_SBUF_ADDR (MMIO_BASE   + 0x1200000)

// 设备API函数声明
void device_init();
bool is_mmio_addr(uint32_t addr);
uint32_t mmio_read(uint32_t addr, uint32_t len);
void mmio_write(uint32_t addr, uint32_t len, uint32_t data);

// 具体设备函数声明
uint32_t serial_read(uint32_t offset);
void serial_write(uint32_t offset, uint32_t data);
uint32_t rtc_read(uint32_t offset);
void rtc_write(uint32_t offset, uint32_t data);

// 差分测试相关

#endif //DEVICE_H
