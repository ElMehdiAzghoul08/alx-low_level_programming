#include <stdio.h>
#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list
 * @h: input
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number_elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_elements++;

	}

	return (number_elements);
}
