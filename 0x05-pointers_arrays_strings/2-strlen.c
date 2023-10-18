#include "main.h"

/**
 * _strlen - is a function that returns the lenght of a string
 *
 * @s: is a parameter
 *
 * Return: result expected is the return of the length of a string
 */

int _strlen(char *s)
{
	int rtt = 0;
		while (*s != '\0')
		rtt++;
		s++;
	return (rtt);
}
