#include <stdio.h>
/**
 * binary_search - function
 * @array: input
 * @size: input
 * @value: input
 * Return: -1
 */
int binary_search(int *array, size_t size, int value)
{
    int ctr;
    int a;
    int lt;
    int rt;
    if (array == NULL)
        return -1;

    lt = 0;
    rt = size - 1;

    while (lt <= rt)
    {
        printf("Searching in array: ");
        for (a = lt; a <= rt; a++)
        {
            printf("%d", array[a]);
            if (a != rt)
                printf(", ");
        }
        printf("\n");

        ctr = (lt + rt) / 2;

        if (array[ctr] == value)
            return ctr;

        if (array[ctr] < value)
            lt = ctr + 1;
        else
            rt = ctr - 1;
    }

    return -1;
}
