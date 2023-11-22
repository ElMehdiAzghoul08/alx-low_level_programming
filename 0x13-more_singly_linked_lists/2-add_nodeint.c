#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: input
 * @n: input
 * Return: the adress of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_new_node = (listint_t *)malloc(sizeof(listint_t));

	if (_new_node == NULL)
	{
		return (NULL);
	}

	_new_node->n = n;
	_new_node->next = *head;
	*head = _new_node;

	return (_new_node);
}
