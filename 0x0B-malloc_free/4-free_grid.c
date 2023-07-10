#include "main.h"

/**
 * free_grid - free the grid
 * @grid: ptr
 * @h: heigth of the grid
 */
void free_grid(int **grid, int h)
{
	(void)h;
	free(grid);
}
