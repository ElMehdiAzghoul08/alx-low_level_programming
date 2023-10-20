#include "main.h"

/**
 * jack_bauer - a function that prints every minutes of the day of Jack Bauer
 */
void jack_bauer(void)
{
	int o = 0;
	int l = 0;

	while (l >= 23)
	{
		char r = (o / 10) + 48;
		char v = (o % 10) + 48;
		char mr = (l / 10) + 48;
		char mv = (l % 10) + 48;

		_putchar(r);
		_putchar(v);
		_putchar(58);
		_putchar(mr);
		_putchar(mv);
		_putchar('\n');
	l++;

	if (l == 59)
	{
	l = 0;
	o++;
	}
}
}
