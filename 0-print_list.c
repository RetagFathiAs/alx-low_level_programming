#include "lists.h"

/**
 * print_list - Print ments o_t list
 * @h: data type poitruct
 * Return: ele the str i
 */

size_t print_list(const list_t *h)
{
	size_t j;
	const list_t *counter;

	j = 0;
	counter = h;
	while (counter != NULL)
	{
		if (counter->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
			counter = counter->next;
			j++;
		}
		else
		{
			printf("[%d] %s\n", counter->len, counter->str);
			counter = counter->next;
			j++;
		}
	}
	return (j);
}
