#include "function_pointers.h"

/**
 * int_index - first match of cmp callback
 * @array: ptr to int[]
 * @size: size of the array
 * @cmp: matching callback function
 *
 * Return: the index of the first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; ++i)
		if (cmp(array[i]))
			break;
	if (i == size)
		return (-1);

	return (i);
}
