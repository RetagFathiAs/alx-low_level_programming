#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of linked list.
 * @head: data type pointer
 * @index: data type
 * Return: head node data
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp_node = head;
	unsigned int ticks;

	for (ticks = 0; tmp_node && ticks < index; ticks++)
	{
		tmp_node = tmp_node->next;
	}
	return (tmp_node);
}
