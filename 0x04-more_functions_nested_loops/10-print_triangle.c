#include "main.h"

/**
 * print_triangle - Prints triangles
 * @size: Size of the angle argument
 * Return: Always 0
 */

void print_triangle(int size)
{
	int i, j;

	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= i; j++)
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
