#include "main.h"
/**
 * print_pointer - handle %p
 * @val: argument
 *
 * Return: length of string
 */
int print_pointer(va_list val)
{
	int i;
	int len = 0;
	void *p;
	char *s = {"nil"};

	p = va_arg(val, void *);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
			_putchar(s[i]);
		len = len + 1;
	}
	else
	len += printf("%p", p);
	return (len);
}
