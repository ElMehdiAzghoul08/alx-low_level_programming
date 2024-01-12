#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a function
 * argc: input
 * argv: input
 * Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{ char gen_password[7], *to_str;
	int len = strlen(argv[1]), i, tmp;

	to_str = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	gen_password[0] = to_str[tmp];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += argv[1][i];
	gen_password[1] = to_str[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < len; i++)
		tmp *= argv[1][i];
	gen_password[2] = to_str[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
	{ if (argv[1][i] > tmp)
		tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	gen_password[3] = to_str[rand() & 63];

	tmp = 0;
	for (i = 0; i < len; i++)
		tmp += (argv[1][i] * argv[1][i]);
	gen_password[4] = to_str[(tmp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	gen_password[5] = to_str[(tmp ^ 229) & 63];

	gen_password[6] = '\0';

	printf("%s", gen_password);

	return (0);
}
