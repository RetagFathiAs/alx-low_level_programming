#include "main.h"

/**
 * binary_to_uint - converts a binarynsigned int
 * @b: type const chbit
 * Return: converted number, or 0 if o that is not 0/1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int v = 0;
	
if (!b)
return (0);
while(*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		v = v * 2 + (*b++ - '0');
	}
return (v);
}
