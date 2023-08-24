#include "lists.h"

/**
 * free_list - Free aist
 * @head: Type pointelist_t
 * Return: fre
 */
void free_list(list_t *head)
{
	list_t *n;

	n = head;
	while (head != NULL)
	{
		n = head;
		head = head->next;
		free(n->str);
		free(n);
	}
	free(head);
}
