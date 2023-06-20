#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the charater
 *
 * Return:
 * 1 if the char is lower or uppercase
 * 0 otherways
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
