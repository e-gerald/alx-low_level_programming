#include "main.h"

/**
 * _strspn - Get the length of a prefix substring
 * @s: Main string argument
 * @accept: substring argument
 * Return: Size of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				sum += sizeof(s[i]);
			}
		}
	}
	sum -= (sizeof(char) * 2);
	return (sum);
}
