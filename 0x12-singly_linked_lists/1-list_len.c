#include <stddef.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: input
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t tot = 0;

	while (h != NULL)
	{
		tot++;
		h = h->next;
	}

	return (tot);
}
