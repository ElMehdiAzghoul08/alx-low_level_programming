#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a function
 * @h: input
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current_node = h;
	size_t counter_node = 0;

	while (current_node  != NULL)
	{
		printf("%d\n", current_node->n);
		current_node  = current_node->next;
		counter_node++;
	}

	return (counter_node);
}
