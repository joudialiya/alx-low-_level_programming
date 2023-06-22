#include "main.h"

/**
 * _isupper - checkes for upper case chars
 * @c: character
 *
 * Return: 1 if upper 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
