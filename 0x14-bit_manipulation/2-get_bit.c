#include "main.h"

/**
 * get_bit - return the value on index
 * @n: type unsignput
 * @index: type unsion of unit
 * Return: the value r -1 if occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
