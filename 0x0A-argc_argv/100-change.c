#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - calculates the minimum number of coins needed to make change
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char **argv)
{
	int amount, i, coins_used;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	coins_used = 0;

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && amount >= 0; i++)
	{
		while (amount >= coins[i])
		{
			coins_used++;
			amount -= coins[i];
		}
	}

	printf("%d\n", coins_used);

	return (0);
}
