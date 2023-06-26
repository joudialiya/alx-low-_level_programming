#include <stdio.h>
#include "main.h"

/**
 * print_array - print array of integers
 * @a: array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", *(a + index));
		++index;
		if (index != n)
			printf(", ");
	}
	printf("\n");
}
