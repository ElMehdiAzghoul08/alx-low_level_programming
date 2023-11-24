#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: input
 * @index: input
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a_bit;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	a_bit = 1UL << index;
	*n |= a_bit;

	return (1);
}
