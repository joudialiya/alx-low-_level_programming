#include "main.h"

/**
 * print_square - print square
 * @n: edge size
 */
void print_square(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			int f;

			for (f = 0; f < n; ++f)
				_putchar('#');
			_putchar('\n');
			++i;
		}
	}
}
