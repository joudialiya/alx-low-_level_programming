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
	int **p = 0;
	int i = 0;

	if (w <= 0 || h <= 0)
		return (0);

	p = (int **)malloc(sizeof(int *) * h);

	if (p == 0)
		return (0);

	i = 0;
	while (i < h)
	{
		int j = 0

		p[i] = (int *)malloc(sizeof(int) * w);

		if (p[i] == 0)
			return (0);

		while (j < w)
		{
			p[i][j] = 0;
			++j;
		}
		++i;
	}

	return (p);
}
