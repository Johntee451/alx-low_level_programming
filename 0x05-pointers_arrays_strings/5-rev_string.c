#include "main.h"

/**
 * rev_string - reverses string.
 * @s: pointer variable.
 */

void rev_string(char *s)
{
	int i = -1;
	char st[100];
	char rst[100];
	char *rp = rst;

	s = st;

	while (*s)
	{
		s++;
		i++;
	}

	while (i >= 0)
	{
		s--;
		*rp = *s;
		rp++;
		--i;
	}

	*rp = '\0';

	printf("%s\n", rst);
}
