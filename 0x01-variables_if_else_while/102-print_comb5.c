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
	int c, w, r, q, m;

		for (c = 0; c < 9900; c++)
		{
			w = (c % 10);
			r = ((c / 10) % 10);
			q = ((c / 100) % 10);
			m = (c / 1000);

			if (w > r || r > q)
			{
				putchar(m + 48);
				putchar(q + 48);
				putchar(32);
				putchar(r + 48);
				putchar(w + 48);
				if (c != 9899)
				{
				putchar(44);
				putchar(32);

				}
			}
		}
	putchar('\n');
	return (0);
}
