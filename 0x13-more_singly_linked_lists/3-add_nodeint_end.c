#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the beginning of a list
 * @head: input
 * @n: input
 * Return: the adress of the new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *_new_node = malloc(sizeof(listint_t));

	if (_new_node == NULL)
	{
		return (NULL);
	}

	_new_node->n = n;
	_new_node->next = NULL;

	if (*head == NULL)
	{
	*head = _new_node;
	}
	else
	{
		listint_t *end_node = *head;

		while (end_node->next != NULL)
		{
		end_node = end_node->next;
		}
		end_node->next = _new_node;
	}

	return (_new_node);
}
