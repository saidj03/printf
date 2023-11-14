#include "main.h"
/**
* _strlen - finds the lenght of a string.
* @str: string
* Return: integer.
*/
int _strlen(char *str)
{
	int k;

	for (k = 0; str[k] != 0; k++)
	;
	return (k);
}
/**
* _strlenc - finds length of a string but for constant characters
* @str: string
* Return: integer
*/
int _strlenc(const char *str)
{
	int k;

	for (k = 0; str[k] != 0; k++)
	;
	return (k);
}
