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
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    char c;
    char *str;
    int number;
    char *s;
    char *s2;
    char *s3;
    char *s4;
    char c;
    int i;
    int b;
 
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    /*---- Test cases for characters ----*/
    c = 'h';
    _printf("First letter in Holberton is %c\n", c); /* output: First letter in Holberton is h*/
    printf("First letter in Holberton is %c\n", c);

    /*---- Test cases for Numbers ----*/
    number = 19912507;
    _printf("%i, %d\n", number, number); /* output: 19912507 19912507*/
    printf("%i, %d\n", number, number);

    /*---- Test cases for strings ----*/
    str = "Holberton";
    _printf("%s school\n", str); /* output: Holberton school*/
    printf("%s school\n", str);
    /*---- Test cases for NULL -----*/
    str = NULL;

    _printf("%s school\n", str); /*output: (null) school*/
    printf("%s school\n", str);
    printf(NULL); /* Should not print anything - but will get compile warning */
    _printf(NULL);

    printf("Test: %s\n", NULL); /* Should print: Test: (null) */
    _printf("Test: %s\n", NULL);

    printf("%s\n", NULL);  /* Seg fault */
    _printf("%s\n", NULL);
    c = 'p';

    i = -123455;

    s = "Lorem ipsum dolor sit amet, consectetur adipiscing elit\n";
    s2 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n";

    s3 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n";

    s4 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.\n";

    b = 98;

    _printf("asdfasdfas\n");
    printf("asdfasdfas\n");
    _printf("--------------\n\n\n");
    _printf("fasdf\n %s\n %c\n %s\n %s\n %s\n %i\n %b\n\n\n", s, c, s2, s3, s4, i, b);
    printf("fasdf\n %s\n %c\n %s\n %s\n %s\n %i\n\n\n", s, c, s2, s3, s4, i);
    _printf("--------------\n\n");
    _printf("%b\n", 98);
    _printf("--------------\n\n\n");

    return (0);
}
