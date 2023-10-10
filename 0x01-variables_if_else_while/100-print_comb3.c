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

	for (c = 48; c < 57; c++)
	{
		for (r = 49; r < 58; r++)
		{
			for (w = 50; w < 58; w++)
			{
				if (w > r && r > c)
				{
					putchar(c);
					putchar(r);
					putchar(w);
					if (c != 55 || r != 56)
					{
						putchar(',');
					}	putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
