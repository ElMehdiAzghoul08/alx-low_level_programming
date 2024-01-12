#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - a function
 * @head: input
 * @n: input
 * Return: new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node_;

	if (head == NULL)
		return (NULL);

	new_node_ = malloc(sizeof(dlistint_t));
	if (new_node_ == NULL)
		return (NULL);

	new_node_->n = n;
	new_node_->prev = NULL;
	new_node_->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node_;

	*head = new_node_;

	return (new_node_);
}
