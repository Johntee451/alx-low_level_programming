#include <stdlib.h>

#include <stdio.h>

#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */



int main(void)

{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
