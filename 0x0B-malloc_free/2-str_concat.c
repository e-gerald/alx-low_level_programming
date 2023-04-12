#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Add another string to end of string
 * @s1: Argument 1
 * @s2: Argument 2
 * Return: Concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *c;
	int i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	c = malloc((i + j + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		c[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		c[i] = s2[j];
		i++, j++;
	}
	c[i] = '\0';
	return (c);
}
