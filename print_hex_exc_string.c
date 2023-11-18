#include "main.h"

/**
 * print_hex_exc_string - prints exclusive string
 * @val: argument
 * Return: length of string
 */
int print_hex_exc_string(va_list val)
{
	char *str;
	int i, len = 0;
	int value;

	str = va_arg(val, char *);
	if (str == NULL)
		str = "(NULL)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = str[i];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_extra(value);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
	}
	return (len);
}
