#include "main.h"
#include <stdio.h>

/**
 *string_toupper - check the code
 *@s: pointer variable
 *Return: r.
 */

char *string_toupper(char *s)
{
	char *r = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (r);
}
