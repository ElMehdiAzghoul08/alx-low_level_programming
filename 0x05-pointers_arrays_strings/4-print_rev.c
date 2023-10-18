#include "main.h"

/**
 * print_rev - is a function that prints a string in reverse
 *
 * @s: string
 */

void print_rev(char *s)
{
	if (!str)
	{
		return;

	int r = 0;
	int v = strlen(str) - 1;

	while (r < v)
	{
	char s = str[r];

	str[r] = str[v];
	str[v] = s;
	r++;
	v--;
	}
}
