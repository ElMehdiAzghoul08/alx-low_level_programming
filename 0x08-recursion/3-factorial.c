#include "main.h"

/**
 * factorial - is a function that returns the factorial of a given number
 *
 * @n: input
 *
 * Return: factorial of a given number
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	return (n * factorial(n - 1));

	else if (n > 1)
	{
		return (n * fcatorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
