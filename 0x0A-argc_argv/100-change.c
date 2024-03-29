#include <stdlib.h>
#include <stdio.h>

/**
 * main - compute minimum number of coins to match cents
 * @argv: string containing number of cents
 * @argc: number of strings in argv
 * Return: Always Success 0
 */

int main(int argc, char *argv[])
{
	int count = 0, cents, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	for (i = 0; argv[1][i]; i++)
	{
		if ((argv[1][i] < '0' || argv[1][i] > '9') && !(argv[1][i] == '-' && i == 0))
		{
			puts("Error");
			return (1);
		}
	}
	cents = atoi(argv[1]);
	if (cents < 1)
	{
		puts("0");
		return (0);
	}
	while (cents > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (cents - coins[i] >= 0)
			{
				cents -= coins[i];
				count++;
				break;
			}
		}
	}
	printf("%d\n", count);
	return (0);
}
