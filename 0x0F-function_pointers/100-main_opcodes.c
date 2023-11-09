#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pr_the_op - a function that prints the opcodes of its own main fucntion
 * @y: input
 * Return: void
 */

void pr_the_op(int y)
{
	char *rv
		int x;
	rv = (char *)&main;

	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < y; x++)
	{
		printf("%02x", (unsigned char)rv[x]);

		if (x != y - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - a function
 * @argc: input
 * @argv: input
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int  y;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	y = atoi(argv[1]);

	pr_the_op(y);

	return (0);
}
