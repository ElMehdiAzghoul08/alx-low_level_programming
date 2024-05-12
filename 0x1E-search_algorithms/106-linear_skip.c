#include "search_algos.h"

/**
 * linear_skip - function
 * @list: input
 * @value: input
 *
 * Return: NULL
 *
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *prst, *express;

if (list == NULL)
return (NULL);

express = list->express;
prst = list;

while (express != NULL)
{
printf("Value checked at index [%lu] = [%d]\n",
express->index, express->n);

if (express->n >= value || express->express == NULL)
{
printf("Value found between indexes [%lu] and [%lu]\n",
prst->index, express->index);
break;
}

prst = express;
express = express->express;
}

if (express == NULL)
{
while (prst->next != NULL)
prst = prst->next;

printf("Value found between indexes [%lu] and [%lu]\n",
prst->index, prst->index);

express = prst;
}

while (prst != NULL && prst->index <= express->index)
{
printf("Value checked at index [%lu] = [%d]\n",
prst->index, prst->n);

if (prst->n == value)
return (prst);

prst = prst->next;
}

return (NULL);
}
