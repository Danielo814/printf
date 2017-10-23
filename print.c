#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * specifiers - checks for matching character and returns correlating function
 * @matchchar: character to match from printf format string
 *
 *
 * Return: count from function
 */
int (*specifiers(const char *matchchar))(va_list)
{
	unsigned int i;

	_types j[] = {
		{"s", printstring},
		{"c", printchar},
		{NULL, NULL}
	};

	i = 0;
	while (j[i].a != NULL)
	{
		if (*j[i].a == *matchchar)
			break;
		i++;
	}
	return (j[i].f);
}
/**
 * _printf - prints a string with argument conversion
 *
 * @format: format string to be converted
 * Return: count
 */
int _printf(const char *format, ...)
{
	unsigned int i;
	unsigned int count = 0;
	va_list ap;
	int (*f)(va_list);

	va_start(ap, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			f = specifiers(&format[i + 1]);
			count += f(ap);
			i += 2;
		}
		count += _putchar(format[i]);
	}
	va_end(ap);
	return (count);
}
