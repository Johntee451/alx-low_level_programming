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
	return (0);
}

void positive_or_negative(int i){

		if (i > 0)
		{
			printf("%d is positive\n", i);
		}

		else if (i == 0)
		{
			printf("%d is zero\n", i);
		}

		else
		{
			printf("%d is negative\n", i);
		}
}
