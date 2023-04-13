#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Allocate memory using malloc
 * @b: Unsigned int argument
 * Return: Pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	int *pb;

	pb = malloc(b);
	if (pb == NULL)
	{
		exit(98);
	}
	return (pb);
}
