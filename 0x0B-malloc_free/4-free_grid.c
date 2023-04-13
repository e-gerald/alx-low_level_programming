#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Free up Pointer to a 2 dimensional array
 * @grid: Double pointer Argument 1
 * @height: Argument 2
 * Return: Return address of pointer
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
