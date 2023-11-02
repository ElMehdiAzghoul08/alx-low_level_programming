#include <stdio.h>
#include <stdlib.h>

/**
 * start_money - function that makes change for an amount of money
 *
 * @c: input
 *
 * return: 1
 */

void start_money(int c)
{
	int k;
	int dhs;
	int dirhams;
	int x;

	if (c < 0)
	{
		printf("0\n");
		return;
	}
	dhs[] = {25, 10, 5, 2, 1};
	dirhams = sizeof(coins) / sizeof(coins[0]);
	k = 0;

	for (x = 0; x < dirhams; x++)
	{
		while (c >= dhs[x])
		{
			c -= dhs[x];
			k++;
		}
	}
	printf("%d\n", k);
}
int main(int argc, char *argv[])
{
	int c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);
	start_money(c);

	return (0);
}
