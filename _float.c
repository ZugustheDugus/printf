#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * putlong - used to place a float
 * @x: float variable
 *
 */
void putLong(long x)
{
	if(x < 0)
	{
		_putchar('-');
		x = -x;
	}
	if (x >= 10)
	{
		putLong(x / 10);
	}
	_putchar(x % 10 + '0');
}
