#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)

{

	int x;
 
	x = _printf("Print a number: %i\n", 1000);

	printf("%d\n", x);
	
	x = printf("Print a number: %i\n", 1000);

	printf("%d\n", x);

	x = _printf("Print a number: %d\n", -1000);

	printf("%d\n", x);

	x = printf("Print a number: %d\n", -1000);

	printf("%d\n", x);

	printf(NULL); /* Should not print anything - but will get compile warning */
	_printf(NULL);

	printf("Test: %s\n", NULL); /* Should print: Test: (null) */
	_printf("Test: %s\n", NULL);

	_printf("%s\n", NULL);


return (0);

}
