#include <stdio.h>

/**
 * main - entry point
 *
 * Description : numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	int r;

	for (r = 0; r <= 9; r++)
	{
		putchar(r + 48);
	}
	putchar('\n');
	return (0);
}
