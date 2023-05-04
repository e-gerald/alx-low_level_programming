#include <stdio.h>

/**
 * binary_to_uint - Convert binary numbers to unsigned int
 * @b: Binary value
 * Return: Unit value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0, i = 0;

	while (b[i] != '\0')
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		unit = 2 * unit + (b[i] - '0');
		i++;
	}
	return (unit);
}
