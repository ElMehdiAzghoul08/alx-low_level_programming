#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char new[] = "_putchar";

	for (int pt = 0 ; pt < 8 ; pt++)
	{
	putchar(new[pt]);
	}
	putchar('\n');
	return (0);
}

