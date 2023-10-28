#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 *
 * @argc: input
 * @argv: input
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	for (int y = 0; y < argc; y++)
	{
		printf("%d\n", argv[y]);
	}
	return (0);
}
