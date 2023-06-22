#include "main.h"

/**
 * more_numbers - from 1 to 14 10 times.
 */
void more_numbers(void)
{
	int i = 0;
	int n = 0;

	while (n < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i < 10)
				_putchar('0' + i);
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
			++i;
		}
		++n;
		_putchar('\n');
	}
}
