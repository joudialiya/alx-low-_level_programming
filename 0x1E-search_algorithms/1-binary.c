#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - this function performs linear search
 * @array: sorted array
 * @size: length
 * @value: searh criteria
 * Return: 0 or 1
 */
int binary_search(int *array, size_t size, int value)
{
	return (_helper(array, 0, size - 1, value));
}

/**
 * _helper - recurssive function to perform binary search
 * @array: sorted array
 * @start: offset
 * @end: length
 * @value: searh criteria
 * Return: 0 or 1
 */
int _helper(int *array, size_t start, size_t end, int value)
{

	size_t middle_index = 0;
	int middle_value = 0;

	if (start > end)
		return (-1);

	middle_index = (start + end) / 2;
	middle_value = array[middle_index];

	print_array(array, start, end);

	if (middle_value == value)
	{
		return (middle_index);
	}

	if (value < middle_value)
	{
		return (_helper(array, start, middle_index - 1, value));
	}
	return (_helper(array, middle_index + 1, end, value));
}

/**
 * print_array - print an array
 * @array: sorted array
 * @start: start index
 * @end: end index
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i = start;

	printf("Searching in array: ");
	for (; i <= end; ++i)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
}
