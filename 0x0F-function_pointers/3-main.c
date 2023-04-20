#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "function_pointers.h"

int (*get_op_func(char *s))(int, int);

/**
 * main - Calculate 2 numbers
 * @argc: Argument 1
 * @argv: Argument 2
 * Return: Print Answer
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '%' || *op == '/') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));
	return (0);
}
