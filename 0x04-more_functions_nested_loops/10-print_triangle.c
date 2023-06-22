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

			for (f = 0; f < n - i; ++f)
				_putchar(' ');
			for (; f < n - i; ++f)
				_putchar('#');
			_putchar('\n');
			++i;
		}
	}
}
