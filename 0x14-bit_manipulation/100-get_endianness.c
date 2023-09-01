#include "main.h"

/**
 * get_endianness - sets the valuea given index
 * Return: 1 if littleendian
 */
int get_endianness(void)
{
	unsigned int counter = 1;
	char *j = (char *)&counter;

	if (*j)
		return (1);
	return (0);
}
