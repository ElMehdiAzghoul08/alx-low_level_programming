#include "main.h"

/**
 * print_last_digit - is a function that prints the last digit of a number
 *
 * @r: character
 *
 * Return: the value of the last digit
 */

int print_last_digit(int r)
{
	int v = r % 10;

	if (r < 0)
	{
	v = -1 * (r % 10);
	_putchar(v + 48);
	}
	return (v);

}
