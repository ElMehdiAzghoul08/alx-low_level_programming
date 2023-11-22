#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * @head: input
 * @index: input
 * Return: 0 or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int tot = 0;

	while (head != NULL)
	{
		if (tot == index)
		{
			return (head);
		}
		head = head->next;
		tot++;
	}

	return (NULL);
}
