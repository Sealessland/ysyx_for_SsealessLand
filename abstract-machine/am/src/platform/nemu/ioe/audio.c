#include <am.h>
#include <nemu.h>

#define AUDIO_FREQ_ADDR      (AUDIO_ADDR + 0x00)
#define AUDIO_CHANNELS_ADDR  (AUDIO_ADDR + 0x04)
#define AUDIO_SAMPLES_ADDR   (AUDIO_ADDR + 0x08)
#define AUDIO_SBUF_SIZE_ADDR (AUDIO_ADDR + 0x0c)
#define AUDIO_INIT_ADDR      (AUDIO_ADDR + 0x10)
#define AUDIO_COUNT_ADDR     (AUDIO_ADDR + 0x14)

static int sbuf_size, count;
static int sbuf_tail = 0;

void __am_audio_init() {
}

void __am_audio_config(AM_AUDIO_CONFIG_T *cfg)
{
	cfg->present = false;
	cfg->bufsize = (int)inl(AUDIO_SBUF_SIZE_ADDR);
	sbuf_size = cfg->bufsize;
}

void __am_audio_ctrl(AM_AUDIO_CTRL_T *ctrl)
{
	outl(AUDIO_FREQ_ADDR, (uint32_t)ctrl->freq);
	outl(AUDIO_CHANNELS_ADDR, (uint32_t)ctrl->channels);
	outl(AUDIO_SAMPLES_ADDR, (uint32_t)ctrl->samples);
	outl(AUDIO_INIT_ADDR, 1);
}

void __am_audio_status(AM_AUDIO_STATUS_T *stat) 
{
	stat->count = (int)inl(AUDIO_COUNT_ADDR);
	count = stat->count;
}

void __am_audio_play(AM_AUDIO_PLAY_T *ctl) 
{
	uint32_t len = (uint32_t)((uintptr_t)ctl->buf.end - (uintptr_t)ctl->buf.start);
	count = (int)(inl(AUDIO_COUNT_ADDR));

	// when len > free space, only write free space
	if(len > sbuf_size - count)
		len = sbuf_size - count;

	uint32_t i = 0;
	for(i = 0; i < len; i++) 
	{
		outb(AUDIO_SBUF_ADDR + sbuf_tail, *((uint8_t *)ctl->buf.start + i));
		count++;
		sbuf_tail = (sbuf_tail + 1) % sbuf_size;
	}
	outl(AUDIO_COUNT_ADDR, count);
}
