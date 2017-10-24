#include "holberton.h"

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
		{"i", printInt},
		{"d", printInt},
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

	if (format == NULL)
	{
		return (-1);
	}

	va_start(ap, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] == '\0')
		{
			return (-1);
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			count++;
			i += 2;
		}
		else if (format[i] == '%' && format[i + 1] != '%')
		{
			f = specifiers(&format[i + 1]);
			if (f == NULL)
			{
				i += 1;
				continue;
			}
			count += f(ap);
			i += 2;
		}
			count += _putchar(format[i]);
	}
	va_end(ap);
	return (count);
}
