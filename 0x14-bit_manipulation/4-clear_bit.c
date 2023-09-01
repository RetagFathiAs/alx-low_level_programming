#include "main.h"

/**
 * clear_bit - sets the va1 at a given index
 * @n: type unsiinput pointer
 * @index: type unn of unit
 * Return: 1 if w not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	*n &= ~(m);
	return (1);
}
