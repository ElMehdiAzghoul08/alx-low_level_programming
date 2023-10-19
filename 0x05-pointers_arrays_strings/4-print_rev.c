#include "main.h"

/**
 * print_rev - is a function that prints a string in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int r = 0;

	while (s[r])
	r++;

	for (int v = r - 1; v >= 0; v--)
	{
		_putchar(s[v]);
	}
	_putchar('\n')
}
