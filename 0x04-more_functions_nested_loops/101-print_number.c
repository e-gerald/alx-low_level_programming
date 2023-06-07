#include "main.h"

/**
 * print_number - Prints number using putchar
 * @n: Argument
 * Return: Always 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		_putchar(n % 10 + '0');
		n /= 10;
		_putchar(n % 10 + '0');
	}
	else if (n > 0 && n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
