#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: string
 */

void rev_string(char *s)
{
	if (*s)
	{
		rev_string(s + 1);
		_putchar(*s);

	}
}
