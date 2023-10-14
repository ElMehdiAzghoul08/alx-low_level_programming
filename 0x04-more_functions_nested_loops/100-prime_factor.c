#include <stdio.h>
#include <math.h>
/**
 * main - a function that prints the largest factor of numbers 612852475143
 * Return: 0
 */
int main(void)

{
	long r, x;
	double square = sqrt(number);
	long number = 612852475143;

	for (r = 1; r <= square; r++)
	{
	if (number % r == 0)
	{
	x = number / r;
	}
	}
	printf("%ld\n", x);
	return (0);
}
