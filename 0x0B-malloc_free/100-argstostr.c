#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: input
 * @av: input
 * Return: NULL or a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int x;
	int *rv;
	int range;
	char *product;
	int local;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	range = 0;
	for (x = 0; x < ac; x++)
	{
		rv = av[x];
		while (*rv)
		{
			range++;
			rv++;
		}
		range++;
	}
	product = (char *)malloc((range + 1) * sizeof(char));
	if (product == NULL)
	{
		return (NULL);
	}
	local = 0;
	for (x = 0; x < ac; x++)
	{
		rv = av[x];
		while (*rv)
		{
			product[local++] = *rv++;
		}
		product[local++] = '\n';
	}
	product[local] = '\0';
	return (product);
}
