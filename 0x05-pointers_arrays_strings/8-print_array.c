#include "main.h"

/**
 * print_array - prints out arrays.
 * @a: pointer variable.
 * @n: actual variable.
 */

void print_array(int *a, int n)
{
	int arr[5] = {98, 402, -198, 298, -1024};
	int i;

	n = 5;
	a = arr;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", *(a + i));
	}

	printf("\n\r\r");
}
