#include "main.h"

/**
 * malloc_checked - safer version
 * @b : bytes
 *
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = 0;

	ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
