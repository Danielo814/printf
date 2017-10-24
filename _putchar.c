#include "holberton.h"
/**
* _putchar - print char
* @c: char parameter
* Return: sizeof char
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
