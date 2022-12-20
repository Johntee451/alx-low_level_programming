#include "main.h"

/**
 * puts_half - outputs half of the string
 * @str: pointer variable
 */

void puts_half(char *str)
{
	int sSize = strlen(str);
	int i;
	int n;
	int pSize;

	n = (sSize - 1) / 2;

		if (sSize % n != 0)
		{
			return;
		}

	pSize = sSize / n;

	for (i = 0; i < sSize; i++)
	{
		if (i % pSize == 0)
		{
			printf("\n");
		}
		printf("%c", str[i]);
	}
}
