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
	int dhs[] = {25, 10, 5, 2, 1};
	int dirhams = sizeof(dhs) / sizeof(dhs[0]);
	int k = 0;
	int x;

	if (c < 0)
	{
		printf("0\n");
		return;
	}

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
/**
 * main - function
 *
 * @argc: input
 * @argv: input
 *
 * Return: 0
 */

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
