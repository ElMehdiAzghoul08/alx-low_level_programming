#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: input
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *present;

	while (head != NULL)
	{
		present = head;
		head = head->next;
		free(present);
	}
}
