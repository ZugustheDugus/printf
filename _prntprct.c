#include "main.h"
#include <stdarg.h>

/**
 * _prntprct - Prints a single percent sign.
 *
 * @args: The argument list passed from _printf.
 * Return: Always 1.
 */
int _prntprct(va_list *args)
{
	(void)(args);

	_putchar('%');
	return (1);
}
