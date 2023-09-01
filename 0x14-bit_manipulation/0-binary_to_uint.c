#include "main.h"

/**
 * binary_to_uint - converts a binarynsigned int
 * @b: type const chbit
 * Return: converted number, or 0 if o that is not 0/1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int v = 0;
	unsigned int dec = 0;

	if (!b)
		return (0);
	for (v = 0; b[v] != '\0'; v++)
	{
		if (b[v] != '0' && b[v] != '1')
			return (0);
	}
	for (v = 0; b[v] != '\0'; v++)
	{
		dec <<= 1;
		if (b[v] == '1')
			dec += 1;
	}
	return (dec);
}
