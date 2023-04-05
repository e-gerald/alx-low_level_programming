#include "main.h"

/**
 * _puts_recursion - Prints string recursively
 * @s: Argument
 * Return: Return string
 */
int _putchar(char c);

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
