#include "main.h"

/**
 * print_alphabet: print out lowercase letter
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; ++n)
	{
		putchar(n);
	}

	putchar('\n');
}
