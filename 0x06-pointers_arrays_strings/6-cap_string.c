#include <ctype.h>
#include "main.h"

/**
 * *cap_string - Capitalize first words of string
 * @s: Argument pointer to char
 * Return: Pointer to s variable
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i - 1] == '-' && s[i] == 'w')
			continue;
		else if (isalpha(s[i]) && (i == 0 || isspace(s[i - 1]) || ispunct(s[i - 1])))
		{
			s[i] = toupper(s[i]);
		}
	}
	return (s);
}
