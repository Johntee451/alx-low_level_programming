#include "main.h"

/**
 * main - prints _putchar to the screen
 * Return: 0
 */

int main(void)
{
	int i;
	char c[] = "_putchar\n";

	for (i = 0; i < (int)sizeof(c); i++)
	{
		_putchar(*(c + i));
	}

	return (0);
}
