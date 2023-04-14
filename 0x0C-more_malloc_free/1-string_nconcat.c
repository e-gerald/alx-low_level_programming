#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings
 * @s1: String argument 1
 * @s2: String argument 2
 * @n: Size of string
 * Return: Concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *c;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	if (n >= k)
		l = i + k;
	else
		l = i + n;
	c = malloc(sizeof(char) * l + 1);
	if (c == NULL)
		return (NULL);
	k = 0;
	while (j < l)
	{
		if (j <= i)
			c[j] = s1[j];
		if (j >= i)
		{
			c[j] = s2[k];
			k++;
		}
		j++;
	}
	c[j] = '\0';
	return (c);
}
