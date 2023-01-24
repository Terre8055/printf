#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _prinf(const char *format, ...);
int _putchar(char c);

/***************************************/

/* Functions to print chars and strings */
int print_char(va_list ch);
int print_string(va_list ch);

#endif /* MAIN_H */
