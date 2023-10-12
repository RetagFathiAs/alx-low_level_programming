#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: type dpointer of node
 * @n: type int struct list is number
 * Return: &address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n, *end_n;

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		new_n->prev = NULL;
		*head = new_n;
		return (new_n);
	}
	end_n = *head;
	while (end_n->next != NULL)
	{
		end_n = end_n->next;
	}
	end_n->next = new_n;
	new_n->prev = end_n;
	return (new_n);
}
