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
	s = malloc(sizeof(str) * sizeof(char));
	while (*str[i] != '\0')
	{
		*str[i] = *pstr[i];
		i++;
	}
	free(s);
	return (pstr);
}
