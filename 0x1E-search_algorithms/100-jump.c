#include <stdio.h>
#include <math.h>

/**
 * jump_search - function
 * @array: input
 * @size: input
 * @value: input
 * Return: -1
 */
int jump_search(int *array, size_t size, int value)
{
    int a;
    int mv;
    int past_;
    if (array == NULL || size == 0)
        return -1;

    mv = sqrt(size);
    past_ = 0;

    while (array[mv] < value && mv < (int)size)
    {
        printf("Value checked array[%d] = [%d]\n", past_, array[past_]);
        past_ = mv;
        mv += sqrt(size);
        if (mv > (int)size - 1)
            mv = size;
    }

    printf("Value found between indexes [%d] and [%d]\n", past_, mv);

    for (a = past_; a < mv; a++)
    {
        printf("Value checked array[%d] = [%d]\n", a, array[a]);
        if (array[a] == value)
            return a;
    }

    return -1;
}
