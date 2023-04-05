#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @c: String argument
 * Return: Reversed string
 */

int _putchar(char c);

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
