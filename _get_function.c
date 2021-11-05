#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _get_function - function to select specifier
 * @s: specifier variable
 * @args: variadic arguments
 * Return: returns NULL if function can't be selected
 */
int (*_get_function(char s))(va_list * args)
{
	function_t f[] = {
		{"c", _prntchar},
		{"s", _prntstr},
		{"d", pr_int},
		{"i", pr_int},
		{"u", pr_uint},
		{"x", _prnthex},
		{"X", _prntcaphex},
		{"%", _prntprct},
		{NULL, NULL}
	};

	int i = 0;

	if (!s)
	{
		exit(99);
	}
	while (f[i].spec != NULL)
	{
		if (_strcmp(s, f[i].spec) == 0)
		{
			return (f[i].funct);
		}
		i++;
	}
	return (NULL);
}
