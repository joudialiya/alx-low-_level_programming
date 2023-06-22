#include "main.h"

/**
 * print_triangle - print triangle
 * @n: size
 */
void print_triangle(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			int f;

			f = 0;
			for (; f < n - i - 1; ++f)
				_putchar(' ');
			for (; f < n; ++f)
				_putchar('#');
			_putchar('\n');
			++i;
		}
	}
}
