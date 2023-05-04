#include "main.h"

/**
 * print_binary - Convert decimal to binary
 * @n: Integer argument
 */

void print_binary(unsigned long int n)
{
	unsigned long int binary = 0;
	int i = 63, count = 0;

	while (i >= 0)
	{
		binary = n >> i;
		if (binary & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
		i--;
	}
	if (!count)
		_putchar('0');
}
