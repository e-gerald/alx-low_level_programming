#include "main.h"

/**
 * _isupper - Checks for uppercase
 * @c: Argument
 * Return: Always 0
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
