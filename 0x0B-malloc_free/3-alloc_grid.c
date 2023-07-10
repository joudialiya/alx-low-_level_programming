#include "main.h"

/**
 * alloc_grid - alloc a int grid
 * @w: width
 * @h: heigth
 *
 * Return: ptr;
 */

int **alloc_grid(int w, int h)
{
	int *ptr = 0;
	int **p = 0;
	int i = 0;

	if (w <= 0 || h <= 0)
		return (0);

	ptr = (int *)malloc(sizeof(int) * w * h);
	p = (int **)malloc(sizeof(int *) * h);

	while (i < h)
	{
		p[i] = ptr +  i * w;
		++i;
	}

	return (p);
}
