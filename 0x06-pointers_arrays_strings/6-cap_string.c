#include <ctype.h>
#include "main.h"

/**
 * *cap_string - Capitalize first words of string
 * @*: Argument
 * Return: Always 0
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (isalpha(*s + i) && (isspace(*s + i - 1) || ispunct(*s + i - 1)))
		{
			*s = toupper(*s);
		}
	}
	return (s);
}

