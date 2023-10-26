#include "main.h"

/**
 * _strlen_recursion - a function that prints the lenght of a string
 *
 * @s: input
 *
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
	return (1 + _strlen_recursion(++s));
	}
	else
	{
		return (0);
	}
}
