#include <stdio.h>
#include "main.h"

int _prntstr(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}

	return (i - 1);
}
