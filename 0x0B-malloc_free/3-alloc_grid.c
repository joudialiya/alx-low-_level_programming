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
	int **ptr = 0;
	int *p = 0;
	int i = 0;

	if (w <= 0 || h <= 0)
		return (0);

	ptr = (int **)malloc(sizeof(int *) * h + sizeof(int) * h * w);

	if (ptr == 0)
		return (0);

	p = (int *)(ptr + h);

	while (i < h * w)
	{
		p[i] = 'c';
		++i;
	}

	i = 0;
	while (i < h)
	{
		ptr[i] = p + i * w;
		++i;
	}

	return (ptr);
}
