#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that returns a pointer to a new string
 *
 * @str: input
 *
 * Return: NULL
 */

char *_strdup(char *str)
{
	size_t x;
	size_t range;

	char *dupleofstring;

	if (str == NULL)
	{
		return (NULL);
	}

	range = strlen(str);

	dupleofstring = (char *)malloc((range + 1) * sizeof(char));

	if (dupleofstring != NULL)
	{
		for (x = 0; x < range; x++)
		{
		dupleofstring[x] = str[x];

		}

		dupleofstring[range] = '\0';
	}

	return (dupleofstring);
}
