#include "main.h"
/**
* print_uns - prints an unsigned integer
* @args: argument to print
* Return: integer
*/
int print_uns(va_list args)
{
	unsigned int k = va_arg(args, unsigned int);
	int num, temp = k % 10, digit, exp = 1; int j = 1;
	k = k / 10;
	num = k;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		k = -k;
		temp = -temp;
		j++;
	}
		if (num > 0)
	{
	while (num / 10 != 0)
	{
		exp = exp * 10;
		num = num / 10;
	}
	num = k;
	
	while (exp > 0)
		{
		digit = num / exp;
		_putchar(digit + 48);
		num = num - (digit * exp);
		exp = exp / 10;
		j++;
		}
	}
	_putchar(temp + 48);
	return (j);
}
