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
	char CH = 65;

	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 90)
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
