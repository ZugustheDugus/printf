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
	int len, i;
	char prnt[];
	va_list f, n;
	len = 0;

	va_start(f, char *);
	va_start(n, int);

	if (format == NULL)
		return;

	while (prnt[len])
	{
		len++;
	}

	for (i = 0; i < n; i++)
	{
		prnt[i] = va_arg(f, char *);
		
	}
