#include "main.h"

/**
 * get_bit - get the bit in the index location
 * @n: number
 * @index: index
 *
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n & (1 << index)) >> index);
}
