#include "main.h"

/**
 * more_numbers - output more numbers.
 */

void more_numbers(void)
{
	int m;
	int n;

	for (m = 0; m < 10; ++m)
	{
		for (n = 0; n < 15; n++)
		{
			printf("%d", n);
		}
		printf("\n");
	}
}
