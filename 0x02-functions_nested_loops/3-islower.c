#include "main.h"

/**
 * _islower - check if argument is lowercase or not.
 * @c: accepts interger value.
 * Return: Always 0.
 */

int _islower(int c)
{

	if (islower(c))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
