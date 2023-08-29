#include "lists.h"

/**
 * listint_len - Return the elements
 * @h: pointer of struct
 * Return: elements of the str counter
 */
size_t listint_len(const listint_t *h)
{
	unsigned int counter = 0;
	const listint_t	 *new_node = h;

	for (; new_node; new_node = new_node->next)
		counter++;
		return (counter);
}
