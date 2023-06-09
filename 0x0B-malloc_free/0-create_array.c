#include <stdlib.h>
#include "main.h"

/**
 * create_array - Create array of chars
 * @size: malloc size
 * @c: char pointer
 * Return: Pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
