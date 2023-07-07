#include "main.h"

/**
 * _putchar - Prints single digit character
 * @c: Char argument
 * Return: Char format
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
