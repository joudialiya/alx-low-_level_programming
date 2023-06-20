#include "main.h"

/**
 * print_to_98 - print to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 10)
			_putchar('0' + n);
		else
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		++n;
	}
	_putchar('\n');
}
