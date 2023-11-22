#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns the number of elemets in a linked list
 * @h: input
 * Return: number of elemets in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t number_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		number_elements++;

	}

	return (number_elements);
}
