#include "main.h"

/**
 * print_rev - is a function that prints a string in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	if (!s)
	{
		return;

	int r = 0;
	int v = strlen(s) - 1;

	while (r < v)
	{
	char e = s[r];

	s[r] = s[v];
	s[v] = e;
	r++;
	v--;
	}
}
