#include "main.h"

/**
 * more_numbers - from 1 to 14 10 times.
 */
void more_numbers(void)
{
	int n = 0;

	while (n < 10 * 15)
	{
		if (n % 15 >= 10)
			_putchar('0' + (n % 15) / 10);

		_putchar('0' + (n % 15) % 10);

		++n;
		if (n % 15 == 0)
			_putchar('\n');
	}
}
