#include "lists.h"

/**
 * dlistint_len - return the number of elements in dlistint
 * @h: type dlistint pointer of nodes
 * Return: n_nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h)
{
h = h->next;
count++;
}
return (count);
}
