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
	int l_dig;

	srand(time(0));
	n = -98;
	l_dig = n % 10;

	if (l_dig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_dig);
	}

	else if (l_dig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l_dig);
	}

	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_dig);
	}

	return (0);
}
