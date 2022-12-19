#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
 * main - Entry point
 * print_alphabet(): prints lowercase letters
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; ++n)
	{
		putchar(n);
	}

	putchar('\n');
}
