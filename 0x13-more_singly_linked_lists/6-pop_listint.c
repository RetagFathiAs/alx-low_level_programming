#include "lists.h"

/**
 * pop_listint - Deletes the head
 * @head: data
 * Return: data n
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	unsigned int rn_value = 0;

	if (*head == NULL)
		return (0);
	node = *head;
	rn_value = node->n;
	*head = node->next;
	free(node);
	return (rn_value);
}
