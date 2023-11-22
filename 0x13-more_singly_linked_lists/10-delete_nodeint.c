#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * @head: input
 * @index: input
 * Return: 1 of if it successed, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prov, *old;
	unsigned int tot;

	if (*head == NULL)
	{
		return (-1);
	}

	prov = NULL;
	old = NULL;
	tot = 0;

	prov = *head;

	if (index == 0)
	{
		*head = prov->next;
		free(prov);
		return (1);
	}

	while (prov != NULL && tot < index)
	{
		old = prov;
		prov = prov->next;
		tot++;
	}

	if (prov == NULL)
	{
		return (-1);
	}

	old->next = prov->next;
	free(prov);

	return (1);
}
