#include "main.h"
#include <stdio.h>
/**
 * print_my_string - prints a string with handling of non-printable characters
 * @val: argument passed
 *
 * Return: length of printed string
 */
int print_my_string(va_list val)
{
	char *str;
	int len;
	int count = 0;

	str = va_arg(val, char *);
	if (str == NULL)
		return (1);
	len = 0;
	while (str[len] != '\0')
	{
		if ((str[len] < 32 && str[len] > 0) || str[len] >= 127)
		{
			printf("\\x%02X", (unsigned char)str[len]);
			count += 4;
		}
		else
		{
			putchar(str[len]);
			count++;
		}
		len++;
	}
	return (count);
}
