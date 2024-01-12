#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - a function
 * @head: input
 * @index: input
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_counter = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL && node_counter < index)
	{
		current_node = current_node->next;
		node_counter++;
	}

	return ((node_counter == index) ? current_node : NULL);
}
