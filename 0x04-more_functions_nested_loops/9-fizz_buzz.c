#include "main.h"
#include <stdio.h>

/**
 * main - a function that print numbers from 1-100
 *
 * Return: 0
 *
*/

int main(void)
{
	int r;

	for (r = 1; r <= 100; r++)
	{
	if (r % 3 == 0 && !(r % 5 == 0))
	printf("Fizz");
	else if (r % 5 == 0 && !(r % 3 == 0))
	printf("Buzz");
	else if (r % 3 == 0 && r % 5 == 0)
	printf("FizzBuzz");
	else
		printf("%d", r);
	if (r != 100)
		printf(" ");
	else
		printf("\n");
	}

	return (0);
}
