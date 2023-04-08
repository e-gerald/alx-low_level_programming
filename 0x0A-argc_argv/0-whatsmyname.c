#include <stdio.h>
#include "main.h"

/**
 * main - Prints file name
 * @argc: argument count
 * @argv: Argument vector
 * Return: File name
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
