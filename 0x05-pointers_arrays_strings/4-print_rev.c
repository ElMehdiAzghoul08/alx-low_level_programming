#include "main.h"

/**
 * print_rev - is a function that prints a string in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int r, v;
	char o;

	if (r >= v)
	return;
	o = *(s + r);
	*(s + r) = *(s + v);

	*(s + v) = o;

	print_rev(s, ++r, --v);
	_putchar('\n')
}
