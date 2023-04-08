#include <stdio.h>
#include "main.h"

/**
 * main - Prints number of argument
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Number of argument
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
