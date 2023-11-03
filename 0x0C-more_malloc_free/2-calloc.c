#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 *
 * @nmemb: input
 * @size: input
 *
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x;
	void *ar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ar = malloc(nmemb * size);

	if (ar != NULL)
	{
		for (x = 0; x < nmemb * size; x++)
		{
			*((char *)ar + x) = 0;
		}
	}

	return (ar);
}
