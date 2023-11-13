#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
* struct format - converter for printf
* @ch: type char pointer of the specifier
* @func: function for the conversion specifier
*
*/
typedef struct format
{
	char *ch;
	int (*func)();
} convert;
int print_string(va_list val);
int print_char(va_list val);
int _strlenc(const char *str);
int _strlen(char *str);
int print_integer(va_list args);
int print_dec(va_list args);
int print_37(void);
int print_binary(va_list val);
int print_uns(va_list args);
int print_octal(va_list val);
int print_hex(va_list val);
int print_HEX(unsigned int num);
int _putchar(char c);
int _printf(const char *format, ...);
int _printf(const char * const format, ...);

#endif
