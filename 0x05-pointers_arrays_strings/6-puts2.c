#include "main.h"

/**
 * puts2 - is a function that prints every other character of a string
 *
 * @str: string
 */

void puts2(char *str)
{
	int p;

	for (p = 0; str[p] != 48; p += 2)
	{
		_putchar(str[p]);
	}
	_putchar('\n');
}
