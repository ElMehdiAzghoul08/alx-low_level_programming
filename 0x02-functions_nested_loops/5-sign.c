#unclude "main.h"

/**
 * print_sign - is a function that prints the sign of a number
 *
 * @n: is the character
 *
 * Retuns: 1 if n is greter than zero and 0 if n is zero
 * and -1 if n is less than zero
 */

int print_sign(int n);
{

	int n;

	if (n > 0)
	{
	_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
	return (0);
	}
	if (n < 0)
	{
		_putchar('-');
	return (-1);
	}
}
