#include "main.h"

/**
 * print_numbers - Prints int from 0-9
 * Return: Always 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i + '0');
	_putchar('\n');
}