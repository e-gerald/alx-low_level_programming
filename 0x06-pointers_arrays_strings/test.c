#include "main.h"

/**
 * *_strncat - Concatenate two strings
 * @dest: Destination Argument
 * @src: Argument 2
 * @n: Size of array
 * Return: Always 0;
 */

char *_strncat(char *dest, char *src, int n)
{
	int i  = 0, j = 0;
	char *p = dest;
	char *ps = src;

	while (i < n && dest[i] != '\0')
	{
		while (j < n && src[j] != '\0')
		{
			p[i] = dest[i];
			ps[j] = src[j];
			i++;
			j++;
		}
	}
	return (p:ps);
}
