#include "main.h"

/**
 * print_times_table - function that prints the n times table, starting with 0
 * @n: integer
 */

void print_times_table(int n)
{ int o, d, r;

	if (!(n > 15 || n < 0))

	{
	for { (o = 0; o <= n; o++)
	for { (d = 0; d <= n; d++)
		r = o * d;

		if (r / 100 != 0)

		{
		_putchar ((r / 100) + 48);
		}
		else {
		_putchar(32);
		}
		if (((r / 10) % 10) != 0 || r / 100 == 1)

		{
		_putchar (((r / 10) % 10) + 48);
		}else {
		_putchar(32);
		} _putchar ((r % 10) + 48);
			if (d != n)
			{
			_putchar(44);
			_putchar(32);
		}
		}
	_putchar('\n');
	}
}
}
