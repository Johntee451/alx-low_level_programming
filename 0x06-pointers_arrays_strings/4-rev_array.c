#include "main.h"
#include <stdio.h>

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
*/

void reverse_array(int *a, int n)
{
	int arr[n];
	int i;

	for (i = 0; i < n / 2; i++)
	{
		*a = arr[i];

		arr[i] = arr[n - i - 1];

		arr[n - i - 1] = *a;
	}
}
