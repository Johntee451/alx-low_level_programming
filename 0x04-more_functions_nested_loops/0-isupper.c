#include "main.h"

/**
 * _isupper - checks uppercase.
 * @c: parameter integer.
 * Return: c.
 */

int _isupper(int c)
{
	int d;

	d = isupper(c);

	if (d)
		return (1);
	else
		return (0);

	return (d);
}
