#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Argument 1
 * @size: Argument 2
 * Return: Pointer to memory address
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
