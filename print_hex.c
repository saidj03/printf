#include "main.h"
/**
* print_hex - prints an hexdecimal number.
* @val: arguments.
* Return: count.
*/
int print_hex(va_list val)
{
	int j;
	int *array;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;
	
	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
		count++;
		array = malloc(count * sizeof(int));
		for (j = 0; j < count; j++)
	{
		array[j] = temp % 16;
		temp /= 16;
	}
		for (j = count - 1; j >= 0; j--)
	{
		if (array[j] > 9)
		{
		array[j] = array[j] + 7;
		_putchar(array[j] + '0');
		}
	}
	free(array);
	return (count);
}
