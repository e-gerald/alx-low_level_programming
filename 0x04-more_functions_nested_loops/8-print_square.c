#include "main.h"

/**
 * print_square - Prints squares using #
 * @size: Argument for size of the square
 * Return: Always 0
 */

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size > i)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
