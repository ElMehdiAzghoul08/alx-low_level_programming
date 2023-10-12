#include"main.h"

/**
 * print_alphabet_x10 - alphabet will be printed 10 times
 *
 */

void print_alphabet_x10(void)
{
	int rows, body;

	for (rows = 0; rows <= 9; rows++)
	{
	for (body = 'a' ; body <= 'z' ; body++)
		_putchar(body);
	_putchar('\n');
	}
}
