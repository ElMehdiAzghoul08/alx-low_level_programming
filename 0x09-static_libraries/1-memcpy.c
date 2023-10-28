#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int rv = 0;

	do {
		dest[rv] = src[rv];
		rv++;
	} while (rv < n);

	return (dest);
}
