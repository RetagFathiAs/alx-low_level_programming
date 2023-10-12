#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: type dpointer of next and prev node
 * @index: type unisgned int index of node
 * Return: 1 if success or -1 if node NULL
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *bowl = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (bowl == NULL)
			return (-1);
		bowl = bowl->next;
	}
	if (bowl == *head)
	{
		*head = bowl->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		bowl->prev->next = bowl->next;
		if (bowl->next != NULL)
			bowl->next->prev = bowl->prev;
	}
	free(bowl);
	return (1);
}
