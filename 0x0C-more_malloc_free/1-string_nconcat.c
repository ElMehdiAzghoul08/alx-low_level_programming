#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: input
 * @s2: input
 * @n: input
 *
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int range1, range2;
	char *ar;

	if (s2 == NULL) s2 = "";

	range1 = (s1 != NULL) ? strlen(s1) : 0;
	range2 = strlen(s2);

	if (n >= range2)
	{
		n = range2;
	}

	ar = (char *)malloc(range1 + n + 1);

	if (ar == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		strcpy(ar, s1);
	} else
	{
		ar[0] = '\0';
	}

	strncat(ar + range1, s2, n);
	ar[range1 + n] = '\0';

	return (ar);
}
