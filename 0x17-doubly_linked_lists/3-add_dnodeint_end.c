#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - a function
 * @head: input
 * @n: input
 * Return: the adress of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node_;
	dlistint_t *final_node;

	if (head == NULL)
		return (NULL);

	new_node_ = malloc(sizeof(dlistint_t));
	if (new_node_ == NULL)
		return (NULL);

	new_node_->n = n;
	new_node_->next = NULL;

	if (*head == NULL)
	{
		new_node_->prev = NULL;
		*head = new_node_;
	}
	else
	{
		final_node = *head;
		while (final_node->next != NULL)
			final_node = final_node->next;

		final_node->next = new_node_;
		new_node_->prev = final_node;
	}

	return (new_node_);
}
