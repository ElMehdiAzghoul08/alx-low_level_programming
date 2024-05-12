#include <stdio.h>

/**
 * exponential_search - a function
 * @array: input
 * @lw: input
 * @ht: input
 * @value: input
 * Return: value
 */
int the_binary_sr_(int *array, int lw, int ht, int value);

int exponential_search(int *array, size_t size, int value)
{
int a;
int ht;
int lw;

if (array == NULL || size == 0)
return (-1);

if (array[0] == value)
return (0);

a = 1;
while (a < (int)size && array[a] <= value)
{
printf("Value checked array[%d] = [%d]\n", a, array[a]);
a *= 2;
}

ht = (a < (int)size) ? a : (int)(size - 1);
lw = a / 2;

printf("Value found between indexes [%d] and [%d]\n", lw, ht);

return (the_binary_sr_(array, lw, ht, value));
}

/**
 * the_binary_sr_ - a function
 * @array: input
 * @lw: input
 * @ht: input
 * @value: input
 * Return: -1
 */
int the_binary_sr_(int *array, int lw, int ht, int value)
{
int ctr;
int a;
while (lw <= ht)
{
ctr = lw + (ht - lw) / 2;
printf("Searching in array: ");
for (a = lw; a <= ht; a++)
{
printf("%d", array[a]);
if (a != ht)
printf(", ");
}
printf("\n");

if (array[ctr] == value)
return (ctr);
else if (array[ctr] < value)
lw = ctr + 1;
else
ht = ctr - 1;
}

return (-1);
}

