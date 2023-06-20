#include "main.h"

/**
 * print_times_table - print n times table
 * @j: number
 */
void print_times_table(int j)
{
	int row = 0;

	if (j > 15 || j < 0)
		return;

	while (row < j)
	{
		int n = 0;

		while (n < j)
		{
			if (n == 0)
				_putchar('0');
			else
			{
				if (n * row  >= 100)
				{
					_putchar(' ');
					_putchar('0' + n * row / 100);
					_putchar('0' + (n * row - 100 * (n * row / 100) / 10));
					_putchar('0' + (n * row - 100 * (n * row / 100) % 10));
				}
				else if (n * row  >= 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + n * row / 10);
					_putchar('0' + (n * row) % 10);
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + n * row);
				}
			}
			if (n != 9)
				_putchar(',');
			++n;
		}
		_putchar('\n');
		++row;
	}
}
