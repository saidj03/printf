#include "main.h"

/**
 * print_HEX_extra - prints hexadecimal number
 * @num: number to print
 * Return: counter
 */
int print_HEX_extra(unsigned int num)
{
	int j, counter = 0;
	int *array;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (j = 0; j < counter; j++)
	{
		array[j] = temp % 16;
		temp /= 16;
	}

	for (j = counter - 1; j >= 0; j--)
	{
		if (array[j] > 9)
			array[j] = array[j] + 7;
		_putchar(array[j] + '0');
	}
	free(array);
	return (counter);
}
