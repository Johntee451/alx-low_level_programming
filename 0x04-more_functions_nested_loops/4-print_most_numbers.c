#include "main.h"

/**
 * print_most_numbers -outputs most number apart from 2 and 4.
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
		{
			putchar(n);
		}
	}

	putchar('\n');
}
