#include "lists.h"

/**
 * free_dlistint - free a dlistint list
 * @head: type pointer
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *bowl;

	while (head)
	{
		bowl = head->next;
		free(head);
		head = bowl;
	}
}
