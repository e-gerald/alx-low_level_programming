#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Multiply 2 numbers in argumment
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Sum of numbers
 */

int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		sum *= atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
