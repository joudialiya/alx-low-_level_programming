#include "main.h"

/**
 * array_range - create an array with the given range
 * @min: min
 * @max:max
 *
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int *ptr = 0;
	int size = 0;
	int i = 0;

	if (max < min)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	while (i <= size)
	{
		ptr[i] = min + i;
		++i;
	}

	return (ptr);
}
