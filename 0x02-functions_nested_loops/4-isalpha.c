#include "main.h"

/**
 * _isalpha - Checks for upper case character
 * @c: Call argument for char
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
		return (1);
	else
		return (0);
}
