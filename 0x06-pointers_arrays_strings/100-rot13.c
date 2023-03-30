#include <stdio.h>
#include "main.h"

/**
 * *rot13 - Rotates char by 13 places
 * @s: Argument
 * Return: Always 0
 */

char *rot13(char *s)
{
	int i, j;
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	char d[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (s[i] == c[j])
			{
				s[i] = d[j];
				break;
			}
		}
	}
	return (s);
}
