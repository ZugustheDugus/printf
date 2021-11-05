#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdarg.h>

/**
 * _prntchar - Prints a char.
 *
 * @args: The list of arguments passed from printf.
 * Return: Always 1
 */
int _prntchar(va_list *args)
{
	_putchar(va_arg(*args, int));
	return (1);
}
