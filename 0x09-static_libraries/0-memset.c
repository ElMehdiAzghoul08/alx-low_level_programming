#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * .
 * @n: input
 * @b: input
 * @s: input
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r = 0;

	do {
		s[r] = b;
		r++;
		n--;
	} while (n > 0);

	return (s);
}
