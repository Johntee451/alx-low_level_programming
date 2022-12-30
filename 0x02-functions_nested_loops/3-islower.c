#include "main.h"

/**
 * _islower - check if argument is lowercase or not.
 * @c: accepts interger value.
 * Return: Always 1 or 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
