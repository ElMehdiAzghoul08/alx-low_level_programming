#include <stdio.h>

/**
 * main - entry point
 *
 * Description : numbers of base 16
 *
 * Return: 0 (success)
 */

int main(void)
{
	int c;
	int a;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);

	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
