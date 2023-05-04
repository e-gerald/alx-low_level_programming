#include "main.h"

/**
 * flip_bits - Flip bits using bit XOR
 * @n: Argument 1
 * @m: Argument 2
 * Return: Flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, count = 0;
	unsigned long int new, flip = n ^ m;

	while (i >= 0)
	{
		new = flip >> i;
		if (new & 1)
			count++;
		i--;
	}
	return (count);
}
