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
	char *strr;

	strr = strncat(dest, src, n);

	return (strr);
}
