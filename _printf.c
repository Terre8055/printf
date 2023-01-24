#include "main.h"

/**
 * _printf - Printf function
 * @format: format
 *
 * Return: Printed chars
 */

int _printf(const char *format, ...)
{
	int i;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		} else
		{
			++i;
			if (format[i] == '%')
				_putchar('%');
			else if (format[i] == 'c')
				print_char(list);
		}
	}

	va_end(list);
}
