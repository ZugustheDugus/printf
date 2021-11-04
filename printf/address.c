#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _prntadd(unsigned a)
{
	char *address = (char *)&a;
	int i;

	for (i = 0; address[a] != '\0'; i++)
	{
		_putchar(address[i]);
	}
	return (i + 1);
}
