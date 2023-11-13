#include "main.h"
/**
* print_octal - prints an octal number.
* @val: arguments.
* Return: 0.
*/
int print_octal(va_list val)
	{
	int j;
	int *array;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;
	
	while (num / 8 != 0)
	{
	num /= 8;
	count++;
	}
	count++;
	array = malloc(count * sizeof(int));
	for (j = 0; j < count; j++)
	{
		array[j] = temp % 8;
		temp /= 8;
	}
		for (j = count - 1; j >= 0; j--)
	{
		_putchar(array[j] + '0');
	}
	free(array);
	return (count);
}
