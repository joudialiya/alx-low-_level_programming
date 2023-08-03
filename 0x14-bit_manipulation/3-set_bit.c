#include "main.h"

/**
 * set_bit - set the bit in the index location
 * @n: number
 * @index: index
 *
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
