#include "main.h"

/**
 * _islower - check if argument is lowercase or not.
 * @c: accepts interger value.
 * Return: Always 1 or 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}


/**
 * main - check the code.
 * Return: Always 0.
 */

int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');

	return (0);
}
