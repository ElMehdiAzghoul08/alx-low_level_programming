#include "main.h"

/**
 * print_number - is a function that prints integer
 *
 * @n: integer
*/
void print_number(int n)
{
	unsigned int r = n;

	if (n < 0)
	{
		_putchar(45);
		r = -r;
	}
	if ((r / 10) > 0)
		printf_number(r / 10);

	_putchar((r % 10) + '0');
}
