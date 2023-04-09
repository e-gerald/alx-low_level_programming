#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Prints the minimal number of coins for change
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Number of coins
 */

int main(int argc, char *argv[])
{
	int i, cent, count = 0;
	int coins[] = {25, 10, 5, 2, 1};

	cent = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (cent <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (cent >= coins[i])
		{
			cent -= coins[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}
