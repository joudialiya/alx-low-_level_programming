#include "main.h"

/**
 * print_number - print a num
 * @n: num
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n / 10 != 0)
		print_number(n / 10);

	_putchar('0' + n % 10);

}
