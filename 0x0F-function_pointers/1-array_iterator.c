#include <stdlib.h>

/**
 * array_iterator - Execute pointer to function array
 * @array: Pointer array to integer
 * @size: Size of array in bytes
 * @action: Function pointer to int
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
