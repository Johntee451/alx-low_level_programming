#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{
	int nb;

	nb = _atoi("4");
	printf("%d\n", nb);
	nb = _atoi("10");
	printf("%d\n", nb);
	nb = _atoi("-3");
	printf("%d\n", nb);
	nb = _atoi("99");
	printf("%d\n", nb);
	nb = _atoi("-40");
	printf("%d\n", nb);
	nb = _atoi(" ------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("Hello ----- world\n");
	printf("%d\n", nb);
	nb = _atoi("+++++ +-+ 2242454");
	printf("%d\n", nb);
	nb = _atoi("2147483647");
	printf("%d\n", nb);
	nb = _atoi(" + + - -98 Battery Street; San Francisco, CA 94111 - USA");
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te - 402 #cisfun :)");
	printf("%d\n", nb);
	nb = _atoi("");
	printf("%d\n", nb);
	nb = _atoi("-2147483648");
	printf("%d\n", nb);
	return (0);
}
