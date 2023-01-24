#include "main.h"

/**
 * print_char - Prints a character
 * @types: List of arguments
 *
 * Return: Number of chars printed
 */

int print_char(va_list ch)
{
	char c = va_arg(ch, int);
	int i = 0;
	
	_putchar(c);
	return (1);
}
