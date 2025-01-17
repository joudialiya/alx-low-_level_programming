#include <stdlib.h>
#include "main.h"

/**
 * create_array - creat array and init it
 * @size:  size of the array
 * @c: char
 *
 * Return: ptr
 */
char *create_array(unsigned int size, char c)
{
	unsigned long i = 0;
	char *ptr = NULL;

	ptr = malloc(sizeof(char) * size);

	if (ptr == 0 || size == 0)
		return (0);

	while (i < sizeof(char) * size)
	{
		ptr[i] = c;
		++i;
	}

	return (ptr);
}
