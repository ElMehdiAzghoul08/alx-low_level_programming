#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - a function
 * @h: input
 * Return : number of elemets
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	size_t counter_node = 0;

	while (current_node != NULL)
	{
		current_node = current->next;
		counter_node++;
	}

	return (counter_node);
}
