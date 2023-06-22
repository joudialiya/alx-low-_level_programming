#include "main.h"

/**
 * print_line - print a line using '_'
 * @n: number of '_'
 */
void print_line(int n)
{
	int i = 0;

	while (n > 0 && i++ < n)
		_putchar('_');
	_putchar('\n');
}
