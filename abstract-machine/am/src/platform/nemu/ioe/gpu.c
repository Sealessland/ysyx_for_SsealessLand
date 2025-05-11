#include <am.h>
#include <nemu.h>

#define SYNC_ADDR (VGACTL_ADDR + 4)

#define HEIGHT_MASK 0x0000ffff
#define WIDTH_MASK 0xffff0000

void __am_gpu_init() {
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) 
{
	cfg->present = true;
	cfg->has_accel = false;
	cfg->width = inl(VGACTL_ADDR) >> 16;
	cfg->height = inl(VGACTL_ADDR) & HEIGHT_MASK;
	cfg->vmemsz = cfg->width * cfg->height * sizeof(uint32_t);
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
	if (ctl->sync)
		outl(SYNC_ADDR, 1);

	uint32_t * pixels = (uint32_t *)ctl->pixels;
	uint32_t pixel;
	int x = ctl->x, y = ctl->y;
	int w = ctl->w, h = ctl->h;
	int width = inl(VGACTL_ADDR) >> 16;

	for(int i = 0; i < h; i++)
	{
		for(int j = 0; j < w; j++)
		{
			pixel = pixels[w * i + j];
			outl(FB_ADDR + (y + i) * width * sizeof(uint32_t) + (x + j) * sizeof(uint32_t), pixel);
		}
	}
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}