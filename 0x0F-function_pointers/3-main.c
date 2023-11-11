#include "3-calc.h"

/**
 * main - function
 * @argc: input
 * @argv: input
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r1;
	int r2;
	char *a;
	int (*rv_)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	r1 = atoi(argv[1]);
	r2 = atoi(argv[3]);
	a = argv[2];

	rv_ = get_op_func(a);

	if (rv_ == NULL)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", rv_(r1, r2));

	return (0);
}
