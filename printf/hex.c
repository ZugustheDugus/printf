#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *get_hex(unsigned int a, int c)
{
	long quotient, remainder;
	int j = 0, i;
	static char hexadecimalnum[8];

	quotient = a;
	while (quotient != 0)
	{
		remainder = quotient % 16;
		if (remainder < 10)
			hexadecimalnum[j++] = 48 + remainder;
		else
			hexadecimalnum[j++] = 55 + remainder;
		quotient = quotient / 16;
	}
	if (c > 0)
	{
		for (i = 0; hexadecimalnum[i] != '\0'; i++)
		{
			if (hexadecimalnum[i] >= 'A' && hexadecimalnum[i] <= 'F')
				hexadecimalnum[i] += 32;
		}
	}
	return (hexadecimalnum);
}

int _prnthex(char *a)
{
	int i, j;
	for (j = 0; a[j] != '\0'; j++)
		continue;
	for (i = j; i >= 0; i--)
		_putchar(a[i]);
	return (j - 1);
}
