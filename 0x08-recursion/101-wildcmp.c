#include "main.h"
#include <string.h>
/**
 * wildcmp - is a function that compare two strings and returns 1 otherwise 0
 *
 * @s1: input
 * @s2: input
 *
 * Return:1 otherwise 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
	return (1);
	}

	if (*s2 == 42)
		{

		return (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)));
		}

	if (*s1 == *s2 || *s2 == 63)
	{

		return (wildcmp(s1 + 1, s2 + 1));
		}

	return (0);
}
