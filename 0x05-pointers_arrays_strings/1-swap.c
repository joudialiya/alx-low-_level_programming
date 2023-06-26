#include "main.h"

/**
 * swap_int - swap the values of the two vars
 * @n: first
 * @m: second
 */
void swap_int(int *n, int *m)
{
	int tmp;

	tmp = *n;
	*n = *m;
	*m = tmp;
}
