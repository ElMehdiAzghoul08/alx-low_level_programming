#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - function that adds positive numbers
 *
 * @argv: input
 * @argc: input
 *
 * Return: 0 if no
 */

int main(int argc, char *argv[])
{

	int x, y, add;

	if (argc > 3)
	{
		if (argc == 1)
		{
		printf("0\n");

		return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	}
	add = 0;
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
		}
	}
	add += atoi(argv[x]);
	}
	printf("%d\n", add);

	return (0);
}
