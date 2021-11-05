#include "main.h"
/**
 * _strcmp - compares two strings and returns 0 if there is a match
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: diff
 */
int _strcmp(char s1, char *s2)
{
	int diff = 1;

	while (*s2 != '\0')
	{
		if (s1 == *s2)
		{
			diff = 0;
		}
		s2++;
	}
	return (diff);
}
