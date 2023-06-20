#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit
 * @n: the number
 *
 * Return: null
 */
int print_last_digit(int n)
{
	_putchar ('0' + ((n > 0) ? (n % 10) : -(n % 10)));
	return ((n > 0) ? (n % 10) : -(n % 10));
}
