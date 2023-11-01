#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns ponter to a 2D array
 *
 * @width: input
 * @height: input
 *
 * Return: Null or a 2D array
 */


int **alloc_grid(int width, int height)
{
	int y;
	int x;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		grid[x] = (int *)calloc(width, sizeof(int));
		if (grid[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(grid[y]);
			}
			free(grid);
			return (NULL);
		}
	}

	return (grid);
}
