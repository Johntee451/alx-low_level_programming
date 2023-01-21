#include "main.h"

/**
 * _strcmp - compare strings.
 * @s1: first string.
 * @s2: second string.
 * Return: integer.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 - *s2 != 0)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
