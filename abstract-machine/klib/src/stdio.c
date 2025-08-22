#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <stdio.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

// function number is mainly copied from linux kernel
#define ZEROPAD	0x1		/* pad with zero */
#define SIGN	0x2		/* unsigned/signed long */
#define PLUS	0x4		/* show plus */
#define SPACE	0x8		/* space if plus */
#define LEFT	0x10		/* left justified */
#define SPECIAL	0x20		/* 0x */
#define LARGE	0x40		/* use 'ABCDEF' instead of 'abcdef' */


static char input_buffer[1024];


static int skip_atoi(const char **s)
{
	int num = 0;
	while(**s >= '0' && **s <= '9')
	{
		num = num * 10 + **s - '0';
		(*s)++;
	}
	return num;
}

// make sure that there precision is -1 if not specified,
static char * number(char * buf, char * end, unsigned long long num, int base, int size, int precision, int type)
{
	char padding_c,sign,tmp[66];
	const char digit_small[] = "0123456789abcdefghijklmnopqrstuvwxyz";
	const char digit_large[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	const char *digits;
	int i = 0;

	digits = (type & LARGE) ? digit_large : digit_small;
	type = (type & LEFT || precision == -1) ? (type & ~ZEROPAD) : type;
	if (base < 2 || base > 36)
		return NULL;
	padding_c = (type & ZEROPAD) ? '0' : ' ';

	sign = 0;
	if(type & SIGN)
	{
		if((signed long long)num < 0)
		{
			sign = '-';
			num = (unsigned long long)(-(signed long long)num);
			size--;
		}
		else if(type & PLUS)
		{
			sign = '+';
			size--;
		}
		else if(type & SPACE)
		{
			sign = ' ';
			size--;
		}
	}

	if(type & SPECIAL)
	{
		if(base == 16)
			size -= 2;
		else if(base == 8)
			size--;
	}

	if(num == 0)
		tmp[i++] = '0';
	else
	{
		while(num != 0)
		{
			tmp[i++] = digits[num % base];
			num /= base;
		}
	}

	if(i > precision)
		precision = i;
	size -= precision;

	if(!(type & (ZEROPAD + LEFT)))
	{
		while(size-- > 0)
		{
			if(buf <= end)
				*buf = ' ';
			buf++;
		}
	}
	if(sign != 0)
	{
		if(buf <= end)
			*buf = sign;
		buf++;
	}
	if(type & SPECIAL)
	{
		if(base == 8)
		{
			if(buf <= end)
				*buf = '0';
			buf++;
		}
		else if(base == 16)
		{
			if(buf <= end)
				*buf = '0';
			buf++;
			if(buf <= end)
				*buf = digits[33];	// 'x' or 'X'
			buf++;
		}
	}

	if(!(type & LEFT))
	{
		while(size-- > 0)
		{
			if(buf <= end)
				*buf = padding_c;	// '0' infact
			buf++;
		}
	}
	// will not enter this loop if entered the above loop
	while(i < precision--)
	{
		if(buf <= end)
			*buf = '0';
		buf++;
	}

	while(i-- > 0)
	{
		if(buf <= end)
			*buf = tmp[i];
		buf++;
	}

	if(type & LEFT)
	{
		while(size-- > 0)
		{
			if(buf <= end)
				*buf = ' ';
			buf++;
		}
	}


	return buf;
}

int printf(const char *fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vsnprintf(input_buffer, sizeof(input_buffer), fmt, ap);
	va_end(ap);
	putstr(input_buffer);
	return ret;
}

int vsprintf(char *out, const char *fmt, va_list ap)
{
	return vsnprintf(out, (~(size_t)0) >> 1, fmt, ap);
}

int sprintf(char *out, const char *fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap,fmt);
	ret = vsprintf(out,fmt,ap);
	va_end(ap);
	return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) 
{
	int ret;
	va_list ap;
	va_start(ap,fmt);
	ret = vsnprintf(out, n, fmt, ap);
	va_end(ap);
	return ret;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) 
{
	char *str = out;
	char *end = out + n - 1;
	int flags, field_width, precision, len;
	int base;
	int long_flag = 0;

	char *s;
	unsigned long long num;
	char c;

	// to avoid buffer address overflow
	if (end < str - 1) 
	{
		end = ((void *) -1);
		n = end - str + 1;
	}

	for(; *fmt; fmt++)
	{
		if(*fmt != '%')
		{
			if(str <= end)
				*str = *fmt;
			str++;
			continue;
		}

		flags = 0;
		field_width = -1;
		precision = -1;

		fmt++;
		while(1)
		{
			if(*fmt == '-')
			{
				flags |= LEFT;
				fmt++;
			}
			else if(*fmt == '+')
			{
				flags |= PLUS;
				fmt++;
			}
			else if(*fmt == ' ')
			{
				flags |= SPACE;
				fmt++;
			}
			else if(*fmt == '#')
			{
				flags |= SPECIAL;
				fmt++;
			}
			else if(*fmt == '0')
			{
				flags |= ZEROPAD;
				fmt++;
			}
			else
				break;
		}

		if(*fmt <= '9' && *fmt >= '0')
			field_width = skip_atoi(&fmt);
		else if(*fmt == '*')
		{
			field_width = va_arg(ap, int);
			if(field_width < 0)
			{
				flags |= LEFT;
				field_width = -field_width;
			}
			fmt++;
		}

		// TODO: what will happen if *fmt is neither a digit nor '*'
		if(*fmt == '.')
		{
			fmt++;
			if(*fmt <= '9' && *fmt >= '0')
				precision = skip_atoi(&fmt);
			else if(*fmt == '*')
			{
				precision = va_arg(ap, int);
				fmt++;
			}
			if(precision < 0)
				precision = -1;
		}

		base = 10;
		switch (*fmt)
		{
			case 'l': long_flag = 1; fmt++; break;
			case 'd': flags |= SIGN;
			case 'u': break;
			case 'X': flags |= LARGE;
			case 'x': base = 16; break;
			case 'o': base = 8; break;
			case 'c':
				if (!(flags & LEFT)) {
					while (--field_width > 0) {
						if (str <= end)
							*str = ' ';
						str++;
					}
				}
				c = (unsigned char) va_arg(ap, int);
				if (str <= end)
					*str = c;
				str++;
				while (--field_width > 0) {
					if (str <= end)
						*str = ' ';
					str++;
				}
				continue;
			case 's':  // cannot handle error input
				s = va_arg(ap, char *);
				if(!(flags & LEFT))
				{
					while(field_width-- > 0)
					{
						if(str <= end)
							*str = ' ';
						str++;
					}
				}
				len = strlen(s);
				len = (precision >= 0 && precision > len) ? precision : len;
				while(len-- > 0)
				{
					if(str <= end)
						*str = *s;
					str++;
					s++;
				}
				while(field_width-- > 0)
				{
					if(str <= end)
						*str = ' ';
					str++;
				}
				continue;
			default:
				panic("vsprintf: unknown format code\n");
				break;

		}

		// support ld, lu and lx
		if(long_flag)
		{
			switch (*fmt)
			{
				case 'd': flags |= SIGN; break;
				case 'u': break;
				case 'x': base = 16; break;
				default:
					panic("vsprintf: unknown format code\n");
					break;
			}
			num = va_arg(ap, unsigned long);
			if(flags & SIGN)
				num = (signed long)num;
		}
		else
		{
			num = va_arg(ap, unsigned);
			if(flags & SIGN)
				num = (signed)num;
		}

		str = number(str, end, num, base, field_width, precision, flags);
	}
	if(str <= end)
		*str = '\0';
	else if(n > 0)
		*end = '\0';
	return str - out;
}

#endif
