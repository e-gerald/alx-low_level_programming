#include "main.h"

/**
 * clear_bit - Set bit value to 0
 * @n: Integer argument
 * @index: Given index to sey value
 * Return: New n value
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}
