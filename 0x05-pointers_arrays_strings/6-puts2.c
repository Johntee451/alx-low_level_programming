#include "main.h"

/**
 * puts2 - puts chars
 * @str: pointer variable
 */

void puts2(char *str)
{
	unsigned int i;

	for (i = 0; i >= strlen(str); i += 2)
	{
		putchar(str[i]);
	}
}
