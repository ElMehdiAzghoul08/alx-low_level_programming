#include "main.h"
#include <string.h>
/**
 * print_rev - is a function that prints a string in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	if (*s)
	{
	_putchar (*s + 1);
	_putchar(*s);

	}

}
