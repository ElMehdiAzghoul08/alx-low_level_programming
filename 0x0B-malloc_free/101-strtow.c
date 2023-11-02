#include "main.h"
#include <stdlib.h>
/**
 * c_wd - a function
 *
 * @str: input
 *
 * Return: wct
 */

int c_wd(char *str)
{

	int wct;
	wct = 0;
	int rdd;
	rdd = 0;

	while (*str) 
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
		{
			rdd = 0;
		} else if (rdd == 0)
		{
			rdd = 1;
			wct++;
		}
		str++;
	}

	return (wct);
}

/**
 * strtow - function that splits a string into words
 *
 * @str: input
 *
 * Return: NULL if str == NULL
 */

char **strtow(char *str)
{
	int wct;
	char **k;
	int rx;
	int rdd;
	int rtt;
	int range;
	int x;
	int y;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	wct = c_wd(str);
	k = (char **)malloc((wct + 1) * sizeof(char *));
	if (k == NULL)
	{
		return (NULL);
	}

	rx = 0;
	rdd = 0;
	rtt = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] == ' ' || str[x] == '\t' || str[x] == '\n')
		{
			if (rdd)
			{
				range = x - rtt;
				k[rx] = (char *)malloc((range + 1) * sizeof(char));
				if (k[rx] == NULL)
				{
					for (y = 0; y < rx; y++)
					{
						free(k[y]);
					}
					free(k);
					return (NULL);
				}

				strncpy(k[rx], &str[rtt], range);
				k[rx][range] = '\0';
				rx++;
				rdd = 0;
			}
		} else if (rdd == 0)
		{
			rdd = 1;
			rtt = x;
		}
	}

	if (rdd)
	{
		range = strlen(&str[rtt]);
		k[rx] = (char *)malloc((range + 1) * sizeof(char));
		if (k[rx] == NULL)
		{
			for (y = 0; y <= rx; y++)
			{
				free(k[y]);
			}
			free(k);
			return (NULL);
		}

		strcpy(k[rx], &str[rtt]);
		words[rx][range] = '\0';
		rx++;
	}

	k[rx] = NULL;

	return (k);
}
