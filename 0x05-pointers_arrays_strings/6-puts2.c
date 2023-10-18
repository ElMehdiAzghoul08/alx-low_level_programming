#include "main.h"

/**
 * puts2 - is a function that prints every other character of a string
 *
 * @str: string
 */

void puts2(char *str)
{
	for (int r = 0; str[r] != '\0'; r += 2)
	{
	 _putchar(str[r]);
	}
	_putchar('\n');
}
