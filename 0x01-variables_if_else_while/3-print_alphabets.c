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
	char ch = 65;

	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	while (ch <= 90)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
