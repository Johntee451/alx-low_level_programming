#include "main.h"

/**
 * _isdigit - checks for digits.
 * @c: parameter value.
 * Return: d.
 */

int _isdigit(int c)
{
	int d;

	d = isdigit(c);

	if (d)
		return (1);

	else
		return (0);

	return (d);
}
