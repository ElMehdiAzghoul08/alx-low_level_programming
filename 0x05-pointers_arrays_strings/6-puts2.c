#include "main.h"

/**
 * puts2 - is a function that prints every other character of a string
 *
 * @str: string
 */

void puts2(char *str)
{
	int p;
	int car = 0;

	for (p = 0; str[p] != '\0' && car < 224; p += 2)
	{
		if (str[p] >= 32 && str[p] <= 126)
	{

		_putchar(str[p]);
		car++;
		}
	}
	_putchar('\n');
}
