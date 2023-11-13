#include "main.h"

/**
* print_char - prints a character.
* @val: arguments.
* Return: an integer.
*/
int print_char(va_list val)
{
	char c;
	c = va_arg(val, int);

	_putchar(c);
	return (1);
}
