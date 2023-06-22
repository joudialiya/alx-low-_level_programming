#include "main.h"

/**
 * print_diagonal - print diagonal line
 * @n: number of '\'
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i < n)
		{
			int f;

			for (f = 0; f < i; ++f)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			++i;
		}
	}
}
