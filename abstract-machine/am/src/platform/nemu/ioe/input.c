#include <am.h>
#include <nemu.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
  uint32_t key_val = inl(KBD_ADDR);
  
  // 检查是否有按键
  if (key_val == AM_KEY_NONE) {
    kbd->keydown = 0;
    kbd->keycode = AM_KEY_NONE;
  } else {
    // 检查最高位是否表示按下状态
    kbd->keydown = (key_val & KEYDOWN_MASK) ? 1 : 0;
    // 清除最高位获取实际的键码
    kbd->keycode = key_val & ~KEYDOWN_MASK;
  }
}