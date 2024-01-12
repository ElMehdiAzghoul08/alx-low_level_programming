#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - a function
 * @head: input
 * Return: sum of data otherwise return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int data_sum = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		data_sum += current_node->n;
		current_node = current_node->next;
	}

	return (data_sum);
}
