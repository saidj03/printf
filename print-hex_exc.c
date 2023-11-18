#include "main.h"
/**
 * print_hex_exc - prints hexadecimal number
 * @num: arguments
 * Return: counter
 */
int print_hex_exc(unsigned long int num)
{
	long int j, counter = 0;
	long int *array;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

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
