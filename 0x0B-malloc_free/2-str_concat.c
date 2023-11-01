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
	size_t ranges1;
	size_t ranges2;
	char *product;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	ranges1 = strlen(s1);

	ranges2 = strlen(s2);

	product = (char *)malloc((ranges1 + ranges2 + 1) * sizeof(char));

	if (product != NULL)
	{
		strcpy(product, s1);
		strcpy(product + ranges1, s2);
		product[ranges1 + ranges2] = '\0';
	}

	return (product);
}
