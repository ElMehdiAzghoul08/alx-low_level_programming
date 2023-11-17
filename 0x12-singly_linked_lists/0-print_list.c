#include <stdio.h>
#include "lists.h"

/**
 * print_list - a function that prints all the elemts of a list_t list
 * @h: input
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t tot = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		tot++;
	}

	return (tot);
}
