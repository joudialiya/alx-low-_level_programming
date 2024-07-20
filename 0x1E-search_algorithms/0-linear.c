#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - this function performs linear search
 * @array: array
 * @size: length
 * @value: searh criteria
 * Return: 0 or 1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
