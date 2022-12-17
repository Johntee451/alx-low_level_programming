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
	int n = 47;

	do
	{
		n++;
		putchar(n);
		putchar(',');
		putchar(n%10 + ' ');
	}

	while (n <= 56);
	

	putchar('\n');
	return (0);
}
