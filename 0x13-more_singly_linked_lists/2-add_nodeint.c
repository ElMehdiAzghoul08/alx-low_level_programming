#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: input
 * @n: input
 * Return: the adress of the new element or NULL if failed
 */
Node *add_nodeint(Node **head, const int n)
{
	Node *_new_node = (Node *)malloc(sizeof(Node));

	if (_new_node == NULL)
	{
		return (NULL);
	}

	_new_node->n = n;
	_new_node->next = *head;
	*head = _new_node;

	return (_new_node);
}
