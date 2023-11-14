#include "main.h"
#include <string.h>
/**
 * print_revs - prints reverse of a string
 * @args: arguments passed
 *
 * Return: reversed string
 */
int print_revs(va_list args)
{
	const char *str = va_arg(args, const char *);
	int len = strlen(str);
	int i;

	for (i = len - 1; i >= 0; i--)
		_putchar(str[i]);
	return (len);
}
