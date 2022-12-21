#include "main.h"

/**
 * print_diagonal - diagonal printing.
 * @n: parameter value.
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			putchar(92);
		}
		putchar('\n');

	}

	else
	{
		if ((n == 0) || (n < 0))
		{
			putchar('\n');
		}
	}
}
