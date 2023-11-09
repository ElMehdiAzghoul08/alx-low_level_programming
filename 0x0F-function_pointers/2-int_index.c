#include "function_pointers.h"

/**
 * int_index - a function that searches foe an integer
 * @array: input
 * @size: input
 * @cmp: input
 *
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}
	int r;

	for (int r = 0; r < size; r++)
	{
		if ((*cmp)(array[r]) != 0)
		{
			return (r);
		}
	}

	return (-1);
}
