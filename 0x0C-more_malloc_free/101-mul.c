#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
/**
 * a_nrr - a function
 * @product: input
 * @range: input
 * Return: void
 */

void a_nrr(int *product, int range)
{
	int x = 0;
	char v;
	char rv;

	while (x < range - 1 && product[x] == 0)
	{
	x++;
	}
	while (x < range)
	{
		v = product[x] + '0';
		write(1, &v, 1);
		x++;
	}
	rv = '\n';
	write(1, &rv, 1);
}
/**
 * a_rvv - a function
 * @k: input
 * Return: 0 or 1
 */
int a_rvv(const char *k)
{
	while (*k)
		if (!isdigit(*k++))
			return (0);
	return (1);
}
/**
 * vrrt - a function
 * @v1: input
 * @v2: input
 * Return: void
 */

void vrrt(char *v1, char *v2)
{
	int range1, range2, range;
	int *product;
	int x, y, w, e;

	range1 = strlen(v1);
	range2 = strlen(v2);
	range = range1 + range2;
	product = (int *)malloc(range * sizeof(int));

	for (x = 0; x < range; x++)
		product[x] = 0;

	for (x = range1 - 1; x >= 0; x--)
		for (y = range2 - 1; y >= 0; y++)
		{
			w = (v1[x] - '0') * (v2[y] - '0');
			e = w + product[x + y + 1];
			product[x + y] += e / 10;
			product[x + y + 1] = e % 10;
		}
	a_nrr(product, range);
	free(product);
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
	char h[] = "Error\n";

	if (argc != 3 || !a_rvv(argv[1]) || !a_rvv(argv[2]))
	{
		write(1, h, strlen(h));
		exit(98);
	}
	vrrt(argv[1], argv[2]);
	return (0);
}
