#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define MAXDEC 64
static char *__out;
static size_t __remain; // 用于snprintf的剩余空间

void sputch(char ch){*__out++ = ch;}

// 安全版本的sputch，用于snprintf
void sputch_n(char ch) {
  if (__remain > 1) { // 保留一个字节给'\0'
    *__out++ = ch;
    __remain--;
  }
}

int vprintf(void(*gputch)(char), const char *fmt, va_list ap) {
  int i;
  bool in_format = false;
  int long_flags = 0;
  int pos = 0;
  for (; *fmt != '\0'; fmt++) {
    if (*fmt != '%' && in_format == false) {
      gputch(*fmt); pos++;
    }
    else {
      if (in_format == false && (*fmt == '%')) {
        fmt++;
        in_format = true;
      }
      switch (*fmt) {
        case 'l':  //para
          long_flags += 1;
          break;
        case 's': { //%s
          char *s;
          assert(long_flags == 0);
          s = va_arg(ap, char *);
          // 添加NULL检查
          if (s == NULL) {
            static const char null_str[] = "(null)";
            s = (char *)null_str;
          }
          for (i = 0; s[i] != '\0'; i++) {
            gputch(s[i]); pos++;
          }
          in_format = false;
          break;
        }
        case 'c': { //%c
          int c;
          assert(long_flags == 0);
          c = va_arg(ap, int);
          gputch((char)c); pos++;
          in_format = false;
          break;
        }
        case 'd': { //%d
          assert(long_flags <= 2);
          int64_t d = 0;
          if (long_flags == 2)    //get d
            d = va_arg(ap, int64_t);
          else
            d = va_arg(ap, int32_t);

          // 处理INT_MIN的特殊情况
          if (d == INT64_MIN) {
            const char *min_str = "-9223372036854775808";
            for (i = 0; min_str[i] != '\0'; i++) {
              gputch(min_str[i]); pos++;
            }
          } else {
            if (d < 0) {
              d = -d;
              gputch('-'); pos++;
            }
            if (d == 0) {
              gputch('0'); pos++;
            }
            else {
              char invert[MAXDEC];
              i = 0;
              for (; d != 0; i++, d /= 10) {
                invert[i] = d % 10 + '0';
              }
              for (i -= 1; i >= 0; i--) {
                gputch(invert[i]); pos++;
              }
            }
          }
          long_flags = 0;
          in_format = false;
          break;
        }
        case 'x':
        case 'X': { //%x, %X
          uint64_t x = 0;
          assert(long_flags <= 2);
          if (long_flags == 2)
            x = va_arg(ap, uint64_t);
          else
            x = va_arg(ap, uint32_t);

          if (x == 0) {
            gputch('0'); pos++;
          }
          else {
            char invert[MAXDEC];
            i = 0;
            for (; x != 0; i++, x /= 16) {
              int digit = x % 16;
              if (digit < 10)
                invert[i] = digit + '0';
              else
                invert[i] = digit - 10 + (*fmt == 'x' ? 'a' : 'A');
            }
            for (i -= 1; i >= 0; i--) {
              gputch(invert[i]); pos++;
            }
          }
          long_flags = 0;
          in_format = false;
          break;
        }
        case 'p': { //%p
          uintptr_t p = va_arg(ap, uintptr_t);
          gputch('0'); pos++;
          gputch('x'); pos++;
          
          if (p == 0) {
            gputch('0'); pos++;
          }
          else {
            char invert[MAXDEC];
            i = 0;
            for (; p != 0; i++, p /= 16) {
              int digit = p % 16;
              if (digit < 10)
                invert[i] = digit + '0';
              else
                invert[i] = digit - 10 + 'a';
            }
            for (i -= 1; i >= 0; i--) {
              gputch(invert[i]); pos++;
            }
          }
          long_flags = 0;
          in_format = false;
          break;
        }
        case 'u': { //%u
          uint64_t u = 0;
          assert(long_flags <= 2);
          if (long_flags == 2)    //get d
            u = va_arg(ap, uint64_t);
          else
            u = va_arg(ap, uint32_t);

          if (u == 0) {
            gputch('0'); pos++;
          }
          else {
            char invert[MAXDEC];
            i = 0;
            for (; u != 0; i++, u /= 10) {
              invert[i] = u % 10 + '0';
            }
            for (i -= 1; i >= 0; i--) {
              gputch(invert[i]); pos++;
            }
          }
          long_flags = 0;
          in_format = false;
          break;
        }
        case '%':
          gputch('%'); pos++;
          in_format = false;
          break;
        default:
          // 处理未知格式说明符
          gputch('%'); pos++;
          gputch(*fmt); pos++;
          in_format = false;
          break;
      }
    }
  }
  return pos;
}

int printf(const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int res = vprintf(putch, fmt, ap);
  va_end(ap);
  return res;
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  __out = out;
  int res = vprintf(sputch, fmt, ap);
  sputch('\0');
  return res;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  __out = out;
  int res = vprintf(sputch, fmt, ap);
  sputch('\0');
  va_end(ap);
  return res; // 修复: 不应该使用res++
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  if (n == 0) return 0;
  
  __out = out;
  __remain = n;
  
  int res = vprintf(sputch_n, fmt, ap);
  
  // 确保字符串以NULL结尾
  if (n > 0) {
    if (__remain > 0)
      *__out = '\0';
    else
      out[n-1] = '\0';
  }
  
  return res;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  int res = vsnprintf(out, n, fmt, ap);
  va_end(ap);
  return res;
}

#endif