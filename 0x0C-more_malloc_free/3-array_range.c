#include "main.h"
#include <stdlib.h>

/**
 * array_range - Create array of integers
 * @min: Minimum range
 * @max: Maximum range
 * Return: Min to Max value
 */

int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}

