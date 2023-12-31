#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - a function that converts binary number to an unsigned int
 * @b: input
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int product;

	if (b == NULL)
	{
		return (0);
	}
	product = 0;
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		product = (product << 1) + (*b - '0');

		b++;

	}
	return (product);
}
