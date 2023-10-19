#include "main.h"

/**
 * print_rev - is a function that prints a string in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	if (s)
	{
	for (int r = 0; s[r] != '\0'; r++)
	{
	for (int r = s[r] - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n')
}
}
}
