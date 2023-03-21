#include "main.h"

/**
 * _islower - Checks for lowercase characters
 * @c: Takes argument for lower case
 * Return: Always 0
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
