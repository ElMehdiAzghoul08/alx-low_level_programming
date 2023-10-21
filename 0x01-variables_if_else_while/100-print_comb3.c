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
	int c, r, w;

		for (c = 0; c < 99; c++)
		{
			r = (c / 10);
			w = (c % 10);

			if (w > r)
			{
				putchar(r + 48);
				putchar(w + 48);
				if (c != 89)
				{
				putchar(44);
				putchar(32);

				}
			}
		}
		putchar('\n');
	return (0);
}
