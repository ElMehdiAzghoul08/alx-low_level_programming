#include "main.h"

/**
 * _puts - a function that prints a string followed by  anew line to stdout
 *
 * @str: string
 *
 */

void _puts(char *s)
{
	while (*s)
	{
	_putchar(*s);
	s++;
	}
	_putchar('\n');
}
