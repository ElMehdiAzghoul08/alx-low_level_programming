#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers.
 *
 * @argc: input
 * @argv: input
 *
 * Return: 1 if it doesnt receive two arguments
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	{
		int a, b;

		a = atoi(argv[1]);

		b = atoi(argv[2]);

		printf("%d\n", a * b);

	}
		return (0);
}
