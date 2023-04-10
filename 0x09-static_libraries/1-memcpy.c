#include "main.h"

/**
 * *_memcpy - Copy memory area to another memory area
 * @dest: Destination argument
 * @src: Argument to copy
 * @n: Sizeof array
 * Return: return new src
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
