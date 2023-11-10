#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints number, followed by a new line
 * @separator: input
 * @n: input
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list rv;

	va_start(rv, n);
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(rv, int));

		if (x != n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}

	va_end(rv);

	printf("\n");
}
