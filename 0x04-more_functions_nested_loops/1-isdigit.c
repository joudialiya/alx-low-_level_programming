#include "main.h"

/**
 * _isdigit - checkes if digit
 * @c: character
 *
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
