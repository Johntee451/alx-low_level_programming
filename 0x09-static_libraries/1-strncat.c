#include "main.h"

/**
 * _strncat - concat string based on char.
 * @dest: destnation pointer.
 * @src: sourse pointer.
 * @n: number of characters.
 * Return: strr.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int count = 0;

	while (*dest++)
		;
	dest--;
	while (*src && count < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';

	return (p);
}
