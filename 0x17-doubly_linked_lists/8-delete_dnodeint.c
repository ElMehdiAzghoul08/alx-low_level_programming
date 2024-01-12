#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - a function
 * @head: input
 * @index: input
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int node_counter = 0;
	dlistint_t *node_delete_;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	while (current_node != NULL && node_counter < index - 1)
	{
		current_node = current_node->next;
		node_counter++;
	}

	if (current_node == NULL || current_node->next == NULL)
		return (-1);

	node_delete_ = current_node->next;

	current_node->next = node_delete_->next;

	if (node_delete_->next != NULL)
		node_delete_->next->prev = current_node;

	free(node_delete_);
	return (1);
}
