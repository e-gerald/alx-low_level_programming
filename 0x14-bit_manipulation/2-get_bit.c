#include "main.h"

/**
 * get_bit - Prints value of bit at an index
 * @n: Int argument
 * @index: Specific index
 * Return: Bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);
	val = (n >> index) & 1;
	return (val);
}
