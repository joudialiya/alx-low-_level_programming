#include "variadic_functions.h"

/**
 * sum_them_all - function that return the sum of the passed args
 * @n: number oof int passed
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int r = 0;
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		r += va_arg(args, int);
		++i;
	}

	va_end(args);

	return (r);
}
