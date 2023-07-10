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
	int i = 0;
	char *ptr =  malloc(sizeof(char) * size);

	while (i < sizeof(char) * size)
	{
		ptr[i] = c;
		++i;
	}
}
