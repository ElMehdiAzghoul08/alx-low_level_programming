#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates array of integers
 *
 * @min: input
 * @max: input
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int h;
	int x;
	int *r;

	if (min > max)
	{
		return (NULL);
	}

	h = max - min + 1;
	r = malloc(h * sizeof(int));

	if (r != NULL)
	{
		for (x = 0; x < h; x++)
		{
			r[x] = min + x;
		}
	}

	return (r);
}
