#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: input
 * Return: void
 */

int sum_them_all(const unsigned int n, ...)
{
	int add;
	unsigned int x;
	va_list rv;

	if (n == 0)
	{
		return (0);
	}

	add = 0;


	va_start(rv, n);

	for (x = 0; x < n; x++)
	{
		add += va_arg(rv, int);
	}

	va_end(rv);
	return (add);
}
