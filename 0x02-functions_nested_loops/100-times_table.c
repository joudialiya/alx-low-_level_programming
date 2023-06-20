#include "main.h"

/**
 * print_number - print a number using _putchar, helper func
 * @n: number
 */
void print_number(int n)
{
	if (n >= 100)
	{
		_putchar(' ');
		_putchar('0' + n / 100);
		_putchar('0' + (n - 100 * (n / 100)) / 10);
		_putchar('0' + (n - 100 * (n / 100)) % 10);
	}
	else if (n * row  >= 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + n / 10);
		_putchar('0' + (n) % 10);
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + n);
	}
}

/**
 * print_times_table - print n times table
 * @j: number
 */
void print_times_table(int j)
{
	int row = 0;

	if (j > 15 || j < 0)
		return;

	while (row < j + 1)
	{
		int n = 0;

		while (n < j + 1)
		{
			if (n == 0)
				_putchar('0');
			else
			{
				print_number(row * n);
			}
			if (n != j)
				_putchar(',');
			++n;
		}
		_putchar('\n');
		++row;
	}
}
