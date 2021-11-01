#include <unistd.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int _printf(const char *format, ...)
{
	int len, i, j;
	char *prnt;
	char c;
	va_list f, n;

	len = 0;
	va_start(f, char *);
	/* va_start(n, int); */

	if (format == NULL)
		return;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			i += 2;
			c = va_arg(f, char *);
			_putchar(c);
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			i += 2;
			prnt = va_arg(f, char *);
			for (j = 0; prnt[j] != '\0'; j++)
			{
				_putchar(prnt[j]);
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			i += 2;
			_putchar('%');
		}
		_putchar(format[i]);
	}
	return (0);
	va_end(f, char *);
}
