#include "main.h"

/**
 * print_square - diagonal printing.
 * @n: parameter value.
 */

void print_square(int n)
{
	if (n > 0)
	{
		int i;
		int j;

		for (j = 0; j < n; j++)
		{
			for (i = 0; i < n; i++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}

	else
	{
		if ((n == 0) || (n < 0))
		{
			putchar('\n');
		}
	}

}
