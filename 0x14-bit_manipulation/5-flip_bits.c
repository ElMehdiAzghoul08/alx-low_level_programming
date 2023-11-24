#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to flip
 * @n: input
 * @m: input
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int product = n ^ m;
	unsigned int tot = 0;

	while (product)
	{
		tot += product & 1;
		product >>= 1;
	}

	return (tot);
}
