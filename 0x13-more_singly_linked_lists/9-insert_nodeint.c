#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * @head: input
 * @idx: input
 * @n: input
 * Return: the adress of the new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *_new_node = malloc(sizeof(listint_t));
	unsigned int tot = 0;
	listint_t *prov = *head;

	if (_new_node == NULL)
	{
		return (NULL);
	}

	_new_node->n = n;

	if (idx == 0)
	{
		_new_node->next = *head;
		*head = _new_node;
		return (_new_node);
	}

	while (prov != NULL && tot < idx - 1)
	{
		prov = prov->next;
		tot++;
	}

	if (prov == NULL)
	{
		free(_new_node);
		return (NULL);
	}

	_new_node->next = prov->next;
	prov->next = _new_node;

	return (_new_node);
}
