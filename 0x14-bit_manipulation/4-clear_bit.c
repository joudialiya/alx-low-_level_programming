#include "main.h"

/**
 * clear_bit - clear the bit in the index location
 * @n: number
 * @index: index
 *
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n ^ (*n & (1 << index));
	return (1);
}
