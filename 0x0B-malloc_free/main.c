#include "main.h"

int main(void)
{
	int **grid;
	grid = alloc_grid(20, 20);
	free(grid);
	return 0;

}
