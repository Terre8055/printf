#include "main.h"

/**
 * print_char - Prints a character
 * @ch: character to be printed
 *
 * Return: Number of chars printed
 */

int print_char(va_list ch)
{
	char c = va_arg(ch, int);

	_putchar(c);
	return (1);
}
