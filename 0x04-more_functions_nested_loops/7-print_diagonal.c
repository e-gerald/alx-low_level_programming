#include "main.h"

/**
 * print_diagonal - Prints diagonal lines
 * @n: Argument
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i, j = 0;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (i = 0; i < j; i++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	if (n <= j)
		_putchar('\n');
}
