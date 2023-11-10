#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings followed by a new line
 * @separator: input
 * @n: input
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *s;
	va_list rv;

	va_start(rv, n);


	for (x = 0; x < n; x++)
	{
		s = va_arg(rv, char *);

		if (s == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s", s);
		}

		if (x != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(rv);
	printf("\n");
}
