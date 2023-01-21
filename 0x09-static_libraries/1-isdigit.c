#include "main.h"

/**
 * _isdigit - checks for digits.
 * @c: parameter value.
 * Return: d.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
