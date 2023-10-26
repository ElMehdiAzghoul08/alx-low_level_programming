#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion -is a function that returns square root of a number
 *
 * @n: input
 *
 * Return: the natural root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0 || sqrt(n) != (int)sqrt(n))
	{
		return (-1);
	}
	else
	{
		return (sqrt(n));
	}
}
