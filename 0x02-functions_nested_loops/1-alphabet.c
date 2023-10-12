#include"main.h"

/**
 * print_alphabet - prints all alphabet in lowercase from a -z
 * lowecase letters are printed by the use of the function _putchar
 */

void print_alphabet(void)
{
	int pr;

	for (pr = 'a' ; pr <= 'z'; pr++)
		_putchar(pr);
			_putchar('\n');
}
