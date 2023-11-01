#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - is a function that create an array of chars
 *
 * @size: input
 * @c: input
 *
 * Return: null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	char *arrayofchar = (char *)malloc(size * sizeof(char));

	if (arrayofchar != NULL)
	{
		for (x = 0; x < size; x++)
		{
			arrayofchar[x] = c;

		}
	}

	return (arrayofchar);
}
