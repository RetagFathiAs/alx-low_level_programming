#include "lists.h"

/**
 * sum_listint - return the sum of listint.
 * @head: data type
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp_node;
	int sum = 0;

	if (!head)
		return (0);

	tmp_node = head;
	while (tmp_node)
	{
		sum += tmp_node->n;
		tmp_node = tmp_node->next;
	}
	return (sum);
}
