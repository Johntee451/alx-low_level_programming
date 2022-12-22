#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *cap_string - check the code
 *@ptr: pointer variable
 *Return: ptr.
 */

char *cap_string(char *ptr)
{
	int i;
	char str[100];

	*ptr = str[100];

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] = str[i] - 32;
			continue;
		}

		if (str[i] == ' ')
		{
			++i;
			if ((str[i] >= 'a') && (str[i] <= 'z'))
			{
				str[i] = str[i] - 32;
				continue;
			}
		}

		else
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] = str[i] + 32;
		}
	}
	return (ptr);
}
