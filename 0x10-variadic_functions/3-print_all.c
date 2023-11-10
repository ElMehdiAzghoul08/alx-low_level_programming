#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * pr_char - function that prints char
 * @c: input
 */
void pr_char(char c)
{
	printf("%c", c);
}
/**
 * pr_int - function that prints int
 * @i: input
 */
void pr_int(int i)
{
	printf("%d", i);
}
/**
 * pr_float - function that prints float
 * @f: input
 */

void pr_float(double f)
{
	printf("%f", f);
}
/**
 * pr_string - function that prints string
 * @s: input
 */
void pr_string(char *s)
{
	if (s == NULL)
	{
		printf("(nil)");
	} else
	{
		printf("%s", s);
	}
}

/**
 * print_all - function that prints anything
 * @format: input
 * Return. 0
 */

void print_all(const char * const format, ...)
{
	va_list rv;
	char *s;
	int i;
	double f;
	char c;
	const char *a;

	a = format;

	va_start(rv, format);

	while (*a)
	{
		switch (*a)
		{
			case 'c':
				c = va_arg(rv, int);
				pr_char(c);
				break;
			case 'i':
				i = va_arg(rv, int);
				pr_int(i);
				break;
			case 'f':
				f = (double)va_arg(rv, double);
				pr_float(f);
				break;
			case 's':
				s = va_arg(rv, char *);
				pr_string(s);
				break;
			case ' ':
			case ',':
				break;
					printf("%c", *a);
		}
		a++;
	}
	va_end(rv);
	printf("\n");
}
