#include "main.h"

/**
 * _isalpha - Check if character is in the alphabet
 * @c: character to check
 * Return: If in alphabet 1, if not 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
