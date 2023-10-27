#include "main.h"

/**
 * is_prime_ - a function that reaturs 1 if the integer is prime number
 *
 * @n: input
 * @r: input
 *
 * Return: 1 otherwise 0
 */

int is_prime_(int n, int r)
{
	if (n <= 1)
	{
	return (0);
	}

		if (r == 1)
	{
		return (1);
		}
		if (n % r == 0)
		{
		return (0);
	}

		return (is_prime_(n, r - 1));
	}

/**
 * is_prime_number - a functio that returns 1 if the integer is prime number
 *
 * @n: input
 *
 * Return: 1 otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{

	return (0);
		}
	return (is_prime_(n, n - 1));
}
