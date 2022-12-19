#include "main.h"

/**
 * print_alphabet_x10 - prints ten times lowercase letters
 */

void print_alphabet_x10(void)
{
	int n;
	int m;

	for (m = 48; m <= 57; ++m)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			putchar(n);
		}

		putchar('\n');
	}
}
