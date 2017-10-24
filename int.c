#include "holberton.h"

/**
* printInt - print integer
* @i: integer argument
* Return: int bytes
*/
int printInt(va_list i)
{
	int f = 0, m = 1, c = 1;

	f = va_arg(i, int);

	if (f < 0)
	{
		_putchar('-');
		f = f - f - f;
		c += 1;
	}

	if (f < 10)
	{
		_putchar(f);
		return (c);
	}
	while ((f / m) >= 10)
	{
		m *= 10;
		c++;
	}
	m *= 10;
	while (m > 1)
	{
		_putchar(((f % m) / (m / 10)) + '0');
		m /= 10;
	}
	return (c);
}
