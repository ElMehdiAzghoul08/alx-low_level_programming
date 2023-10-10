#include <stdio.h>

/**
 * main - entry point
 *
 * Description : alphabet letters
 *
 * Return: 0 (success)
 */

int main(void)
{
	int digit = 48;

	while (digit <= 57)
	{
		putchar(digit);
		digit++;
	}
	putchar("\n");
	return (0);
}
