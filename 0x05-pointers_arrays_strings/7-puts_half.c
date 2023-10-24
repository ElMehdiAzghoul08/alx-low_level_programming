#include "main.h"
#include <string.h>

/**
 * puts_half - is a function that prints half of a a string
 *
 * @str: string
 */

void puts_half(char *str)
{
	int tool = strlen(str);

	if (tool % 2 == 1)
	{
		int n = (tool - 1) / 2;
		int h;

		for (h = n; h < tool; h++)
		{
			_putchar(str[h]);

					}

				}
			}
