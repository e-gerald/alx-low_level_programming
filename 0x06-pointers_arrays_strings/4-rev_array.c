#include <string.h>
#include "main.h"

/**
 * reverse_array - Reverse content of array
 * @a: Arugument
 * @n: Size
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int temp = 0;
	int *pi = a;
	int *pl = a + n;

	while (pi < pl)
	{
		temp = *pi;
		*pi = *pl;
		*pl = temp;
		++pi;
		--pl;
	}
}
