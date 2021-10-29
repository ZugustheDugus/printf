#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers from main file w/ separator
 * @n: number of arguments
 * @separator: separator string between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list s;

	if (separator == NULL)
		return;

	va_start(s, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(s, int));
		if (i < (n - 1))
			{
			printf("%s", separator);
			}
	}
	printf("\n");
	va_end(s);
}