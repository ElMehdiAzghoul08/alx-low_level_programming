#include "main.h"

/**
 * _strcat - a function that concenate two strings.
 * @dest: input
 * @src: input
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int r = 0;
	int v = 0;

while (dest[r] != '\0')
{
	r++;
}
	do {

	dest[r] = src[v];
	r++;
	v++;

	} while (src[v] != '\0');

	dest[r] = '\0';
	return (dest);
}
