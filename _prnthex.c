#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _prntcaphex - Converts and prints a hexadecimal number.
 *
 * @args: The argument list passed from _printf.
 * Return: The length of the hex.
 */
int _prntcaphex(va_list *args)
{
	long quotient, remainder;
	int j = 0, i;
	static char hexadecimalnum[8];

	quotient = va_arg(*args, int);
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = 48 + remainder;
		else
			hexadecimalnum[j++] = 55 + remainder;
		quotient = quotient / 16;
	}
	for (j = 0; hexadecimalnum[j] != '\0'; j++)
		continue;
	for (i = j; i >= 0; i--)
		_putchar(hexadecimalnum[i]);
	return (j - 1);
}

/**
 * _prnthex - Converts and prints a hexadecimal number with capital chars.
 *
 * @args: The argument list passed from _printf.
 * Return: The length of the hex.
 */
int _prnthex(va_list *args)
{
	long quotient, remainder;
	int j = 0, i;
	static char hexadecimalnum[8];

	quotient = va_arg(*args, int);
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = 48 + remainder;
		else
			hexadecimalnum[j++] = 55 + remainder;
		quotient = quotient / 16;
	}
	for (i = 0; hexadecimalnum[i] != '\0'; i++)
	{
		if (hexadecimalnum[i] >= 'A' && hexadecimalnum[i] <= 'F')
			hexadecimalnum[i] += 32;
	}
	for (j = 0; hexadecimalnum[j] != '\0'; j++)
		continue;
	for (i = j; i >= 0; i--)
		_putchar(hexadecimalnum[i]);
	return (j - 1);
}
