#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list
 * @head: input
 * @str: input
 * Return: the address of the new element, or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return (NULL);

	list_t *recent_node = malloc(sizeof(list_t));

	if (recent_node == NULL)
		return (NULL);

	recent_node->str = strdup(str);

	if (recent_node->str == NULL)
	{
		free(recent_node);
		return (NULL);
	}

	recent_node->len = strlen(str);
	recent_node->next = *head;
	*head = recent_node;

	return (recent_node);
}
