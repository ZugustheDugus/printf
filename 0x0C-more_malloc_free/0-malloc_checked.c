#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - checks if a malloc function worked
 * @b: the address of memory being written
 *
 * Return: Returns NULL if 0 length integer
 */

void *malloc_checked(unsigned int b)
{
int *s;

s = malloc(b);

if (s == NULL)
{
exit(98);
}
return (s);
}
