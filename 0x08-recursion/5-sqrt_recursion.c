#include "main.h"
#include <string.h>

/**
 * sqrt__recursion - function that returns the natural square root of a number
 *
 * @n: input
 * @r: input
 *
 * Return: the natural root of a number otherwise -1
 */

int sqrt__recursion(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	if (r * r > n)
	{
		return (-1);
	}
	return (sqrt__recursion(n, r + 1));
}

/**
 * _sqrt_recursion -  function that returns the natural square root of a number
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
	return (sqrt__recursion(n, 0));
}
