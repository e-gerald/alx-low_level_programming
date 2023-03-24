#include "main.h"

/**
 * more_numbers - Print 10x numbers
 * Return: Always 0
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
			}
			else if (i <= 9)
				_putchar(i + '0');
		}
		_putchar('\n');
	}
}
