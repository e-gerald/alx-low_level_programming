#include "main.h"

/**
 * get_endianness - Check endianness
 * Return: Endianness value
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *prop = (char *) &i;

	return (*prop);
}
