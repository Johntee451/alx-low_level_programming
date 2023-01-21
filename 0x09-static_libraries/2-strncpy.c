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
	char *p = dest;
	int count = 0;

	while (count < n)
	{
		if (*src)
		{
			*dest = *src;
			src++;
		}
		else
			*dest = *src;
		dest++;
		count++;
	}
	return (p);
}
