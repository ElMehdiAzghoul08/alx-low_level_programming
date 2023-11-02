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
	int **r;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	r = (int **)malloc(height * sizeof(int *));

	if (r == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		r[x] = (int *)malloc(width * sizeof(int));
		if (r[x] == NULL)
		{
			for (y = 0; y < x; y++)
			{
				free(r[y]);
			}
			free(r);
			return (NULL);
		}
	}

	return (r);
}
