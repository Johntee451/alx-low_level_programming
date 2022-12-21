#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - check the code.
 * Return: Always 0.
 */

int main(void)
{
	int n;



	srand(time(0));

	n = rand();

	printf("%d\n", n);

	return (0);
}
