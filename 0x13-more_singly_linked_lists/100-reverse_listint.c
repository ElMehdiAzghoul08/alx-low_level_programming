#include "lists.h"

/**
 * reverse_listint - a function that reverse a linked list
 * @head: input
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL, *present = *head, *following = NULL;

	while (present != NULL)
	{
		following = present->next;
		present->next = old;
		old = present;
		present = following;
	}

	*head = old;

	return (*head);
}
