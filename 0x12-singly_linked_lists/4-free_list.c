#include <stdlib.h>
#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: input
 * Return: void
 */

void free_list(list_t *head)
{
	while (head)
	{
		list_t *present = head;

		head = head->next;

		free(present->str);

		free(present);

	}
}
