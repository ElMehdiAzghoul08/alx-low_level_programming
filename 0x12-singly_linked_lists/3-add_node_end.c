#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * make_node - a function
 * @str: input
 * Return: recent_node
 */

list_t *make_node(const char *str)
{
	list_t *recent_node = malloc(sizeof(list_t));

	if (!recent_node)
	{
		perror("malloc failed");
		exit(EXIT);
	}

	recent_node->str = strdup(str);
	if (!recent_node->str)
	{
		perror("strdup failed");
		free(recent_node);
		exit(EXIT);
	}

	recent_node->len = strlen(str);
	recent_node->next = NULL;

	return (recent_node);
}
/**
 * add_node_end - a function that adds a new node at the end of a list
 * @head: input
 * @str: input
 * Return: the adress of the new element, or null if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *recent_node = make_node(str);
	list_t *present;

	if (*head == NULL)
		*head = recent_node;
	else
	{
		present = *head;
		while (present->next)
			present = present->next;
		present->next = recent_node;
	}

	return (recent_node);
}
/**
 * just__print - a function
 * @head: input
 * Return: void
 */
void just__print(const list_t *head)
{
	const list_t *present = head;

	while (present)
	{
		printf("[%u] %s\n", present->len, present->str);
		present = present->next;
	}
}
/**
 * just__free - a function
 * @head: input
 * Return: void
 */
void just__free(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
