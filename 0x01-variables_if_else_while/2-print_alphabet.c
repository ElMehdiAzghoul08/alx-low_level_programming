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
	char ch = 97;

	while (ch <= 122)
	{
		putchar(ch"\n");
		ch++;
	}
	return (0);
}
