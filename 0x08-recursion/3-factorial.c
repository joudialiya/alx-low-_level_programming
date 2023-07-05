#include "main.h"

/**
 * factorial - fact of a num
 * @n: num
 *
 * Return: fact
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
