#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: borad
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int n = 0;

	while (i < 8)
	{
		n = 0;
		while (n < 8)
		{
			_putchar(a[i][n]);
			++n;
		}

		_putchar('\n');
		++i;
	}
}
