#include "main.h"

/**
 * flip_bits - Returns the nu to be flipped
 * @n: type unsignut pointer
 * @m: type unsigneon of unit
 * Return: flip bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int or;
	unsigned int flip_bit;

	or = n ^ m;
	flip_bit = 0;
	while (or > 0)
	{
		if ((or & 1) != 0)
			flip_bit++;
		or = or >> 1;
	}
	return (flip_bit);
}
