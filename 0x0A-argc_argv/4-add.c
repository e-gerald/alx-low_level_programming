#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Add positive numbers
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Sum of positive numbers
 */

int main(int argc, char *argv[])
{
	int i = 0, sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	while(i <= argc)
	{
		if (!(isdigit([i])))
		{
			printf("Error\n");
			return (0);
		}
		else
		{
			sum += atoi(argv[i]);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
