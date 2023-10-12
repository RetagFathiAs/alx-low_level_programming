#include "lists.h"

/**
 * sum_dlistint - return the sum
 * @head: type pointer
 * Return: Return the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sums = 0;

	while (head)
	{
		sums = sums + head->n;
		head = head->next;
	}
	return (sums);
}
