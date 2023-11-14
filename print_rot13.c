#include "main.h"

/**
 * print_rot13 - prints rot13'ed string
 * @str: string passed
 *
 * Return: altered string
 */
int print_rot13(char *str)
{
	int i;
	int len = 0;
	char c;

	if (str == NULL)
		return (-1);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		c = str[i];
		if ((c >= 'A' && c <= 'Z'))
			c = 'A' + (c - 'A' + 13) % 26;
		else if ((c >= 'a' && c <= 'z'))
			c = 'a' + (c - 'a' + 13) % 26;
	_putchar(c);
	}
	return (len);
}
