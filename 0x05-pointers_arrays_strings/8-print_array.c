#include <stdio.h>
#include <string.h>

/**
 * print_array - Print n integer of an array
 * @a: Pointer argument
 * @n: Argument
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
