#include "main.h"
/**
* _printf - is a function that selects the correct function to print.
* @format: identifier to look for.
* Return: the length of the string.
*/
int _printf(const char * const format, ...)
{
	convert p[] = {
	{"%s", print_string}, {"%c", print_char},
	{"%%", print_37},
	{"%i", print_integer}, {"%d", print_dec}, {"%r", print_revs},
	{"%R", print_rot13}, {"%b", print_binary},
	{"%u", print_uns},
	{"%o", print_octal}, {"%x", print_hex}, {"%X", print_HEX},
	{"%S", print_exc_string}, {"%p", print_pointer}
	};
	va_list args;
	int j = 0, k, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	return (-1);
	Here:
		while (format[j] != '\0')
		{
		k = 13;
		while (k >= 0)
		{
		if (p[k].ch[0] == format[j] && p[k].ch[1] == format[j + 1])
		{
		len += p[j].func(args);
		j = j + 2;
		goto Here;
		}
		k--;
		}
		_putchar(format[j]);
		len++;
		j++;
		}
		va_end(args);
		return (len);
}
