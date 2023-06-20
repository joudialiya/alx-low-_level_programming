#include "main.h"

/**
 * print_times_table - print n times table
 * @n: number
 */
void print_times_table(int n)
{
	int row = 0;

	while (row < n)
	{
		int n = 0;

		while (n < n)
		{
			if (n == 0)
				_putchar('0');
			else
			{
				if (n * row  >= 100)
				{
					_putchar(' ');
					_putchar('0' + n * row / 100);
					_putchar('0' + (n * row - 100 * (n * row / 100) / 10);
					_putchar('0' + (n * row - 100 * (n * row / 100) % 10);
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
