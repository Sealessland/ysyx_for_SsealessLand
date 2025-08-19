#include <am.h>
#include "npc.h"
#define CONFIG_SIM_FREQ_M 114514
void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
	uint32_t us_h, us_l;
	us_h = inl(RTC_ADDR + 4);
	us_l = inl(RTC_ADDR);
	uptime->us = ((uint64_t)us_h + (uint64_t)us_l) / CONFIG_SIM_FREQ_M;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
