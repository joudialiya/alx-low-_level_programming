#include "main.h"

/**
 * print_number - print a num
 * @n: num
 */
void print_number(int n)
{
	int g = 1;

	while (n / g > 10)
		g *= 10;
	while (g > 0)
	{
		_putchar('0' + n / g);
		n = n % g;
		g /= 10;
	}
}
