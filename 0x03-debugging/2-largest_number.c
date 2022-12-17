#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && c < b) || (b < a && b < c))
	{
		largest = a;
	}

	else if ((a < b && b > c) || (a < b && c < b))
	{
		largest = b;
	}

	else if ((a > b && b < c) || (a < b && b < c))
	{
		largest = c;
	}

	else
	{
		printf("The numbers inputed are %d , %d, %d", a, b, c);
	}

	return (largest);
}
