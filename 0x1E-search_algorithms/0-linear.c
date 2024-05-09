#include <stdio.h>
/**
 * linear_search - function
 * @array: input
 * @size: input
 * @value: input
 * Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
size_t a;

if (array == NULL)
return (-1);
for (a = 0; a < size; a++)
{
printf("Value checked array[%lu] = [%d]\n", a, array[a]);
if (array[a] == value)
return (a);
}

return (-1);
}
