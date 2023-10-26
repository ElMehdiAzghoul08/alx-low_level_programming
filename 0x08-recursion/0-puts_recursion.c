#include "main.h"

/**
 * _puts_recursion - is a function that prints a string
 *
 * @s: input
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
	_putchar(*s);

	s++;
	}
	_putchar('\n');
}
