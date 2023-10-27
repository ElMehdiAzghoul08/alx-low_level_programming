#include "main.h"
#include <string.h>

/**
 * _sqrt_recursion -is a function that returns square root of a number
 *
 * @n: input
 *
 * Return: the natural root of a number otherwise -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}

	if (n == 0 || n == 1)
	{
	return (n);
	}

	return (_sqrt(n, n / 2));
}

/**
 * _sqrt - a function that returns the natural square root of a number
 *
 * @n: input
 * @r: input
 *
 * Return: the natural root of a number otherwise -1
 */

int _sqrt(int n, int r)
{
	if (r * r == n)

	{
		return (r);
		}
		if (r <= 0)

		{
		return (-1);
		}
		int theone = (r + n / r) / 2;

		if (theone >= r)

		{
		return (-1);
		}
	return (_sqrt(n, theone));
}
