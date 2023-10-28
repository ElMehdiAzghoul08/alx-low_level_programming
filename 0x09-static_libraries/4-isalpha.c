#include "main.h"
#include <ctype.h>

/**
 * _isalpha - a function that checks for alphabetic character
 *
 * @c: is a character
 *
 * Return: 1 if c is a letter otherwise returns 0
*/

int _isalpha(int c)
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
