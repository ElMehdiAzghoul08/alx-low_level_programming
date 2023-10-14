#include "main.h"

/**
 * print_triangle - is a function that prints a triangle
 *
 * @size: is the size of the triangle
 *
*/

void print_triangle(int size)
{
	int r, o, v;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (r = 0; r < size; r++)
	{
	for (o = size - r; o > 1; o--)
	{
	_putchar(' ');
	}
	for (v = 0; v <= r; v++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
