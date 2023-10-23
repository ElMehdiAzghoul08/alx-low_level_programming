#include "main.h"

/**
 * print_rev - is a function that prints a string in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int rev = 0;

	int v;

	while (s[rev] != '\0')
	{
		rev++;
	}
	v = rev - 1;
	if (v < 0)
	{
		_putchar('\n');
		return;
	}

	do {
	_putchar(s[v]);
	v--;
	}
		while (v >= 0);
	_putchar('\n');
}
