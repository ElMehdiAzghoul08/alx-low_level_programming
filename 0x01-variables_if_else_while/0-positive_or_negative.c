<<<<<<< HEAD
#include <stdlib.h>
=======
#include < stdlib.h >
>>>>>>> 2781374edca4cde426db90528aafdfaadbbbfe10
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Description: positive or negative
 *
<<<<<<< HEAD
 * Return: 0 (success)
=======
 * Return : 0 (success)
>>>>>>> 2781374edca4cde426db90528aafdfaadbbbfe10
*/

int main(void)
{
<<<<<<< HEAD
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
			printf("%d is positive\n", n);
		else if (n == 0)
			printf("%d is zero\n", n);
		else
			printf("%d is negative\n", n);

		return (0);
=======
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n");
	else if (n == 0)
		printf("%d is zero\n");
	else
		printf("%d is negative\n");
	return (0);
>>>>>>> 2781374edca4cde426db90528aafdfaadbbbfe10
}
