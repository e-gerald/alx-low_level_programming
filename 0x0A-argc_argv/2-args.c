#include <stdio.h>
#include "main.h"

/**
 * main - Prints all vector arguments
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Arguments
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
