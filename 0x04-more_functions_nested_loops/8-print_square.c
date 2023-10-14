#include "main.h"

/**
 * print_square - is a function that prints a square
 *
 * @size: is the size of the square
 *
*/

void print_square(int size)
{
	int r, o;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (r = 0; r < size; r++)
	{
	for (o = 0; o < size; o++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
