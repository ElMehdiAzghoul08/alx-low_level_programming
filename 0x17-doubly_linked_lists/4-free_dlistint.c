#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - a function
 * @head: input
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
