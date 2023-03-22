#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints to 98
 * @n: Argument
 * Return: Always 0
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		else if (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
