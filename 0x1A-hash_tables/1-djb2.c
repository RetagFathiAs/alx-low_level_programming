#include "hash_tables.h"

/**
 * hash_djb2 - function
 * @str: Type pointer
 * Return: Hash
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int conter;

	hash = 5381;
	while ((conter = *str++))
	{
		hash = ((hash << 5) + hash) + conter;
	}
	return (hash);
}
