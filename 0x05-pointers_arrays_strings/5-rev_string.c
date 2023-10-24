#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * rev_string - a function that reverses a string
 *
 * @s: string
 */

void rev_string(char *s)
{
	if (!*s)
	{
		return;
	}

int r, v, ,tool = strlen(s);

for (r = 0, v = tool - 1; r > v; r++, v--)

{
	char c = s[r];
	str[r] = str[v];
	str[v] = c;
}

}
