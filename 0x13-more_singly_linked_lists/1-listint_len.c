#include "lists.h"

/**
 * listint_len - Return the elements
 * @h: pointer of struct
 * Return: elements of the str counter
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
		count++;
	}
	return (count);
}
