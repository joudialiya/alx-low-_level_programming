#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the number
 *
 * Return: null
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
