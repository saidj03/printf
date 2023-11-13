#include "main.h"
/**
* print_HEX - prints an hexgecimal number.
* @num: number to print.
* Return: count.
*/
int print_HEX(unsigned int num)
{
	int k;
	int *array;
	int count = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));
	for (k = 0; k < count; k++)
	{
		array[k] = temp % 16;
		temp /= 16;
	}
	for (k = count - 1; k >= 0; k--)
	{
		if (array[k] > 9)
		array[k] = array[k] + 7;
		_putchar(array[k] + '0');
	}
	free(array);
	return (count);
}
