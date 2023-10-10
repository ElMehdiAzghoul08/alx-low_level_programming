#include <stdio.h>

/**
 * main - entry point
 *
 * Description : print combinations
 *
 * Return: 0 (success)
 */

int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
