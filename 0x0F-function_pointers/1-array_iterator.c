#include "function_pointers.h"

/**
 * array_iterator - JAVA huh
 * @array: ptr to int[]
 * @size: size of the array
 * @action: action to do on the elements of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; ++i)
		(*action)(array[i]);
}
