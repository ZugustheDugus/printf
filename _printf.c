#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <stdint.h>

/**
 * _printf - Printf equivalent
 *
 * @format: The first string, containst conversion statements
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int len, i;
	/*unsigned int unsig = 0;*/
	double flot;
	va_list f;

	len = 0;
	va_start(f, format);
	/* va_start(n, int); */

	if (format == NULL)
		exit(98);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			i += 2;
			len += _putchar(va_arg(f, int));
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			i += 2;
			len += _prntstr(va_arg(f, char *));
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			i += 2;
			len += _putchar('%');
		}
		else if (format[i] == '%' && format[i + 1] == 'f')
		{
			i += 2;
			flot = va_arg(f, double);
			putLong(flot);
		}
		else if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			i += 2;
			pr_int(va_arg(f, int));
		}
		else if (format[i] == '%' && format[i + 1] == 'x')
		{
			i += 2;
			len += _prnthex(get_hex(va_arg(f, int), 1));
		}
		else if (format[i] == '%' && format[i + 1] == 'X')
		{
			i += 2;
			len += _prnthex(get_hex(va_arg(f, int), 0));
		}
		else if (format[i] == '%' && format[i + 1] == 'u')
		{
			i += 2;
			pr_uint(va_arg(f, unsigned int));
		}
		else if (format[i] == '%' && format[i + 1] == 'o')
		{
			i += 2;
			len += _prntoct(decToOctal(va_arg(f, long int)));
		}
		/* else if (format[i] == '%' && format[i + 1] == 'p')
		 * {
		 *  i += 2;
		 *  len += print_address_hex(va_arg(f, unsigned));
		 * }
		 */
		_putchar(format[i]);
		len++;
	}
	return (len);
	va_end(f);
}
