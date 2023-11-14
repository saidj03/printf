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
		{"%i", print_integer}, {"%d", print_integer}, {"%r", print_revs},
		{"%R", print_rot13}, {"%b", print_binary},
		{"%u", print_uns},
		{"%o", print_octal}, {"%x", print_hex}, {"%X", print_HEX},
		{"%S", print_my_string}, {"%p", print_pointer}
		};
	va_list args;
	int j = 0, k, len = 0;
	int match = 0;
	int count = sizeof(p) / sizeof(p[0]);

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[j] != '\0')
	{
		for (k = 0; k < count; ++k)
		{
			if (p[k].ch[0] == format[j] && p[k].ch[1] == format[j + 1])
			{
				len += p[j].func(args);
				j = j + 2;
				match = 1;
				break;
			}
		}
		if (!match)
		{
			putchar(format[j]);
			j++;
			len++;
		}
	}
	va_end(args);
	return (len);
}
