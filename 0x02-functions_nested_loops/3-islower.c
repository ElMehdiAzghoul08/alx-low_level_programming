#include "main.h"

/**
 * _islower - a function that checks for lower case character
 *
 * @c: is a character
 *
 * Return: 1 if c is lowercase 0 otherwise
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	return (1);

	else
	return (0);

}
