#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum diag of a matrix
 * @a: mat
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int (*b)[size] = (int (*)[])a;
	int i = 0;
	long lr = 0;
	long rl = 0;

	while (i < size)
	{	
		lr += b[i][i];
		rl += b[i][size - 1 - i];
		++i;
	}
	printf("%ld, %ld\n", lr, rl);
}
