#include <unistd.h>
#include "main.h"
#include <stdarg.h>
#include <string.h>

/**
 * _printf - Printf equivalent
 *
 * @format: The first string, containst conversion statements
 * Return: returns length of the string
 */

int _printf(const char *format, ...)
{
	va_list va;
	int (*f)(va_list *);
	int len, i = 0;
	va_start(va, format);

	len = 0;

	if (format == NULL)
		exit(98);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			f = _get_function(format[i]);
			if (f != NULL)
			{
				len += f(&va);
			}
			else
			{
				len += _putchar('%');
				len += _putchar(format[i]);
			}
		}
		else
		{
			len += _putchar(format[i]);
		}
	}
	va_end(va);
	return (len);
}
