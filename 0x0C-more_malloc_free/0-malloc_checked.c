#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: input
 *
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *r = malloc(b);

	if (r == NULL)
	{
		exit(98);
	}

	return (r);
}
