#include "lists.h"

/**
 * free_listint - Free listint_t.
 * @head: pointer the head/next node
 * Return: 0 elements all free
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
