#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: input
 * @old_size: input
 * @new_size: input
 *
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *rv;
	unsigned int range;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	range = (old_size < new_size) ? old_size : new_size;

	rv = malloc(new_size);
	if (rv != NULL)
	{
		memcpy(rv, ptr, range);
		free(ptr);
	}

	return (rv);
}
