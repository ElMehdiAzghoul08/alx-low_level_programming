#include "main.h"

/**
 * more_numbers - a  function that prints numbers from 0 - 14 ten times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int p, t;

	for (p = 0; p < 10; p++)
	{
	for (t = 0; t <= 14; t++)
	{
	if (t > 9)
	{
	_putchar((t / 10) + '0');
	}
	_putchar((t % 10) + '0');
	}
	_putchar('\n');
}
