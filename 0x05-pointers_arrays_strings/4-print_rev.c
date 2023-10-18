#include "main.h"
#include <string.h>
/**
 * print_rev - is a function that prints a string in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	int r, v, e;

	v = strlen(s);
	for (r = 0; r < v / 2; r++)
	{
		e = s[r];
		s[r] = s[v - r - 1];
		s[v - r - 1] = e;
	}

}
