#include "main.h"
#include <stdio.h>

/**
 * print_array - checks the array.
 * @a: an array of integers.
 * @n: the number of elements to swap.
 * Return: nothing.
*/

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * reverse_array - rev array.
 * @a: array of integer.
 * @n: the num.
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int tmp;

	int *end = a + n - 1;

	while (a != end && n > 0)
	{
		tmp = *a;

		*a = *end;

		*end = tmp;
		if (a + 1 == end)
			break;
		a++;
		end--;
	}
}
