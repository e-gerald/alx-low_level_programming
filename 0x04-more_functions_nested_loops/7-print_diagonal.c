#include "main.h"

/**
 * print_diagonal - Prints diagonal lines
 * @n: Argument
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i, j = 0;

	while (j < n)
	{
		if (j >= 0)
		{ 
			for (i = 0; i <= j; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
		j++;
		_putchar('\n');
	}
}
