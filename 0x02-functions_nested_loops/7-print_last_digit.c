#include "main.h"

/**
 * print_last_digit - Prints last digit
 * @n: Function argument
 * Return: Always 0
 */

int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
