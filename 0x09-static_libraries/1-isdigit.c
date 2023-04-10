#include "main.h"

/**
 * _isdigit - Checks for digit
 * @c: Argument
 * Return: Always 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
