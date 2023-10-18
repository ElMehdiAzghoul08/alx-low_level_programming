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
		char *v = s;


		while (*v != '\0')

		{
		v++;
		}
		v--;
		while (v >= s)
		{
		_putchar (*v);
		v--;
		}
	_putchar('\n');

	}

}
