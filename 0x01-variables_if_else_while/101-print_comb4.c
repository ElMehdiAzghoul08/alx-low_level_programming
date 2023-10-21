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
	int c, w, r, q;

		for (c = 0; c < 800; c++)
		{
			w = (c % 10);
			r = ((c / 10) / 10);
			q = (c / 100);


			if (w > r && r > q)
			{
				putchar(q + 48);
				putchar(r + 48);
				putchar(w + 48);
				if (c != 789)
				{
				putchar(44);
				putchar(32);

				}
			}
		}

	return (0);
}
