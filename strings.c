#include "holberton.h"
/**
 * printstring - prints a string
 *
 * @s: value from va_list
 * Return: number of printed
 */
int printstring(va_list s)
{
	int i;
	char *string = va_arg(s, char *);

	if (string == NULL)
		string = "(nill)";
	i = 0;
	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}

/**
 * printchar - prints a character
 *
 * @c: character to take from va_list
 *
 * Return: 1
 */
int printchar(va_list c)
{
	char i;

	i = (char)va_arg(c, int);
	_putchar(i);
	return (i);
}
