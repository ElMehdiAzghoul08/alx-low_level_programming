#include "main.h"

/**
 * print_most_numbers is a function that prints from 0 - 9 except 2 and 4
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int p = 0;

	for (p <= 9)
		if (p != 2 && p != 4)
		{
		_putchar(p + '0');

		p++;
		}
		_putchar('\n');
}
