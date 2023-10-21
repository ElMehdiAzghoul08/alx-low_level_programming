#include "main.h"
/**
 * times_table - is a function that prints the 9 time table starting from 0
 */

void times_table(void)
{
	int r, v, e;

	r = 0;
	do {
		v = 0;
		do {
			e = r * v;
			if (v > 0)
			{
				_putchar(44);
				_putchar(32);

			if (e < 10)
			{
				_putchar(32);
				_putchar(e % 10 + 48);
			}
			else
			{
				_putchar(e / 10 + 48);
				_putchar(e % 10 + 48);
			}
			}
			else
			{
			_putchar(48);
			}
			v++;
		} while (v <= 9);
		_putchar('\n');
		r++;
		} while (r <= 9);
}
