#include <stdio.h>

/**
 * __print_first - a function
 * @constructor: input
 * Return: void
 */

void __attribute__((constructor))__print_first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
