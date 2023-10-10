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
	char ch = 122;

	while (ch >= 97)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
