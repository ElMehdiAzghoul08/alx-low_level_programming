#include "main.h"
/**
 * _strncat - is a function that concatenates two strings.
 *
 * @dest: input
 * @src: input
 * @n: input
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int r = 0;
	int v = 0;

	while (dest[r] != '\0')
	{
		r++;
	}
	do {
		if (v >= n || src[v] == '\0')
		{
			break;
		}
		dest(r) = src[v];
		r++;
		v++;
	} while (1);

	dest[r] = '\0';
	return (dest);
}
