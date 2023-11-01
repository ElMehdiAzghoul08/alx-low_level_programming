#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees two dimensional grid
 *
 * @grid: input
 * @height: input
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL)
	{
		for (x = 0; x < height; x++)
		{
			free(grid[x]);

		}
		free(grid);
	}
}
