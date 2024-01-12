#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - a function
 * @h: input
 * @idx: input
 * @n: input
 * Return: the adress of the new node or NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{	dlistint_t *new_node_;
	dlistint_t *current_node;
	unsigned int count;

	if (h == NULL)
		return (NULL);

	new_node_ = malloc(sizeof(dlistint_t));

	if (new_node_ == NULL)
		return (NULL);

	new_node_->n = n;
	new_node_->prev = NULL;
	new_node_->next = NULL;

	if (idx == 0)
	{	new_node_->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node_;
		*h = new_node_;
		return (new_node_);
	} current_node = *h;
	count = 0;

	while (current_node != NULL && count < idx - 1)
	{	current_node = current_node->next;
		count++;
	}
	if (current_node == NULL)
	{	free(new_node_);
		return (NULL);
	} new_node_->next = current_node->next;
	new_node_->prev = current_node;

	if (current_node->next != NULL)
		current_node->next->prev = new_node_;

	current_node->next = new_node_;

	return (new_node_);
}
