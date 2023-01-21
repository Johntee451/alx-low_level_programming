#include "main.h"

/**
 * _strlen - swap the value.
 * @s: the s pointer char variable.
 * Return: Always 1.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}
