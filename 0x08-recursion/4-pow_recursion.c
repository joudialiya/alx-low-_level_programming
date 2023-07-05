#include "main.h"

/**
 * _pow_recursion - power
 * @x: num
 * @y: pow
 *
 * Return: power of a num
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(y - 1));
}
