#include <stdlib.h>
#include <stdio.h>
#include "main.h"

char *decToOctal(int n)
{
	static char octalNum[11];
	int i = 0;

	while (n != 0)
	{
		octalNum[i] = n % 8;
		n = n / 8;
		i++;
	}

	return (octalNum);
}

int _prntoct(char *a)
{
	int i, j;
	for (j = 0; a[j] != '\0'; j++)
		continue;
	for (i = j; i >= 0; i--)
		_putchar(a[i]);
	return (j - 1);
}
