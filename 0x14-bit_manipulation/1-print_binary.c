#include <stdio.h>
#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: input
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit;
	int track;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	bit = 1UL << (sizeof(unsigned long int) * 8 - 1);

	track = 1;

	while (bit > 0)
	{
		if ((n & bit) != 0)
		{
			track = 0;
			_putchar('1');
		}
		else
		{
			if (!track)
			{
				_putchar('0');
			}
		}
		bit >>= 1;
	}
}
