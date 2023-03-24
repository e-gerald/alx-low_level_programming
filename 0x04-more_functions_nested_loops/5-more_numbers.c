#include "main.h"

/**
 * more_numbers - Print 10x numbers
 * Return: Always 0
 */

void more_numbers(void)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				_putchar('\\');
			}
			_putchar(' ');
			_putchar('\n');
		}
	}
}

