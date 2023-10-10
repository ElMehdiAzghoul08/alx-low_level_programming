#include < stdlib.h >
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: positive or negative
 *
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n % 10 = digit;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n);
	else if (n == 0)
		printf("Lat digit of%d is %d and is 0\n", n);
	else if (n < 6)
		printf("Last digit of%d is %d and is less than 6 and not 0\n", n);
	return (0);
}
