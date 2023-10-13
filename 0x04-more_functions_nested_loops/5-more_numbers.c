#include "main.h"

/**
 * more_numbers - a  function that prints numbers from 0 - 14 ten times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int p, t;

	for (p = 0; p < 14; p++)
	{

	for (t = 0; t <= 10; t++)
	{
	if (t > 9)
	_putchar('0' + t / 10);

	_putchar('0' + t % 10);

	}
	_putchar('\n');
}
