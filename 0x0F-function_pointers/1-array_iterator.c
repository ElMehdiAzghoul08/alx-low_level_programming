#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function given as a parameter
 * @array: input
 * @size: input
 * @action: input
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t r;

	for (r = 0; r < size; r++)
	{
		action(array[r]);
	}
}
