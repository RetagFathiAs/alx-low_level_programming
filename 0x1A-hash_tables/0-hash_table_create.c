#include "hash_tables.h"

/**
 * hash_table_create - function
 * @size: the array
 * Return: Null for error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hy;
	unsigned long int i;

	hy = malloc(sizeof(hash_table_t));
	if (hy == NULL)
		return (NULL);

	hy->size = size;
	hy->array = malloc(sizeof(hash_node_t *) * size);
	if (hy->array == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
	{
		hy->array[i] = NULL;
	}
	return (hy);
}
