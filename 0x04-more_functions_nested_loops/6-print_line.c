#include "main.h"

/**
 * print_line - Prints a line
 * @n: Argument
 * Return: Always 0
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
