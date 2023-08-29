#include "lists.h"

/**
 * print_listint - Print all the elementsst
 * @h:  pointer of struct
 * Return:  str j
 */
size_t print_listint(const listint_t *h)
{
	unsigned int j = 0;
	const listint_t	 *new_node = h;

	for (; new_node; new_node = new_node->next)
	{
		printf("%d\n", new_node->n);
		j++;
	}
	return (j);
}
