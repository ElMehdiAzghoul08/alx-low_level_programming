#include"main.h"

/**
 * print_alphabet - prints all alphabet in lowercase from a -z
 * lowecase letters are printed by the use of the function _putchar
 */

void print_alphabet(void)
{
	char pr = 'a';

	while (pr <= 'z')
	{
		_putchar(pr);
		pr++;
	}
		_putchar('\n');
}
