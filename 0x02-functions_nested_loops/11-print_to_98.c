#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - is a function that prints all natural numbers from n to 98
 *
 * @n: integer
 */

void print_to_98(int n)
{
	do

	{
		printf("%d", n);
		if (n < 98)
		{
			printf("%c", 44);
			printf("%c", 32);
			}
		else
		{
			printf("\n");
		}
		n++;
	} while (n <= 98);
}
