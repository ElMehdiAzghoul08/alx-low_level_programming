#include <math.h>
#include "search_algos.h"

/**
 * jump_list - function
 * @list: input
 * @size: input
 * @value: input
 *
 * Return: Pointer or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t mv = sqrt(size), past_ = 0;
    listint_t *prst = list;
    size_t a;

    if (list == NULL)
        return NULL;

    while (prst && prst->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prst->index, prst->n);
        past_ = prst->index;
        for (a = 0; prst->next && a < mv; a++)
            prst = prst->next;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", past_, prst->index);
    printf("Value checked at index [%lu] = [%d]\n", past_, ((listint_t *)list)->n);

    while (list && list->index < past_)
        list = list->next;

    while (list && list->index <= prst->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
        if (list->n == value)
            return list;
        list = list->next;
    }

    return NULL;
}
