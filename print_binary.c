#include "main.h"
/**
* print_binary - prints binary number.
* @val: parameter.
* Return: integer
*/
int print_binary(va_list val)
{
	int flag = 0;
	int count = 0;int k, i = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;
	
	for (k = 0; k < 32; k++)
	{
	p = ((i << (31 - k)) & num);
	if (p >> (31 - k))
	flag = 1;

	if (flag)
	{
	b = p >> (31 - k);
	_putchar(b + 48);
	count++;
	}
	}
	if (count == 0)
	{
	count++;
	_putchar('0');
	}
	return (count);
}
