#include <stdio.h>

/**
 * linear_search - this function performs linear search
 * @array: array
 * @size: length
 * @value: searh criteria
 * Return: 0 or 1
 */
int linear_search(int *array, size_t size, int value)
{
	for (int i = 0; i < size; ++i)
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
