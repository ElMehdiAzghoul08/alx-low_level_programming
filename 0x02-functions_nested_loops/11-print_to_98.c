#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - is a function that prints all natural numbers from n to 98
 *
 * @n: integer
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		rtt = n;
		do

		{
			printf("%d, ", rtt);
			rtt--;
		} while (rtt < 98);
	} else
	{
		rtt = n;
		do

		{
			printf("%d, ", rtt);
			rtt++;
		} while (rtt < 98);
	}
	printf("98\n")
}
