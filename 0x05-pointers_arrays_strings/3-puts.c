#include "main.h"

/**
 * _puts - a function that prints a string followed by  anew line to stdout
 *
 * @str: string
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	_putchar(*str);
	str++;
	_putchar('\n');
}
