#include "main.h"

/**
 * flip_bits - the number of bits to flip to get a number from another
 * @n: number
 * @m: 2nd number
 *
 * Return: uint
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int r = 0;
	unsigned long int mask = 1;

	mask <<= 63;

	while (mask != 0)
	{
		if ((mask & n) != (mask & m))
			++r;
		mask >>= 1;
	}
	return (r);
}
