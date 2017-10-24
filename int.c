#include "holberton.h"

/**
* printInt - print integer
* @i: integer argument
* Return: int bytes
*/
int printInt(va_list i)
{
	unsigned int m = 1, c = 0;

	int f = va_arg(i, int);

	if (f < 0)
	{
		_putchar('-');
		f = f - f - f;
		c++;
	}

	while ((f / m) >= 10)
	{
		m *= 10;
	}
	while (m > 1)
	{
		_putchar((f / m) + '0');
		f %= m;
		m /= 10;
		c++;
	}
	_putchar((f / m) + '0');
	c++;
	return (c);
}
