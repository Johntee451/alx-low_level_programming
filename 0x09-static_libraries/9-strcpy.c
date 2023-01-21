#include "main.h"

/**
 * _strcpy - copy string to each other.
 * @dest: the destination.
 * @src: the source.
 * Return: dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
