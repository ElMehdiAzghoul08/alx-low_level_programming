#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 * @head: input
 */

void free_listint2(listint_t **head)
{
	listint_t *present;

	while (*head != NULL)
	{
		present = *head;
		*head = (*head)->next;
		free(present);
	}

	*head = NULL;
}
