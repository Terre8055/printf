#include "main.h"

/**
 * print_string - Prints a string
 * @ch: character
 *
 * Return: 1
 */

int print_string(va_list ch)
{
	char *c = va_arg(ch, char*);

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	return (1);
}
