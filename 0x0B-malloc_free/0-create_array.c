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

	s = malloc((size + 1) * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
