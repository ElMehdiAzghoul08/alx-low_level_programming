#include "main.h"

/**
 * print_line - is a function that prints straight lines
 *
 * @n: - the number of times "_" should be printed
*/

void print_line(int n)
{
	int v;

	if (n <= 0)
	_putchar('\n');

	else
	{
	for (v = 0; v < n; v++)
	_putchar('_');

	_putchar('\n');

	}
}
