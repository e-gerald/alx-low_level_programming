#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverse string
 * @s: Argument
 * Return: Always 0
 */

void rev_string(char *s)
{
	char temp;
	char *ps = s;
	char n = strlen(s) - 1;
	char *pl = s + n;

	while (ps < pl)
	{
		temp = *ps;
		*ps = *pl;
		*pl = temp;
		++ps;
		--pl;
	}
}
