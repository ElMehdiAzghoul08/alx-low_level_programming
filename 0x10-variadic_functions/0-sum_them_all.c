#include "variadic_fucntions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: input
 * Return: void
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	int add = 0;
	unsigned int x;

	va_list rv;

	va_start(rv, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(rv, int);
	}

	va_end(rv);
	return (add);
}
