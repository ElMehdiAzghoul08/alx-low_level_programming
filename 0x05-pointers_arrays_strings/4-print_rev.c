#include "main.h"

/**
 * print_rev - is a function that prints a string in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	if (*s)
	{
	print_rev(s + 1);
	_putchar('\n')
	_putchar(*s);
		}
}



