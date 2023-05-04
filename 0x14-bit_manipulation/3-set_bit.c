#include "main.h"

/**
 * set_bit - Set bit to 1 at given index
 * @n: Int argument
 * @index: Index position
 * Return: New value
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (1UL << index) | *n;
	return (1);
}
