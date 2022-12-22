#include "main.h"

/**
 * _strncpy - copy strings.
 * @dest: dest pointer.
 * @src: src pointer.
 * @n: charcter amount.
 * Return: strr.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *strr;

	strr = strncpy(dest, src, n);

	return (strr);
}
