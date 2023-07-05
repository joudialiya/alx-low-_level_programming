#include "main.h"

/**
 * sqrt_helper - sqrt
 * @index: index
 * @n : num
 *
 * Return: sqrt
 */
int sqrt_helper(int index, int n)
{
	int r = index * index;

	if (r == n)
		return (index);
	if (r > n)
		return (-1);
	return (sqrt_helper(index + 1, n));
}

/**
 * _sqrt_recursion - sqrt
 * @n: num
 *
 * Return: sqrt of a num
 */
int _sqrt_recursion(int n)
{
	return (sqrt_helper(0, n));
}
