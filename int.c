#include "holberton.h"

/**
* intPrint - print integer by decimal place
* @a: integer parameter
* Return: void
*/

void intPrint(int a)
{
	if (a == 0)
	{
		_putchar('0');
	}
	if (a < 0)
	{
		_putchar('-');
		a *= -1;
	}
	if (a / 10)
	{
		intPrint(a / 10);
	}
	_putchar((a % 10) + '0');

}
/**
* printInt - print integer
* @i: integer argument
* Return: int bytes
*/
int printInt(va_list i)
{
	int a = 0;

	a = va_arg(i, int);

	intPrint(a);
	return (4);
}
