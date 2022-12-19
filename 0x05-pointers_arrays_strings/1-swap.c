#include "main.h"

/**
 * swap_int - swap the value
 * @a: the a pointer variable
 * @b: the b pointer variable
 */

void swap_int(int *a, int *b)
{

	int c = *a;

	*a = *b;
	*b = c;
}
