#include "main.h"

/**
 * _print_rev_recursion - a function that print string in reverse
 *
 * @s: input
 *
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);

		_putchar(*s);
	}
}
