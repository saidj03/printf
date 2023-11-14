#include "main.h"
/**
* print_string - print a string.
* @val: argument.
* Return: the length of the string.
*/
int print_string(va_list val)
{
	char *str;
	int j, len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (j = 0; j < len; j++)
		_putchar(str[j]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (j = 0; j < len; j++)
		_putchar(str[j]);
		return (len);
	}
}
