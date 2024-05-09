#include <stdio.h>

int the_binary_sr_(int *array, int lw, int ht, int value);

/**
 * advanced_binary - a function
 * @array: input
 * @size: input
 * @value: input
 * Return: value
 */
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
return (-1);

return (the_binary_sr_(array, 0, size - 1, value));
}

/**
 * the_binary_sr_ - a function
 * @array: input
 * @lw: input
 * @value: input
 * @ht: input
 * Return: value
 */
int the_binary_sr_(int *array, int lw, int ht, int value)
{
int ctr;
int a;
if (lw > ht)
return (-1);

ctr = (lw + ht) / 2;

printf("Searching in array: ");
for (a = lw; a <= ht; a++)
{
printf("%d", array[a]);
if (a != ht)
printf(", ");
}
printf("\n");

if (array[ctr] == value)
{
if (ctr == lw || array[ctr - 1] != value)
return (ctr);
else
return (the_binary_sr_(array, lw, ctr, value));
}
else if (array[ctr] < value)
return (the_binary_sr_(array, ctr + 1, ht, value));
else
return (the_binary_sr_(array, lw, ctr - 1, value));
}

