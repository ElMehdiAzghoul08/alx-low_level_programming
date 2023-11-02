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

	int x, y, add, v = 1;

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
	add = 0;
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
			v = 0;
			break;
		}
	}

	if (v)

	{
	add += atoi(argv[x]);
	}
		else

		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
