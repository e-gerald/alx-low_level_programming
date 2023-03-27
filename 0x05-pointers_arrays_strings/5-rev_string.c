#include <stdio.h>
#include <string.h>

/**
 * rev_string - Reverse string
 * @s: Argument
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		*s = s[i];
}
