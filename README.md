# _printf
_printf will produce a formatted output

**Prototype:** int _printf(const char *format, ...)
# Description
This is a custom version of printf that was made using key concepts that Holberton School students have used since starting the course on September 5, 2017.
# Examples
**String:** ```_printf("%s\n", 'string')``` **Output:** ```string```

**Character:** ```_printf("%c\n", 'H')``` **Output:** ```H```

**Decimal:** ```_printf("%d\n", 814)``` **Output:** ```814```

**Integer:** ```_printf("%i\n", 77)``` **Output:** ```77```
# Description
Task |	Description
- [x] 0    | Write a function that produces output according to conversion specifiers ```c```, ```s```, and ```%```.
- [x] 1    | Handle the conversion specifiers ```d``` and ```i```
- [x] 2    | Create a man page for your function
# Requirements
* Allowed editors: ```vi```, ```vim```, ```emacs```
* All files will be compiled on Ubuntu 14.04 LTS
* Programs and functions will be compiled with ```gcc 4.8.4``` using the flats ```-Wall``` ```-Werror``` ```-Wextra``` ```and -pedantic```
* All files should end with a new line
* Code should use the ```Betty``` style. it will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* Not allowed to use global variables
* No more than 5 functions per file
* The prototypes of all functions should be included in the header file called ```holberton.h```
* All header files should be include guarded
* Authorized functions and macros:
  * ```write``` (```man 2 write```)
  * ```malloc``` (```man 3 malloc```)
  * ```free``` (```man 3 free```)
  * ```va_start``` (```man 3 va_start```)
  * ```va_end``` (```man 3 va_end```)
  * ```va_copy``` (```man 3 va_copy```)
  * ```va_arg``` (```man 3 va_arg```)
# File Descriptions
**print.c:** The print.c file contains the function prototype ```int _printf(const char *format, ...)``` while format is the string passed in to _printf. This function will return the number of characters (excluding the terminating null bite) to the standard output stream.

**int.c:** This file contains function prototypes ```int printInt(va_list i)``` which converts an int argument to signed decimal notation.

**strings.c:** This file containts the function prototype ```int printstring(va_list c)``` which takes an int argument and converts it to a char, and the resulting character is written. Function prototype ```int printstring(va_list s)``` is also in this file and it a ```const char *``` argument is expected to be a pointer to an array of character type (pointer to a string. Characters from the array are written up to (but not including) a terminating null byte.

**_putchar.c:** This file contains the function prototype ```int _putchar(char c)``` that writes a character specified by its argument to stdout.

**holberton.h:** This is a header file that contains all function prototypes used for this assignment.
# Authors
**Daniel Ojeda** [Twitter](https://twitter.com/DanielC_Ojeda) | [Github](https://github.com/Danielo814)
**James Heck** [Twitter](https://twitter.com/notjamesheck) | [Github](https://github.com/notjamesheck)