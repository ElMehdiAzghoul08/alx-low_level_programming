#include "lists.h"

/**
 * sum_listint - a function that returns the sum
 * @head: input
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int the_sum = 0;

	while (head != NULL)
	{
		the_sum += head->n;
		head = head->next;
	}

	return (the_sum);
}
