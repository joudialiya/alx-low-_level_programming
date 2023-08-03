#include "main.h"

/**
 * print_binary - print a binary number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;

	mask = mask << 63;
	while (mask != 0 && (mask & n) == 0)
	{
		mask = mask >> 1;
	}
	if (mask == 0)
	{
		_putchar('0');
		return;
	}
	while (mask != 0)
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');
		mask = mask >> 1;
	}
}
