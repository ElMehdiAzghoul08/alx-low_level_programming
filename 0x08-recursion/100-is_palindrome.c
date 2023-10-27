#include "main.h"
#include "string.h"
/**
 * is_palin - a function that returns 1 if a string is palindrome and 0 if not.
 *
 * @s: input
 * @r: input
 * @c: input
 *
 * Return: 1 otherwise 0
 */

int is_palin(char *s, int r, int c)
{
	if (r >= c)
	{
	return (1);
	}

	if (s[r] != s[c])
	{
	return (0);
	}

	return (is_palin(s, r + 1, c - 1));
}
/**
 * is_palindrome - is a function that retrns 1 if a string is a polindrome
 *
 * @s: input
 *
 * Return: 1 otherwise 0
 */

int is_palindrome(char *s)
{
	int t = strlen(s);

	if (t == 0)
	{
		return (1);
	}

	return (is_palin(s, 0, t - 1));
}
