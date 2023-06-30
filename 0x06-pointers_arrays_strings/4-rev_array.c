#include "main.h"

/**
 * reverse_array - reverse an array of int
 * @a: the array
 * @nL size of the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		int tmp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
