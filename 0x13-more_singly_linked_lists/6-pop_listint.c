#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: input
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	int r = 0;

	if (*head != NULL)
	{
		listint_t *prov = *head;

		r = prov->n;
		*head = (*head)->next;
		free(prov);
	}

	return (r);
}
