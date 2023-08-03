#include "main.h"

/**
 * get_endianness - checke if we have a Little Endian or Big
 *
 * Return: 1 or 0 [1 Little, 0 Big]
 */
int get_endianness(void)
{
	unsigned long int tmp = 1;
	unsigned int *ptr = NULL;

	ptr = (unsigned int *)&tmp;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
