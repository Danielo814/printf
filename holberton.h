#ifndef __HOLBERTONH__
#define __HOLBERTONH__
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
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

int putPercent(char s);
int printInt(va_list d);
int printInt(va_list i);
int printstring(va_list s);
int printchar(va_list c);
int _printf(const char *format, ...);
int _putchar(char c);
#endif
