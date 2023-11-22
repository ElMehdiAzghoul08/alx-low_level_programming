#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 * @head: input
 */

void free_listint2(listint_t **head)
{
	listint_t *present;

	listint_t *following;

	if (!head || !*head)
		return;

	present = *head;

	while (present != NULL)
	{
		following = present->next;
		free(present);
		present = following;
	}

	*head = (NULL);
}
