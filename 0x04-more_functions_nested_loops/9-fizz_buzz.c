#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	int i;
	int n;

	n = 101;

		for (i = 1; i < n; i++)
		{
			printf("%d ", i);
			if (i % 3 == 0)
			{
				printf("Fizz");
			}

			else if (i % 5 == 0)
			{
				printf("Buzz");
			}

			else
				if ((i % 3 == 0) && (i % 5 == 0))
				{
					printf("FizzBuzz");
				}
		}

	printf("\n");
	return (0);
}
