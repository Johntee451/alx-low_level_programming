#include "main.h"
#include <stdio.h>

/**
 *string_toupper - check the code
 *@ptr: pointer variable
 *Return: ptr.
 */

char *string_toupper(char *ptr)
{
	char s[100];
	int i;

	*ptr = s[100];

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}

	return (ptr);
}
