#include "lists.h"

/**
 * _ra - reallocates memorynters
 * to the nodes st
 * @list: the ond
 * @size: size o han the old list)
 * @new: new nodelist
 *
 * Return: point w list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
 * free_listint_safe - frees
 * @head: double pointer to the
 * Return: the nu the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t j, counter = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (counter);
	while (*head != NULL)
	{
		for (j = 0; j < counter; j++)
		{
			if (*head == list[j])
			{
				*head = NULL;
				free(list);
				return (counter);
			}
		}
		counter++;
		list = _ra(list, counter, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (counter);
}
