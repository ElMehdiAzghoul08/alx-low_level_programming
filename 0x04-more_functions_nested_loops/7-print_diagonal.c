#include "main.h"

/**
 * print_diagonal - is a function that prints diagonal line
 *
 * @n: number of times / should be printed
 *
*/

void print_diagonal(int n)
{
	int r, o;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (r = 0; r < n; r++)
	{
	for (o = 0; o < r; o++)
	}
	{_putchar(32);
	}
	{
	_putchar(92);
	_putchar('\n');
	}
	}
}
