#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Pointer to a 2 dimensional array
 * @width: Argument 1
 * @height: Argument 2
 * Return: Return address of pointer
 */

int **alloc_grid(int width, int height)
{
	int i, j, **s;

	if (width <= 0 || height <= 0)
		return (NULL);

	s = malloc(height * sizeof(int *));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(width * sizeof(int));
		
		if (s[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(s[j]);
			}
			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			s[i][j] = 0;
		}
	}
	return (s);
}
