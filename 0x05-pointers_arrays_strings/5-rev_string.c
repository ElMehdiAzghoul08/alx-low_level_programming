#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string
 *
 * @s: string
 */

void rev_string(char *s)
{
	int r, v;

	v = strlen(s);

	for (r = v ; v >= 0 ; r--)
	{
	rev_string(s + 1);

	}
	_putchar('\n');

}
