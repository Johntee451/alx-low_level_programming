#include "main.h"

/**
 * _puts_recursion - print a string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		putchar('\n');
	}
}
