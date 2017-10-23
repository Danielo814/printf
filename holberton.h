#ifndef __HOLBERTONH__
#define __HOLBERTONH__
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct print - printf functionparameters
 * @a: conversion specifier to match
 * @f: function to return
 *
 */
typedef struct print
{
	char *a;
	int (*f)(va_list);
} _types;

int printstring(va_list s);
int printchar(va_list c);
int _printf(const char *format, ...);
int _putchar(char c);
#endif
