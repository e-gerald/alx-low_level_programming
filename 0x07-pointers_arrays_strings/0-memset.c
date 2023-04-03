#include "main.h"

/**
 * *_memset - A function that fills memory with a constant byte
 * @s: String argument
 * @b: Character for filling the string
 * @n: Size of the char b[0]
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
