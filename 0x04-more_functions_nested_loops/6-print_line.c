#include "main.h"

/**
 * print_line - prints long line.
 * @n: parameter count.
 */

void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			putchar(95);
		}
		putchar('\n');
	}

	else if ((n == 0) || (n < 0))
	{
		putchar('\n');
	}

	else
	{
		putchar('\n');
	}

}
