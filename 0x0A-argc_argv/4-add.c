#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Add positive numbers
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Sum of positive numbers
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	char **c = argv;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		if ((*c[i] < 48) && (*c[i] > 57))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(c[i]);
	}
	printf("%d\n", sum);
	return (0);
}
