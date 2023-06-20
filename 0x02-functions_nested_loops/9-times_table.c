#include "main.h"

/**
 * times_table - print 9 times table
 */
void times_table(void)
{
	int row = 0;

	while (row < 10)
	{
		int n = 0;

		while (n < 10)
		{
			if (n == 0)
				_putchar('0');
			else
			{
				/* padding */
				if (n * row  >= 10)
				{
					_putchar(' ');
					_putchar('0' + n * row / 10);
					_putchar('0' + (n * row) % 10);
				}
				else
				{
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
