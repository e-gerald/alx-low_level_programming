#include "main.h"

/**
 * _puts_recursion - Prints string recursively
 * @s: Argument
 * Return: Return string
 */
int _putchar(char c);

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
