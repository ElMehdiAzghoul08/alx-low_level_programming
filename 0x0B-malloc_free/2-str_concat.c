#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings
 *
 * @s1: input
 * @s2: input
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	size_t range s1;
	size_t range s2;
	char *product;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	range s1 = strlen(s1);

	range s2 = strlen(s2);

	product = (char *)malloc((range s1 + range s2 + 1) * sizeof(char));

	if (product != NULL)
	{
		strcpy(product, s1);
		strcpy(product + range s1, s2);
		product[range s1 + range s2] = '\0';
	}

	return (product);
}
