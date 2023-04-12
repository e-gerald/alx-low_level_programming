#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Copy string to new memory location
 * @str: String
 * Return: String copy
 */

char *_strdup(char *str)
{
	char *s, *pstr = str;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc((i + 1) * sizeof(char));
	if (str > s)
	{
		return (NULL);
	}
	i = 0;
	while (pstr[i] != '\0')
	{
		s[i] = pstr[i];
		i++;
	}
	return (s);
}
