#include "function_pointers.h"

/**
 * array_iterator - JAVA huh
 * @array: ptr to int[]
 * @size: size of the array
 * @action: action to do on the elements of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (arry == NULL || action == NULL)
		return;

	for (int i = 0; i < size; ++i)
		(*action(array[i]);
}
