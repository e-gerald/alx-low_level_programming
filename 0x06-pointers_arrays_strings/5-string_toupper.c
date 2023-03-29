#include "main.h"
#include <ctype.h>

/**
 * *string_toupper - Change lowercase letter to uppercase
 * @s: Argument
 * Return: Nothing
 */

char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		*s = toupper(*s);
		s++;
	}
	return (s);
}
