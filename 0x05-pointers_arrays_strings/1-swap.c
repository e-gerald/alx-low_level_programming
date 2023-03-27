#include <stdio.h>

/**
 * swap_int - Swap the value of two integers
 * @a: Argument 1
 * @b: Argument 2
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp = 0;

	temp = *a;
	*a = *b;
	*b = temp;
}
