#include "main.h"

void str2(char *s);
int is_palindrome(char *s);

/**
 * str1 - Get normal string
 * @s: Argument
 * Return: Normal string
 */

void str1(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	str1(s + 1);
}

/**
 * str2 - Get reversed string
 * @s: Argument
 * Return: Reverse string
 */

void str2(char *s)
{
	if (*s == '\0')
	{
		str2(s + 1);
	}
}

/**
 * is_palindrome - Check for palindrome
 * @s: Argument
 * Return: 1 if string is a palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	str1(s);
	str2(s);

	if (*(str1(s)) != *(str2(s)))
	{
		return (0);
	}
	else
		return (1);
	return (is_palindrome(s + 1));
}

