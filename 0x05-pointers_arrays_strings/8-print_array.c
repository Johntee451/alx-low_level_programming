#include "main.h"

/**
 * print_array - prints out arrays.
 * @a: pointer variable.
 * @n: actual variable.
 */

void print_array(int *a, int n)
{
	int arr[5] = {-198, 298, 402, -1024, 98};
	int i;

	n = 5;
	a = arr;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}

	printf("\n\r\r");
}
