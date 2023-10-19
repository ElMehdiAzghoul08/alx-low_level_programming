#include "main.h"
#include <ctype.h>

/**
 * _islower - a function that checks for lower case character
 *
 * @c: is a character
 *
 * Return: 1 if c is lowercase 0 otherwise
*/

int _islower(int c)
{

	if (isalpha(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
