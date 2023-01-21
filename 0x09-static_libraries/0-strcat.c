#include "main.h"

/**
 * _strcat - concatintes strings.
 * @dest: parameter destinatiion.
 * @src:parameter sourse.
 * Return: strr.
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest++)
		;
	dest--;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (p);
}
