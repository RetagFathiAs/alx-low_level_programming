#include "main.h"

/**
 * set_bit - sets theo 1 at a given index
 * @n: type unsignointer
 * @index: type uon of unit
 * Return: 1 if wo not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
