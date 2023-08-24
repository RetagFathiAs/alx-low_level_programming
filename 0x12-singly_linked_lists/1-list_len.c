#include "lists.h"

/**
 * list_len - Return thes in a linked list
 * @h: d struct
 * Return: elementstr i
 */
size_t list_len(const list_t *h)
{
	const list_t *p;
	size_t n = 0;

	p = h;
	while (p != NULL)
	{
		p = p->next;
		n++;
	}
	return (n);
}
