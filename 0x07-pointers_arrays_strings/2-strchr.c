#include "main.h"

/**
 * *_strchr - Locate character in string
 * @s: String argument
 * @c: Element to find
 * Return: Return pointer to s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
