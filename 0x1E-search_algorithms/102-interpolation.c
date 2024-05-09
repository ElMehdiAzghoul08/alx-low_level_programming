#include <stdio.h>

/**
 * interpolation_search - a function
 * @array: input
 * @size: input
 * @value: input
 * Return: -1
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t lw;
size_t ht;
size_t pos;

if (array == NULL || size == 0)
return (-1);

lw = 0;
ht = size - 1;

while (lw <= ht && value >= array[lw] && value <= array[ht])
{
pos = lw + (((double)(ht - lw) / (array[ht] - array[lw])) *
		(value - array[lw]));
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

if (array[pos] == value)
return (pos);
else if (array[pos] < value)
lw = pos + 1;
else
ht = pos - 1;
}

printf("Value checked array[%lu] is out of range\n", lw);
return (-1);
}

